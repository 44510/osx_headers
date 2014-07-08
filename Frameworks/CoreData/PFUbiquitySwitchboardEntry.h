//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, PFUbiquityContainerMonitor, PFUbiquityFilePresenter, PFUbiquityLocation, PFUbiquitySetupAssistant, PFUbiquitySwitchboardEntryMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquitySwitchboardEntry : NSObject
{
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    unsigned long long _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    BOOL _finishedSetupForStore;
    BOOL _hasScheduledFinishBlock;
    BOOL _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    struct dispatch_queue_s *_privateQueue;
}

@property(retain, nonatomic) PFUbiquitySwitchboardEntryMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) PFUbiquitySetupAssistant *finishingSetupAssistant; // @synthesize finishingSetupAssistant=_finishingSetupAssistant;
@property(readonly) PFUbiquityContainerMonitor *monitor; // @synthesize monitor=_monitor;
@property(readonly) PFUbiquityFilePresenter *localFilePresenter; // @synthesize localFilePresenter=_localFP;
@property(readonly) PFUbiquityFilePresenter *filePresenter; // @synthesize filePresenter=_fp;
@property(readonly) PFUbiquityLocation *localRootLocation; // @synthesize localRootLocation=_localRootLocation;
@property(retain, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property unsigned long long activeStoreCount; // @synthesize activeStoreCount=_activeStoreCount;
- (void)afterDelay:(double)arg1 executeBlockOnGlobalConcurrentQueue:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 executeBlockOnPrivateQueue:(CDUnknownBlockType)arg2;
- (void)executeBlockOnPrivateQueue:(CDUnknownBlockType)arg1;
- (void)setupFinished;
- (BOOL)finishSetupForStore:(id)arg1 withSetupAssistant:(id)arg2 synchronously:(BOOL)arg3 error:(id *)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)containerIdentifierChanged:(id)arg1;
- (void)monitorStateChanged:(id)arg1;
- (void)containerStateChanged:(id)arg1;
- (void)filePresenterNoticedBaselineFileChange:(id)arg1;
- (void)filePresenterWasNotifiedTransactionLogs:(id)arg1;
- (void)entryWillBeRemovedFromSwitchboard;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (id)metaForStoreName:(id)arg1;
- (id)cacheWrapperForStoreName:(id)arg1;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4;
- (id)init;

@end

