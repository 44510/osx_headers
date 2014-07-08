//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, NSArray, NSMutableArray;

@interface ABGroupEntriesAnalyzer : NSObject
{
    NSArray *_accounts;
    ABAddressBook *_addressBook;
    NSMutableArray *_directoryAccounts;
    NSMutableArray *_persistentAccounts;
    NSMutableArray *_smartGroups;
    NSMutableArray *_visibleAccounts;
    id <ABAccountHidingPolicy> _accountHidingPolicy;
}

- (void)collectSmartGroups;
- (void)collectDirectoryAccounts;
- (void)collectPersistentAccounts;
- (void)collectVisibleAccounts;
- (void)analyzeAccount:(id)arg1;
- (void)analyzeAccounts;
- (id)smartGroups;
- (id)persistentAccounts;
- (id)directoryAccounts;
- (void)dealloc;
- (id)initWithAccounts:(id)arg1 addressBook:(id)arg2 hidingPolicy:(id)arg3;

@end

