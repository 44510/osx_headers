//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAccount, ABAddressBook, ABGroup, NSArray;

@interface ABTimeMachineRestoreSource : NSObject
{
    ABAddressBook *_addressBook;
    ABAccount *_account;
    ABGroup *_group;
    NSArray *_selectedRecords;
}

@property(readonly, copy) NSArray *selectedRecords; // @synthesize selectedRecords=_selectedRecords;
@property(readonly, retain) ABGroup *group; // @synthesize group=_group;
@property(readonly, retain) ABAccount *account; // @synthesize account=_account;
@property(readonly, retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)description;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 account:(id)arg2 group:(id)arg3 selectedRecords:(id)arg4;

@end

