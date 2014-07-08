//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSButton, NSMutableArray, NSScrollView, NSString, NSTableView, NSTextField, NSWindow;

@interface AUSelectiveImportController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource>
{
    id delegate;
    NSTextField *promptLabel;
    NSTextField *warningLabel;
    NSButton *checkboxFullDevice;
    NSScrollView *checkboxScrollView;
    NSTableView *checkboxTable;
    NSButton *cancelButton;
    NSButton *okButton;
    NSArray *checkboxes;
    NSMutableArray *state;
    NSWindow *hostingWindow;
    BOOL okPressed;
}

@property(retain, nonatomic) NSWindow *hostingWindow; // @synthesize hostingWindow;
@property(retain, nonatomic) NSArray *checkboxes; // @synthesize checkboxes;
@property(retain, nonatomic) NSButton *okButton; // @synthesize okButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) NSTableView *checkboxTable; // @synthesize checkboxTable;
@property(retain, nonatomic) NSScrollView *checkboxScrollView; // @synthesize checkboxScrollView;
@property(retain, nonatomic) NSButton *checkboxFullDevice; // @synthesize checkboxFullDevice;
@property(retain, nonatomic) NSTextField *warningLabel; // @synthesize warningLabel;
@property(retain, nonatomic) NSTextField *promptLabel; // @synthesize promptLabel;
@property(nonatomic) id <AUSelectiveImportControllerDelegate> delegate; // @synthesize delegate;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)dealloc;
- (void)endSheet;
- (void)runSheet;
- (void)cancelPressed:(id)arg1;
- (void)okPressed:(id)arg1;
- (void)checkboxChangedState:(id)arg1;
- (void)windowDidLoad;
- (id)initWithArrayOfCheckboxDicts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
