//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalPersistence : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)setupCalendarPersistence:(id)arg1 andCreateDefaultCalendarsIfNeeded:(BOOL)arg2 withSetupGroup:(id)arg3;
+ (id)_createSQLiteStoreWithSchemaMigration:(id)arg1 createDefaultCalendars:(BOOL)arg2;
+ (void)asyncConnectToPersistenceWithClientXPCWaitingOnGroup:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)asyncConnectToPersistence;
+ (id)_createXPCStoreWithNoSchemaMigration:(id *)arg1;
+ (BOOL)_startCoreDataXPCServer:(id *)arg1;
+ (void)_startAgentLinkWithClientXPCWaitingOnGroup:(id)arg1;
+ (BOOL)_shouldConnectUsingSQLite;
+ (void)_flushTruthFiles;
+ (void)_allowTruthFileProcessingInUnitTests;
+ (void)_configureForUnitTesting;
+ (BOOL)_configuredForUnitTesting;
+ (id)_createDefaultCalendarPersistenceSingleton;
+ (id)setupCalendarPersistence:(id)arg1 andCreateDefaultCalendarsIfNeeded:(BOOL)arg2;
+ (id)setupCalendarPersistence:(id)arg1;
+ (BOOL)createBirthdayCalendar:(id)arg1 error:(id *)arg2;
+ (BOOL)createDefaultLocalCalendars:(id)arg1 error:(id *)arg2;
+ (id)userContextForLocalUID:(id)arg1;
+ (id)managedObjectContextForUser;
+ (void)reconnectToPersistence;
+ (id)defaultCalendarPersistence;
+ (BOOL)upgradeIsInProgress;
+ (BOOL)isFullyInitialized;
+ (void)enableFailOnExternalDatabaseReset;
+ (id)databaseConnectionBeingEstablishedGroup;
+ (void)initialize;
- (void)_setSendsNotifications:(BOOL)arg1;
- (void)calendarPersistenceChangedExternally:(id)arg1;
- (void)managedObjectsChangedFromRemoteContext:(id)arg1;
- (BOOL)_shouldSendRemoteNotification:(id)arg1 checkOriginatorID:(BOOL)arg2;
- (BOOL)_shouldSendRemoteNotification:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 context:(id)arg3;
- (id)_notificationOriginatorIdWithContext:(id)arg1;
- (id)userInfosForManagedChangeNotification:(id)arg1;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)_sendChangedFromRemoteContextNotification:(id)arg1;
- (id)_URIsFromManagedObjects:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (BOOL)isInterestedInContext:(id)arg1;
- (void)postResetNotifications;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_reset;
- (id)_managedObjectContextForCurrentThread;

@end

