//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DUBaseWindowController.h"

#import "DMAsyncDelegate.h"
#import "DUListWindowProtocol.h"
#import "NSTabViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSToolbarDelegate.h"

@class DMCoreStorage, DMManager, DUDisk, DUDiskListViewController, DUModule, DUModuleManager, DUWindowControllerInfoPanel, NSButton, NSLock, NSMutableArray, NSProgressIndicator, NSSplitView, NSString, NSTabView, NSTabViewItem, NSTableColumn, NSTableView, NSTextField, NSView, NSWindow;

@interface DUWindowController : DUBaseWindowController <DUListWindowProtocol, NSToolbarDelegate, NSTabViewDelegate, NSTableViewDataSource, DMAsyncDelegate>
{
    NSSplitView *splitInnerView;
    id statusAreaView;
    NSTabView *panelTabView;
    NSTabViewItem *blankTabViewItem;
    NSTextField *messageTextView;
    NSProgressIndicator *startupProgressBar;
    NSView *listView;
    NSButton *helpButton;
    DUWindowControllerInfoPanel *extendedInfoController;
    DUDiskListViewController *diskListViewController;
    NSWindow *repairSheet;
    NSTextField *repairSheetErrorLabel;
    NSTextField *repairSheetPromptLabel;
    NSTextField *repairSheetEraseLabel;
    NSTableView *replacementDiskTable;
    NSTableColumn *diskListIconColumn;
    NSTableColumn *diskListNameColumn;
    NSButton *recreateButton;
    BOOL _checkForFusionDrives;
    DUDisk *workingRepairDisk;
    BOOL deletingLVG;
    BOOL recreatingLVG;
    NSMutableArray *newLVGDADiskArray;
    NSMutableArray *victimDiskArray;
    NSString *savedLVGName;
    DUModuleManager *moduleManager;
    NSMutableArray *moduleTabViewList;
    BOOL tabsUpdateOnSelection;
    NSMutableArray *listTabViewList;
    NSMutableArray *replacementDiskList;
    DUModule *dfaModule;
    DUModule *asrModule;
    NSLock *warningMessageLock;
    DMManager *dm;
    DMCoreStorage *dmcs;
}

+ (void)initialize;
@property(retain) DUModule *asrModule; // @synthesize asrModule;
@property(retain) DUModule *dfaModule; // @synthesize dfaModule;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)diskIsSuitableReplacementDisk:(id)arg1;
- (BOOL)selectDiskInDiskListByDMDisk:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)handleContextualMenu:(id)arg1;
- (BOOL)globalTextPersistent;
- (void)setGlobalPersistentAttributedMessageText:(id)arg1;
- (void)setGlobalPersistentMessageText:(id)arg1;
- (void)setGlobalProgressText:(id)arg1;
- (void)activateGlobalProgressText:(BOOL)arg1;
- (void)activateGlobalProgressBar:(BOOL)arg1;
- (void)stopGlobalProgressBarAnimation:(id)arg1;
- (void)startGlobalProgressBarAnimation:(id)arg1;
- (void)setGlobalProgressBarIndeterminate:(BOOL)arg1;
- (void)setGlobalProgressBarValue:(double)arg1;
- (id)globalProgressBar;
- (id)allSelectedItems:(BOOL)arg1 filterDuplicates:(BOOL)arg2;
- (id)allSelectedItems;
- (id)selectedRAIDs;
- (id)selectedVolumes;
- (id)selectedDisks;
- (void)dmAsyncFinishedForDisk:(struct __DADisk *)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(id)arg4;
- (void)dmAsyncMessageForDisk:(struct __DADisk *)arg1 string:(id)arg2 dictionary:(id)arg3;
- (void)dmAsyncProgressForDisk:(struct __DADisk *)arg1 barberPole:(BOOL)arg2 percent:(float)arg3;
- (void)dmAsyncStartedForDisk:(struct __DADisk *)arg1;
- (void)_recreateCDSheetAreYouSure:(id)arg1 returnCode:(long long)arg2;
- (void)recreateCDSheet:(id)arg1 didEndWithResult:(long long)arg2;
- (void)setupDMCS;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)checkFlaggedForFixing;
- (BOOL)_systemSupportsCompositeDisks;
- (BOOL)_hasInternalCoreStorage;
- (BOOL)_isStoredInternally:(id)arg1;
- (id)volumesStringForCount:(long long)arg1;
- (id)disksStringForCount:(long long)arg1;
- (void)unselectAllDisks:(id)arg1;
- (void)dmToolDied:(id)arg1;
- (void)cancelRecreateCD:(id)arg1;
- (void)recreateCD:(id)arg1;
- (id)extendedInfoController;
- (void)helpButtonAction:(id)arg1;
- (id)listController;
- (void)stuffChanged:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)endWindowSwitchWarn:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (id)activeDUModule;
- (void)interfaceLockChanged:(id)arg1;
- (void)notifyWindowOfEvent:(id)arg1 diskNotification:(id)arg2;
- (void)forceUpdateWindow:(id)arg1;
- (void)printModuleSpecific:(id)arg1;
- (BOOL)canPrint;
- (id)warnOnSwitch;
- (id)warnOnQuit;
- (id)warnOnClose;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowIsClosing:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)endWindowCloseWarn:(id)arg1 returnCode:(long long)arg2;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (BOOL)validateEjectDiskToolbarItem:(id)arg1 altText:(unsigned long long *)arg2;
- (BOOL)validateMountDiskToolbarItem:(id)arg1 altText:(unsigned long long *)arg2;
- (void)openLogToolbarAction:(id)arg1;
- (void)ejectDiskToolbarAction:(id)arg1;
- (void)openOfflineDiskToolbarAction:(id)arg1;
- (void)unlockDiskToolbarAction:(id)arg1;
- (void)unmountDiskToolbarAction:(id)arg1;
- (void)mountDiskToolbarAction:(id)arg1;
- (void)infoDiskToolbarAction:(id)arg1;
- (void)enableJournalDiskToolbarAction:(id)arg1;
- (void)imageScanToolbarAction:(id)arg1;
- (void)resizeImageToolbarAction:(id)arg1;
- (void)checksumImageToolbarAction:(id)arg1;
- (void)verifyImageToolbarAction:(id)arg1;
- (void)attachImageToolbarAction:(id)arg1;
- (void)convertImageToolbarAction:(id)arg1;
- (void)newImageToolbarAction:(id)arg1;
- (void)burnImageToolbarAction:(id)arg1;
- (void)prePopulateRestoreTab:(id)arg1;
- (void)verifySelected:(id)arg1;
- (void)bringModuleToFront:(id)arg1;
- (id)moduleWithType:(id)arg1;
- (BOOL)diskIsRemovable:(id)arg1;
- (BOOL)validateInfoDiskToolbarItem:(id)arg1;
- (BOOL)validateJournalDiskToolbarItem:(id)arg1 altText:(unsigned long long *)arg2;
- (BOOL)validateImageScanToolbarItem:(id)arg1;
- (BOOL)validateResizeImageToolbarItem:(id)arg1;
- (BOOL)validateChecksumImageToolbarItem:(id)arg1;
- (BOOL)validateVerifyImageToolbarItem:(id)arg1;
- (BOOL)validateAttachImageToolbarItem:(id)arg1;
- (BOOL)validateConvertImageToolbarItem:(id)arg1;
- (BOOL)validateNewImageToolbarItem:(id)arg1;
- (BOOL)validateBurnToolbarItem:(id)arg1;
- (void)immediateDisableToolbarButtons;
- (void)selfTestVisibleModulesForDisk:(id)arg1 withTimingInfo:(id)arg2;
- (id)moduleWithName:(id)arg1;
- (id)hiddenModulesForDisk:(id)arg1;
- (void)reloadData;
- (BOOL)selectedIsOpenable;
- (BOOL)selectedCanBeUnlocked;
- (BOOL)selectedIsMountable;
- (void)loadModules;
- (void)setTabsUpdateOnSelection:(BOOL)arg1;
- (BOOL)tabsUpdateOnSelection;
- (void)doneWaitingForDisks:(id)arg1;
- (void)updateModuleTabViews:(id)arg1;
- (void)setupToolbar;
- (void)setupInfoPanel;
- (void)setupDiskListView;
- (id)listView;
- (id)disksContainSMARTErrors:(id)arg1;
- (void)setWindowTitleOnSelection:(id)arg1;
- (void)fullListReceived:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

