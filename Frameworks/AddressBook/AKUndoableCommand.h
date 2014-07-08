//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

#import "ABSaveRequestCommand.h"

@class CNContactStore, NSString;

__attribute__((visibility("hidden")))
@interface AKUndoableCommand : ABBookUndoableCommand <ABSaveRequestCommand>
{
    CNContactStore *_addressBook;
}

- (void)visit:(id)arg1;
- (void)didExecute;
- (void)willExecute;
- (void)executeUndoWithSaveRequest:(id)arg1;
- (void)executeRedoWithSaveRequest:(id)arg1;
- (void)executeWithSaveRequest:(id)arg1;
- (void)executeUndo;
- (void)executeRedo;
- (void)execute;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

