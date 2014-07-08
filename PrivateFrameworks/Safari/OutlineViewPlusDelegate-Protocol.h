//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineViewDelegate.h"

@class NSArray, NSEvent, NSImage, NSIndexSet, NSMenu, NSOutlineView, NSTableColumn;

@protocol OutlineViewPlusDelegate <NSOutlineViewDelegate>

@optional
- (NSMenu *)outlineView:(NSOutlineView *)arg1 menuForEvent:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
- (NSImage *)outlineView:(NSOutlineView *)arg1 dragImageForRowsWithIndexes:(NSIndexSet *)arg2 tableColumns:(NSArray *)arg3 event:(NSEvent *)arg4 offset:(struct CGPoint *)arg5;
- (BOOL)outlineView:(NSOutlineView *)arg1 keyDown:(NSEvent *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldEditOnSingleClick:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldEditOnDoubleClick:(NSEvent *)arg2 inRow:(long long)arg3 tableColumn:(NSTableColumn *)arg4;
- (BOOL)outlineView:(NSOutlineView *)arg1 selectionShouldChangeFromMouseDownInRow:(long long)arg2 tableColumn:(NSTableColumn *)arg3;
@end

