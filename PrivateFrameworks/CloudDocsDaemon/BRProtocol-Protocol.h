//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSFileHandle, NSSet, NSString, NSURL;

@protocol BRProtocol
- (void)getTheoriticalContainerURLWithID:(NSString *)arg1 forPID:(int)arg2 reply:(void (^)(NSURL *, NSError *))arg3;
- (void)getTheoriticalContainerURLWithID:(NSString *)arg1 reply:(void (^)(NSURL *, NSError *))arg2;
- (void)getApplicationStatusWithPID:(int)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)getApplicationStatus:(void (^)(BOOL, NSError *))arg1;
- (void)forceConflictForURL:(NSURL *)arg1 bookmarkData:(NSString *)arg2 forcedEtag:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg1 forStreaming:(BOOL)arg2 requestedTTL:(unsigned long long)arg3 reply:(void (^)(NSURL *, NSDate *, NSError *))arg4;
- (void)resolveBookmarkDataToURL:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSURL *, NSData *, NSError *))arg2;
- (void)getBookmarkDataForURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)forceAccountUpdateAfterMigration;
- (void)getContainersNeedingUpload:(void (^)(NSSet *, NSError *))arg1;
- (void)currentAccountCopyTokenWithBundleID:(NSString *)arg1 version:(NSString *)arg2 reply:(void (^)(NSData *, NSError *))arg3;
- (void)currentAccountLogoutWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)currentAccountCreateWithID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)currentAccountIsUsingUbiquityWithReply:(void (^)(BOOL))arg1;
- (void)resolveConflictWithName:(NSString *)arg1 atURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)bundleDidAccessExternalDocument:(NSFileHandle *)arg1;
- (void)addExternalDocumentReferenceTo:(NSURL *)arg1 forPid:(int)arg2 inContainer:(NSString *)arg3 underParent:(NSURL *)arg4 reply:(void (^)(NSURL *, NSURL *, NSData *, NSURL *, NSData *, NSError *))arg5;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSString *)arg1 withReply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getTotalApplicationDocumentUsageWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getNonLocalVersionSenderWithReceiver:(id <BRNonLocalVersionReceiving>)arg1 documentURL:(NSURL *)arg2 reply:(void (^)(id <BRNonLocalVersionSending>, NSURL *, NSError *))arg3;
- (void)getItemUpdateSenderWithReceiver:(id <BRItemNotificationReceiving>)arg1 reply:(void (^)(id <BRItemNotificationSending>, NSDictionary *, NSError *))arg2;
- (void)getAttributeValues:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 reply:(void (^)(NSMutableDictionary *, NSError *))arg3;
- (void)getNotificationInfoAtURL:(NSURL *)arg1 reply:(void (^)(BRQueryItem *, NSError *))arg2;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)evictItemAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)startDownloadItemsAtURLs:(NSArray *)arg1 options:(unsigned long long)arg2 reply:(void (^)(NSError *))arg3;
- (void)registerInitialSyncBarrierForID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)updateContainerMetadataForID:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)getContainerURLForID:(NSString *)arg1 forPid:(int)arg2 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg3;
- (void)getContainerURLForID:(NSString *)arg1 reply:(void (^)(NSURL *, NSData *, NSString *, NSError *))arg2;
- (oneway void)checkinAskClientIfUsingUbiquity:(BOOL)arg1;
- (void)getContainerForURL:(NSURL *)arg1 reply:(void (^)(BRContainer *, NSError *))arg2;
- (void)getContainersByID:(void (^)(NSDictionary *, NSError *))arg1;
- (void)waitForFileSystemChangeProcessingWithReply:(void (^)(void))arg1;
- (void)reclaimAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)purgeAmount:(long long)arg1 withUrgency:(int)arg2 reply:(void (^)(long long))arg3;
- (void)computePurgableSpaceWithUrgency:(int)arg1 reply:(void (^)(long long))arg2;
- (void)forceSyncContainerID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)log:(const char *)arg1 function:(const char *)arg2 source:(const char *)arg3 line:(int)arg4 message:(NSString *)arg5;
- (void)gatherInformationForPath:(NSString *)arg1 reply:(void (^)(BRCURLToItemLookup *, NSError *))arg2;
- (void)printStatus:(NSFileHandle *)arg1 reply:(void (^)(BOOL))arg2;
- (void)performSelfCheck:(NSFileHandle *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)dumpDatabaseTo:(NSFileHandle *)arg1 containerID:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)resetBudgets:(NSSet *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setupInstanceWithDict:(NSDictionary *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
@end

