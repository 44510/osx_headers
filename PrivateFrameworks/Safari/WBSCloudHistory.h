//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSCloudHistorySyncThrottlerDataStore.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, WBSCloudHistorySyncThrottler;

__attribute__((visibility("hidden")))
@interface WBSCloudHistory : NSObject <WBSCloudHistorySyncThrottlerDataStore>
{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    BOOL _cloudHistoryEnabled;
    BOOL _saveChangesWhenHistoryLoads;
    BOOL _fetchChangesWhenHistoryLoads;
    id <NSObject> _historyWasLoadedObserver;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    WBSCloudHistorySyncThrottler *_saveChangesThrottler;
    NSTimer *_saveChangesLaterTimer;
}

+ (id)sharedCloudHistory;
@property(nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled; // @synthesize cloudHistoryEnabled=_cloudHistoryEnabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)_saveChangesLaterTimerFired:(id)arg1;
- (void)_scheduleSaveChangesLaterTimerWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (long long)_resultFromError:(id)arg1;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(BOOL)arg3;
- (void)_historyWasLoaded:(id)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_saveChangesWhenHistoryLoads;
- (void)_saveChangesAfterDeterminingNumberOfDevicesInSyncCircle;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 intoHistory:(id)arg2;
- (void)fetchAndMergeChanges;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(BOOL)arg3 withCallback:(CDUnknownBlockType)arg4;
- (void)_saveChangesToCloudHistoryStoreBypassingThrottler:(BOOL)arg1;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesToCloudHistoryStore;
- (BOOL)_hasCloudHistoryEntitlement;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
