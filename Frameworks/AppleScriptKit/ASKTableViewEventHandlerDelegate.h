//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleScriptKit/ASKEventHandlerDelegate.h>

@interface ASKTableViewEventHandlerDelegate : ASKEventHandlerDelegate
{
}

- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;

@end

