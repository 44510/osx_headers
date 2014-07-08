//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModalDialog.h"

@class CPTableView, NSArray, NSMutableArray, NSObject, NSTabView, NSWindow;

@interface CPDefinitionTemplateDialog : CPModalDialog
{
    NSTabView *mTabView;
    CPTableView *mTableView;
    NSObject *mObject;
    SEL mSelector;
    NSWindow *mParentWindow;
    NSArray *mGroupArray;
    NSMutableArray *mTemplateArray;
}

+ (id)sharedDialog;
+ (id)sharedDialogWithDimension:(unsigned long long)arg1;
+ (id)sharedDictionary;
- (void)dialogDidOK;
- (BOOL)dialogShouldOK;
- (void)askTemplateStringWithObject:(id)arg1 selector:(SEL)arg2 modalInWindow:(id)arg3;
- (id)parentWindow;
- (double)findHeightForColumn:(long long)arg1 row:(long long)arg2 withValue:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)equationForRow:(long long)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)setTemplateGroup:(id)arg1;
- (void)awakeFromNib;

@end

