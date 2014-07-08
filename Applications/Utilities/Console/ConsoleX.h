//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "NSOpenSavePanelDelegate.h"

@class GroupSidebarItem, IgnoreListController, NSArray, NSFont, NSMenu, NSMutableArray, NSObject<OS_dispatch_queue>, NSSegmentedControl, NSString, NSView, PrefsController;

@interface ConsoleX : NSObject <NSOpenSavePanelDelegate, NSMenuDelegate>
{
    PrefsController *_prefsController;
    IgnoreListController *_ignoreListController;
    NSMenu *_encodingMenu;
    unsigned long long _printingSuccess;
    GroupSidebarItem *_rootSidebarItem;
    NSView *_colourViewAccessory;
    NSSegmentedControl *_colourViewControl;
    NSObject<OS_dispatch_queue> *__logControllersQueue;
    NSMutableArray *__logControllers;
    NSFont *_consoleFont;
}

@property(retain) NSFont *consoleFont; // @synthesize consoleFont=_consoleFont;
@property(retain) NSMutableArray *_logControllers; // @synthesize _logControllers=__logControllers;
@property(retain) NSObject<OS_dispatch_queue> *_logControllersQueue; // @synthesize _logControllersQueue=__logControllersQueue;
@property(retain) NSSegmentedControl *colourViewControl; // @synthesize colourViewControl=_colourViewControl;
@property(retain) NSView *colourViewAccessory; // @synthesize colourViewAccessory=_colourViewAccessory;
- (void).cxx_destruct;
- (void)stopSpewToSyslog:(id)arg1;
- (void)spewToSyslog:(id)arg1;
- (void)selfTest:(id)arg1;
- (void)application:(id)arg1 runTest:(unsigned int)arg2 duration:(double)arg3;
- (void)encodingsListChangedNotification:(id)arg1;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menu:(id)arg1 updateItem:(id)arg2 atIndex:(long long)arg3 shouldCancel:(BOOL)arg4;
- (unsigned long long)numberOfItemsInMenu:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)colourPanelChanged:(id)arg1;
- (void)colourSegementedSwitchChanged:(id)arg1;
- (void)toggleColourPanel:(id)arg1;
- (id)backgroundColour;
- (id)foregroundColour;
- (unsigned long long)validModesForFontPanel:(id)arg1;
- (void)takeFontFrom:(id)arg1;
- (void)changeFontSizeSmaller:(id)arg1;
- (void)changeFontSizeBigger:(id)arg1;
- (void)_setFontAndNotify;
- (id)font;
- (void)showMessageExpanded:(id)arg1;
- (void)showTimeStyle:(id)arg1;
- (void)showSenderIconStyle:(id)arg1;
- (void)showSenderBoldStyle:(id)arg1;
- (void)showSenderStyle:(id)arg1;
- (void)_toggleDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)application:(id)arg1 printFiles:(id)arg2 withSettings:(id)arg3 showPrintPanels:(BOOL)arg4;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2;
- (void)showIgnoreListPanel:(id)arg1;
- (void)showPrefsPanel:(id)arg1;
- (void)showInfoPanel:(id)arg1;
- (void)openTerminal:(id)arg1;
- (void)openActivityMonitor:(id)arg1;
- (void)showMessageInspector:(id)arg1;
- (BOOL)aslLogControllerIsKeyWindow;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)open:(id)arg1;
- (void)openQuickly:(id)arg1;
- (void)openASLDatabaseWindow:(id)arg1;
- (void)openSystemLogWindow:(id)arg1;
- (void)openASLLogWindow:(id)arg1;
- (void)newASLQueryWindow:(id)arg1;
- (void)newLogWindow:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (id)createDefaultLogControlller;
- (id)createLogControllerForPath:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)reloadQueryWindows;
- (void)_preferencesDidChange:(id)arg1;
- (id)userQueriesDirectory;
- (id)queryWindowControllerWithSidebarItem:(id)arg1;
- (id)logControllerWithSidebarItem:(id)arg1;
- (void)_removeLogControllerViaNotification:(id)arg1;
- (void)_removeLogController:(id)arg1;
- (void)_addLogController:(id)arg1;
@property(readonly) __weak NSArray *logControllers;
- (id)rootSidebarItem;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

