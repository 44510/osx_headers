//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "APQueueCreationControllerDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSToolbarDelegate.h"
#import "SUPredicateInstallControllerDelegate.h"

@class NSBox, NSButton, NSSearchField, NSString, NSView;

@interface APController : NSWindowController <SUPredicateInstallControllerDelegate, NSApplicationDelegate, NSToolbarDelegate, APQueueCreationControllerDelegate>
{
    NSButton *_addButton;
    NSBox *_view;
    NSSearchField *_searchField;
    NSView *_searchView;
    id _browser;
    id _selection;
    BOOL _shouldCloseAfterAddingPrinter;
}

+ (id)defaultController;
- (void)switchPanelTo:(id)arg1;
- (void)setShouldCloseAfterAddingPrinter:(BOOL)arg1;
- (BOOL)shouldCloseAfterAddingPrinter;
- (void)queueCreationCompleted:(id)arg1 queueID:(id)arg2 error:(id)arg3;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)newPrinter:(id)arg1;
- (void)help:(id)arg1;
- (void)handleGetURL:(id)arg1 withReplyEvent:(id)arg2;
- (void)filter:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)toolbarDidRemoveItem:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)selectionChanged:(id)arg1;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)setBrowser:(id)arg1;
- (id)browser;
- (void)switchBrowser:(id)arg1;
- (void)initializePluginsToolBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

