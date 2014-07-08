//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    struct __ABAddressBookRef *_addressBook;
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
@property struct __ABAddressBookRef *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)performQuery_sync:(CDUnknownBlockType)arg1;
- (void)revertAddressBook:(BOOL)arg1;
- (void)sendABChangedNotificationSync;
- (void)sendABChangedNotification:(id)arg1;
- (void)createAddressBook;
- (void)dealloc;
- (id)init;

@end

