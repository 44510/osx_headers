//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SLMicroBlogSheetDelegate.h"
#import "SLTencentWeiboClientSessionProtocol.h"

@class NSCache, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, SLRemoteSessionProxy<SLTencentWeiboRemoteSessionProtocol>;

@interface SLTencentWeiboSession : NSObject <SLTencentWeiboClientSessionProtocol, SLMicroBlogSheetDelegate>
{
    SLRemoteSessionProxy<SLTencentWeiboRemoteSessionProtocol> *_remoteSession;
    NSCache *_profileImageCache;
    NSObject<OS_dispatch_queue> *_remoteSessionQueue;
    NSObject<OS_dispatch_semaphore> *_remoteSessionQueueSemaphore;
    CDUnknownBlockType _connectionResetBlock;
    CDUnknownBlockType _locationInformationChangedBlock;
}

+ (id)_remoteInterface;
@property(copy, nonatomic) CDUnknownBlockType locationInformationChangedBlock; // @synthesize locationInformationChangedBlock=_locationInformationChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionResetBlock; // @synthesize connectionResetBlock=_connectionResetBlock;
- (void).cxx_destruct;
- (id)serviceAccountTypeIdentifier;
- (void)acceptLocationUpdate:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(CDUnknownBlockType)arg1;
- (void)showSettingsIfNeeded;
- (void)sendStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
- (void)setGeotagAccountSetting:(BOOL)arg1;
- (void)fetchGeotagStatus:(CDUnknownBlockType)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchCurrentImageLimits:(CDUnknownBlockType)arg1;
- (void)fetchCurrentUrlLimits:(CDUnknownBlockType)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ensureUserRecordStore;
- (void)fetchSessionInfo:(CDUnknownBlockType)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)revokeAllAccessTokensForDevice;
- (void)revokeAccessTokenForAppWithOauthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setClientInfo:(id)arg1;
- (void)tearDownConnectionToRemoteSession;
- (void)stopDeferringExpensiveOperations;
- (void)deferExpensiveOperations;
- (id)_createOrGetRemoteSession;
- (void)endPotentialLocationUse;
- (void)beginPotentialLocationUse;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

