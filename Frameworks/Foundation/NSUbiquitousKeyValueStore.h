//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject
{
    id _private1;
    id _private2;
    id _private3;
    void *_private4;
    void *_reserved[3];
    BOOL _disabledSuddenTermination;
}

+ (void)_appWillDeactivate;
+ (void)_appWillActivate;
+ (void)_synchronizeStoresForced:(BOOL)arg1;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (id)defaultStore;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;
- (long long)longLongForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (unsigned long long)maximumTotalDataLength;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumKeyCount;
- (void)_unregisterFromDaemon;
- (void)_registerToDaemon;
- (void)_configurationDidChange;
- (void)_sourceDidChange:(id)arg1;
- (BOOL)synchronize;
- (BOOL)_synchronizeForced:(BOOL)arg1;
- (BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(struct dispatch_queue_s *)arg2;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleRemoteSynchronization;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (void)registerDefaultValues:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_adjustTimerForAutosync;
- (void)_adjustTimer:(id)arg1;
- (void)_syncConcurrently;
- (void)_syncConcurrentlyForced:(BOOL)arg1;
- (BOOL)synchronizeWithSourceForced:(BOOL)arg1;
- (id)objectForKey:(id)arg1;
- (void)_rethrowException:(id)arg1;
- (BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (void)_setHasPendingSynchronize:(BOOL)arg1;
- (BOOL)_hasPendingSynchronize;
- (void)_setShouldAvoidSynchronize:(BOOL)arg1;
- (BOOL)_shouldAvoidSynchronize;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3;
- (void)_useSourceSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)_useSourceAsyncWithBlock:(CDUnknownBlockType)arg1;
- (void)_pleaseSynchronize:(id)arg1;

@end

