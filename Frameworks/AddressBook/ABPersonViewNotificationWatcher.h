//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCardViewNotificationHandler, NSMutableArray;

@interface ABPersonViewNotificationWatcher : NSObject
{
    NSMutableArray *_observers;
    ABCardViewNotificationHandler *_cardViewNotificationHandler;
}

- (void)removeNotificationObservers;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (void)addressBookChangedExternally:(id)arg1;
- (void)registerForExternalNotifications;
- (void)registerForLocalNotificationsWithAddressBook:(id)arg1;
- (void)registerForNotificationsWithAddressBook:(id)arg1;
- (void)dealloc;
- (id)initWithCardViewNotificationHandler:(id)arg1;

@end
