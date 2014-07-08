//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKAccountInfo, CKContainerID, CKDiscoverUserInfosOperationInfo, CKFetchLikesOperationInfo, CKFetchNotificationChangesOperationInfo, CKFetchRecordChangesOperationInfo, CKFetchRecordVersionsOperationInfo, CKFetchRecordZonesOperationInfo, CKFetchRecordsOperationInfo, CKFetchShareCommentsOperationInfo, CKFetchShareInvitationsOperationInfo, CKFetchSharesOperationInfo, CKFetchSubscriptionsOperationInfo, CKLikeItemsOperationInfo, CKMarkNotificationsReadOperationInfo, CKModifyBadgeOperationInfo, CKModifyRecordZonesOperationInfo, CKModifyRecordsOperationInfo, CKModifyShareCommentsOperationInfo, CKModifySharesOperationInfo, CKModifySubscriptionsOperationInfo, CKPublishAssetsOperationInfo, CKQueryOperationInfo, CKRecordID, CKRepairZonePCSOperationInfo, CKShareInvitationResponseOperationInfo, CKUpdateUserPresenceOperationInfo, NSArray, NSError, NSString;

@protocol CKXPCDaemon <NSObject>
- (void)tossConfigWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)repairZonePCSWithInfo:(CKRepairZonePCSOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(void (^)(CKPCSDiagnosticInformation *))arg1;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(BOOL)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (void)accountChangedWithID:(NSString *)arg1;
- (void)accountsDidRevokeAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsDidGrantAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)getAccountOverrides:(void (^)(NSString *, NSString *, NSString *, NSString *))arg1;
- (void)clearAuthTokensForRecordWithID:(CKRecordID *)arg1 inScope:(long long)arg2;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)setFakeError:(NSError *)arg1 forNextRequestOfClassName:(NSString *)arg2;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)performUpdateUserPresenceOperation:(CKUpdateUserPresenceOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchLikesOperation:(CKFetchLikesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performLikeItemsOperation:(CKLikeItemsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyShareCommentsOperation:(CKModifyShareCommentsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchShareCommentsOperation:(CKFetchShareCommentsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performShareInvitationResponseOperation:(CKShareInvitationResponseOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchShareInvitationsOperation:(CKFetchShareInvitationsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifySharesOperation:(CKModifySharesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchSharesOperation:(CKFetchSharesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performMarkNotificationsReadOperation:(CKMarkNotificationsReadOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchNotificationChangesOperation:(CKFetchNotificationChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyBadgeOperation:(CKModifyBadgeOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordZonesOperation:(CKFetchRecordZonesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyRecordZonesOperation:(CKModifyRecordZonesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchSubscriptionsOperation:(CKFetchSubscriptionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifySubscriptionsOperation:(CKModifySubscriptionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performQueryOperation:(CKQueryOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performPublishAssetsOperation:(CKPublishAssetsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordVersionsOperation:(CKFetchRecordVersionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordChangesOperation:(CKFetchRecordChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyRecordsOperation:(CKModifyRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordsOperation:(CKFetchRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performDiscoverAllContactsOperation:(CKDiscoverUserInfosOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performDiscoverUserInfosOperation:(CKDiscoverUserInfosOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1;
- (void)setContainerID:(CKContainerID *)arg1 bundleID:(NSString *)arg2 accountInfoOverride:(CKAccountInfo *)arg3 withBlock:(void (^)(NSArray *, NSError *))arg4;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)currentUserIDWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)accountStatusWithCompletionHandler:(void (^)(long long, NSError *))arg1;
- (void)cancelOperationWithIdentifier:(NSString *)arg1;
@end

