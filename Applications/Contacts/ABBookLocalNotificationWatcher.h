//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, ABCardViewNotificationHandler, ABGroupListNotificationHandler, ABPersonListController, NSMutableArray;

@interface ABBookLocalNotificationWatcher : NSObject
{
    ABAddressBook *_addressBook;
    ABPersonListController *_personListController;
    NSMutableArray *_observers;
    BOOL _suspendPersonListReflection;
    ABGroupListNotificationHandler *_groupListHandler;
    ABCardViewNotificationHandler *_cardViewHandler;
}

@property BOOL suspendPersonListReflection; // @synthesize suspendPersonListReflection=_suspendPersonListReflection;
- (void)defaultAccountChanged:(id)arg1;
- (void)sourcesChanged:(id)arg1;
- (void)updatePersonListWithAddressBookUserInfo:(id)arg1;
- (BOOL)shouldProcessNotification:(id)arg1;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (BOOL)isNotificationFromDirectorySearch:(id)arg1;
- (void)invalidate;
- (void)registerForNotifications;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 personListController:(id)arg2 groupListNotificationHandler:(id)arg3 cardViewNotificationHandler:(id)arg4;

@end

