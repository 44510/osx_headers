//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CPView3DSource.h"

@class CPView3D, GView2D, GView3D, NSArray, NSTableView, NSView;

@interface CPNewDocumentDialog : NSWindowController <CPView3DSource>
{
    id mTabView;
    GView2D *mLayout2DDataView;
    NSTableView *mLayout2DTableView;
    NSView *mLayout2DView;
    NSArray *mLayout2DDataSource;
    GView3D *mLayout3DDataView;
    NSTableView *mLayout3DTableView;
    CPView3D *mLayout3DView;
    NSArray *mLayout3DDataSource;
}

+ (id)layoutForNewDocument;
+ (BOOL)newDocumentIs2D;
- (void)showNewDocumentWindow;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)close;
- (void)glDrawView:(id)arg1 opaque:(BOOL)arg2;
- (void)applySettingsToView:(id)arg1;
- (void)glDrawBackgroundOfView:(id)arg1 withWidth:(double)arg2 height:(double)arg3;
- (void)drawInteriorWithRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_showLayout:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)layoutViewFrameDidChange:(id)arg1;
- (id)init;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;

@end

