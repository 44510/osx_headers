//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSMutableArray, NSTableView, NSTextView, NSWindow;

@interface CAVersionWC : NSWindowController
{
    NSWindow *window;
    NSTableView *uiPackagedBinaryTableView;
    NSTextView *uiVersionInfoTextView;
    int mArrayCount;
    NSMutableArray *mPackagedBinaries;
    NSMutableArray *mPropertyDictionaries;
}

+ (void)initialize;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (id)windowNibName;

@end

