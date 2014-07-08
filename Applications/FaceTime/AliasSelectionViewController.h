//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AliasRowViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSString;

@interface AliasSelectionViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, AliasRowViewDelegate>
{
}

- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)rowViewClicked:(id)arg1;
- (void)next:(id)arg1;
- (void)back:(id)arg1;
- (void)awakeFromNib;
- (void)_updateUI;
- (void)_handleValidationError;
- (void)_accountRegistrationStateChanged:(id)arg1;
- (void)_aliasActivationStateChanged:(id)arg1;
- (void)_aliasVerificationStateChanged:(id)arg1;
- (void)viewWillAppear;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

