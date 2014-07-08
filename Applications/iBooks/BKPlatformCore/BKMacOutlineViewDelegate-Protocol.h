//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOutlineViewDelegate.h"

@class NSIndexSet, NSMenu, NSOutlineView;

@protocol BKMacOutlineViewDelegate <NSOutlineViewDelegate>
- (NSMenu *)outlineView:(NSOutlineView *)arg1 menuForItem:(id)arg2;
- (BOOL)outlineViewShouldSelectRowBeforeShowingMenu:(NSOutlineView *)arg1;
- (BOOL)outlineViewHandleEnterKey:(NSOutlineView *)arg1 withModiferFlags:(unsigned long long)arg2;
- (BOOL)outlineViewHandleReturnKey:(NSOutlineView *)arg1 withModiferFlags:(unsigned long long)arg2;
- (void)outlineView:(NSOutlineView *)arg1 copyItemsAtRowIndexes:(NSIndexSet *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldCopyItemsAtRowIndexes:(NSIndexSet *)arg2;
- (void)outlineView:(NSOutlineView *)arg1 deleteItemsAtRowIndexes:(NSIndexSet *)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 shouldDeleteItemsAtRowIndexes:(NSIndexSet *)arg2;
@end

