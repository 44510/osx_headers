//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSTableViewDelegate.h"

@class IMTableView, NSControl, NSIndexSet, NSMenu, NSTableView, NSText, NSTextView;

@protocol IMTableViewDelegate <NSTableViewDelegate, NSObject>

@optional
- (NSMenu *)tableView:(IMTableView *)arg1 contextMenuForSelectedIndexes:(NSIndexSet *)arg2;
- (void)control:(NSControl *)arg1 textDidChange:(NSText *)arg2;
- (void)control:(NSControl *)arg1 textDidEndEditing:(NSText *)arg2;
- (NSTextView *)tableView:(NSTableView *)arg1 fieldEditorForCell:(id)arg2;
- (void)handleOpenSelectionFromTableView:(IMTableView *)arg1;
- (void)moveRightFromTableView:(IMTableView *)arg1;
- (void)moveLeftFromTableView:(IMTableView *)arg1;
- (void)deleteSelectionFromTableView:(IMTableView *)arg1;
@end

