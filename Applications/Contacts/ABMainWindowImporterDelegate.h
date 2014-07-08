//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABImporterDelegate.h"

@class ABMainWindowViewModel, NSString, NSUndoManager, NSWindow;

@interface ABMainWindowImporterDelegate : NSObject <ABImporterDelegate>
{
    ABMainWindowViewModel *_mainWindowViewModel;
    NSWindow *_window;
    NSUndoManager *_undoManager;
    id <ABPersonMergingControllerDelegate> _mergingDelegate;
}

- (id)undoManager;
- (BOOL)importvCardFiles:(id)arg1 showImportConfirmation:(BOOL)arg2;
- (BOOL)importvCardFiles:(id)arg1;
- (id)mergeDelegate;
- (id)aggregateAddressBook;
- (id)selectedAccount;
- (id)selectedGroups;
- (id)window;
- (BOOL)importerCanImport;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 window:(id)arg2 undoManager:(id)arg3 mergingDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

