//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommanderPrefs.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSPopUpButton, NSString;

@interface CommandersNumPadPrefs : CommanderPrefs <NSTableViewDelegate, NSTableViewDataSource>
{
    NSPopUpButton *_modifierKeysButton;
    NSArray *_keyTitles;
    NSArray *_keyDescriptions;
    NSArray *_keyKeys;
    NSArray *_modifierKeys;
    NSArray *_modifierSymbols;
}

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)selectModifierKey:(id)arg1;
- (id)commandForRow:(long long)arg1;
- (id)keyPathForRow:(long long)arg1;
- (BOOL)isValidRow:(long long)arg1;
- (void)initializeCommander;
- (id)helpAnchor;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

