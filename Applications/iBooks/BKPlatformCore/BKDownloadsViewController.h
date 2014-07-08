//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BKDownloadsCellViewDelegate.h"
#import "BKDownloadsHeaderViewDelegate.h"
#import "IMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class BKPlatformPopover, BKUpdatesAndDownloadsController, IMTableView, NSManagedObjectContext, NSString;

@interface BKDownloadsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, BKDownloadsHeaderViewDelegate, BKDownloadsCellViewDelegate, IMTableViewDelegate>
{
    BKUpdatesAndDownloadsController *_downloadsController;
    BKPlatformPopover *_containingPopover;
    IMTableView *_tableView;
    NSManagedObjectContext *_managedObjectContext;
}

@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) IMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak BKPlatformPopover *containingPopover; // @synthesize containingPopover=_containingPopover;
- (void).cxx_destruct;
- (void)deleteSelectionFromTableView:(id)arg1;
- (id)possibleTitleStringsForActionButton:(id)arg1;
- (void)performCellViewDetailAction:(id)arg1;
- (void)performCellViewPauseResume:(id)arg1;
- (void)performCellViewAction:(id)arg1;
- (id)cellView:(id)arg1 downloadStatusForAsset:(id)arg2;
- (id)possibleTitleStringsForPauseUpdateAllButton:(id)arg1;
- (void)performPauseUpdateAllAction:(id)arg1;
- (void)_closeWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_canReachInternet;
- (void)p_updateCellBorders;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)_isGroupRow:(long long)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)allUpdatesUpdated;
- (BOOL)anyUpdatesNeedUpdating;
- (BOOL)anyDownloadsResumeable;
- (BOOL)anyDownloadsPauseable;
- (double)heightForContent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadDataAndAdjust;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

