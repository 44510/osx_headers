//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSTableViewDataSource.h"

@class NSArray, NSPathCell, NSString, NSTableView, NSTextField;

@interface FBBadFontWarningWindowController : NSWindowController <NSTableViewDataSource>
{
    NSTableView *fileNameTable;
    NSPathCell *cell;
    NSTextField *titleText;
    NSTextField *messageText;
    NSArray *_badFontArray;
    long long _errorType;
}

+ (void)clearUninstallableFontFileArray;
+ (void)showUninstallableFontFiles:(id)arg1;
+ (void)showPostScriptNameFreeFonts:(id)arg1;
+ (void)showMissingFonts:(id)arg1;
+ (void)initalize;
@property long long _errorType; // @synthesize _errorType;
@property(retain) NSArray *_badFontArray; // @synthesize _badFontArray;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)awakeFromNib;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)_setToUninstallableFontFileText;
- (void)_setToPostScriptErrorText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

