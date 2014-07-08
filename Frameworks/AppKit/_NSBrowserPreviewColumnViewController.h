//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSBrowserColumnViewController.h>

@class NSViewController;

@interface _NSBrowserPreviewColumnViewController : NSBrowserColumnViewController
{
    NSViewController *_previewViewController;
}

@property(retain, nonatomic) NSViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void)setMenu:(id)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
- (double)widthThatFits;
- (id)dragImageForRowsWithIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (void)setNeedsDisplayInRow:(long long)arg1;
- (void)editRow:(long long)arg1 withEvent:(id)arg2 select:(BOOL)arg3;
- (id)preparedCellAtRow:(long long)arg1;
- (id)titleOfSelectedRow;
- (void)scrollRowToCenter:(long long)arg1;
- (void)reloadData;
- (void)setSelectionIndexes:(id)arg1;
- (id)selectionIndexes;
- (long long)nextValidRowIndexAfterIndex:(long long)arg1;
- (long long)firstValidRowIndex;
- (unsigned long long)numberOfRows;
- (void)setAllowsTypeSelect:(BOOL)arg1;
- (BOOL)allowsTypeSelect;
- (void)setBackgroundColor:(id)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (BOOL)allowsEmptySelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;
- (void)dealloc;

@end

