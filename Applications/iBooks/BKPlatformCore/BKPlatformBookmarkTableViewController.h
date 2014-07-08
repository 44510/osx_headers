//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "BKPlatformBookmarkObserver.h"
#import "NSTableViewDelegate.h"

@class NSArrayController, NSObject<BKPlatformBookmarkTableViewControllerDelegate>, NSString, NSTableView;

@interface BKPlatformBookmarkTableViewController : NSViewController <NSTableViewDelegate, BKPlatformBookmarkObserver>
{
    NSObject<BKPlatformBookmarkTableViewControllerDelegate> *_delegate;
    id <BKPlatformBookmarkProvider> _bookmarkProvider;
    NSTableView *_tableView;
    NSArrayController *_arrayController;
    struct CGSize _thumbnailFrameSize;
}

@property(nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) struct CGSize thumbnailFrameSize; // @synthesize thumbnailFrameSize=_thumbnailFrameSize;
@property(nonatomic) id <BKPlatformBookmarkProvider> bookmarkProvider; // @synthesize bookmarkProvider=_bookmarkProvider;
@property(nonatomic) NSObject<BKPlatformBookmarkTableViewControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)pReloadBookmarks;
- (void)bookmarksUpdated;
- (BOOL)p_isMouseInsideView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)removeBookmark:(id)arg1;
@property(readonly, nonatomic) double preferredHeight;
- (void)loadView;
- (void)dealloc;
- (void)teardown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
