//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSToolbarDelegate.h"

@class NSMutableDictionary, NSPopUpButton, NSSearchField, NSSegmentedControl, NSString, OSADictionary, OSADictionaryController;

@interface OSADictionaryWindowController : NSWindowController <NSToolbarDelegate>
{
    OSADictionaryController *_dictionaryController;
    NSSegmentedControl *_navigationControl;
    NSSegmentedControl *_textSizeControl;
    NSSegmentedControl *_viewModeControl;
    NSPopUpButton *_languageControl;
    NSSearchField *_searchField;
    OSADictionary *_dictionary;
    NSMutableDictionary *_toolbarInfo;
}

- (void)changeLanguage:(id)arg1;
- (void)changeSearch:(id)arg1;
- (void)goBackForward:(id)arg1;
- (void)changeViewMode:(id)arg1;
- (void)changeTextSize:(id)arg1;
- (void)setViewMode:(long long)arg1;
- (long long)viewMode;
- (void)setSearchField:(id)arg1;
- (id)searchField;
- (void)setLanguageControl:(id)arg1;
- (id)languageControl;
- (void)setViewModeControl:(id)arg1;
- (id)viewModeControl;
- (void)setTextSizeControl:(id)arg1;
- (id)textSizeControl;
- (void)setNavigationControl:(id)arg1;
- (id)navigationControl;
- (void)setDictionary:(id)arg1;
- (id)dictionary;
- (void)setDictionaryController:(id)arg1;
- (id)dictionaryController;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)awakeFromNib;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

