//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "VisualTabPickerCloudTabsViewDataSource.h"
#import "VisualTabPickerCloudTabsViewDelegate.h"
#import "VisualTabPickerGridViewDataSource.h"
#import "VisualTabPickerGridViewDelegate.h"
#import "VisualTabPickerSearchFieldDelegate.h"

@class BrowserWindowControllerMac, NSArray, NSDictionary, NSImage, NSMutableArray, NSOperationQueue, NSString, VisualTabPickerRootView;

__attribute__((visibility("hidden")))
@interface VisualTabPickerViewController : NSViewController <VisualTabPickerSearchFieldDelegate, VisualTabPickerCloudTabsViewDataSource, VisualTabPickerCloudTabsViewDelegate, VisualTabPickerGridViewDataSource, VisualTabPickerGridViewDelegate>
{
    VisualTabPickerRootView *_rootView;
    NSArray *_orderedTabViewItems;
    NSArray *_filteredTabViewItems;
    NSOperationQueue *_filterQueue;
    NSString *_searchText;
    NSMutableArray *_allCloudTabDevices;
    NSArray *_filteredCloudTabDevices;
    BOOL _didFinishEntryAnimation;
    NSDictionary *_overriddenCloudDevicesNames;
    BOOL _shouldStackThumbnails;
    BOOL _tabsShouldBeClosable;
    BOOL _addingNewTab;
    BOOL _closing;
    BrowserWindowControllerMac *_browserWindowController;
    id <VisualTabPickerDelegate> _delegate;
    NSImage *_tabBarSnapshot;
}

+ (id)springAnimationForVisualTabPicker;
@property(retain, nonatomic) NSImage *tabBarSnapshot; // @synthesize tabBarSnapshot=_tabBarSnapshot;
@property(readonly, nonatomic, getter=isClosing) BOOL closing; // @synthesize closing=_closing;
@property(readonly, nonatomic, getter=isAddingNewTab) BOOL addingNewTab; // @synthesize addingNewTab=_addingNewTab;
@property(nonatomic) BOOL tabsShouldBeClosable; // @synthesize tabsShouldBeClosable=_tabsShouldBeClosable;
@property(nonatomic) BOOL shouldStackThumbnails; // @synthesize shouldStackThumbnails=_shouldStackThumbnails;
@property(nonatomic) __weak id <VisualTabPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak BrowserWindowControllerMac *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
- (void).cxx_destruct;
- (id)_cloudTabAtIndex:(unsigned long long)arg1 forDeviceAtIndex:(unsigned long long)arg2;
- (id)_dictionaryForCloudDeviceAtIndex:(unsigned long long)arg1;
- (id)_cloudDeviceAtIndex:(unsigned long long)arg1;
- (id)_tabItemForRepresentedCloudTabObject:(id)arg1;
- (void)_reloadCloudTabData;
- (void)_syncedCloudTabDevicesDidChange:(id)arg1;
- (void)_reloadCloudTabsView;
- (void)_updateTabsShouldBeClosable;
- (void)_tabsDidChange:(id)arg1;
- (id)_tabFilterInfoForOrderedTabs;
- (void)_resetFilterState;
- (id)_displayedCloudTabDevices;
- (BOOL)_doesSearchResultsContainSelectedTab;
- (void)_performAsynchronousFilter;
- (void)_reloadGridView;
- (void)_reloadLocalTabData;
- (void)visualTabPickerCloudTabsView:(id)arg1 didRemoveCloudTabAtIndex:(unsigned long long)arg2 forDeviceAtIndex:(unsigned long long)arg3;
- (void)visualTabPickerCloudTabsView:(id)arg1 didSelectCloudTabAtIndex:(unsigned long long)arg2 forDeviceAtIndex:(unsigned long long)arg3;
- (BOOL)closeRequestSupportedForVisualTabPickerCloudTabsView:(id)arg1 forDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 titleOfTabAtIndex:(unsigned long long)arg2 forDeviceAtIndex:(unsigned long long)arg3;
- (unsigned long long)visualTabPickerCloudTabsView:(id)arg1 numberOfTabsForDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 iconForDeviceAtIndex:(unsigned long long)arg2;
- (id)visualTabPickerCloudTabsView:(id)arg1 nameOfDeviceAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDevicesForVisualTabPickerCloudTabsView:(id)arg1;
- (void)visualTabPickerSearchFieldTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)visualTabPickerGridViewCloseTabViewItem:(id)arg1;
- (double)tilesHeightToWidthRatioInVisualTabPickerGridView:(id)arg1;
- (id)orderedTabItemsInVisualTabPickerGridView:(id)arg1;
- (BOOL)isSearching;
- (void)focusSearchField;
- (struct BrowserContentViewController *)createNewEmptyTabAndCloseVisualTabPicker;
- (struct CGRect)contentLayoutRect;
- (void)createNewTabAndCloseVisualTabPicker;
- (unsigned long long)indexOfSelectedTab;
- (BOOL)shouldStackMultipleThumbnailsInOneContainerIfPossible;
- (BOOL)shouldDisplayRealWebViews;
- (BOOL)entryOrExitAnimationInProgress;
- (void)didFinishEntryAnimation;
- (void)startEntryAnimation;
- (void)removeVisualTabPickerFromViewHierarchy;
- (void)closeVisualTabPicker;
- (void)willCloseVisualTabPicker;
- (double)tabPickerAnimationDuration;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

