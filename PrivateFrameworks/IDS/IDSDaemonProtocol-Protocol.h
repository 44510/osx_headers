//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@protocol IDSDaemonProtocol <NSObject>

@optional
- (void)continuityDisconnectFromPeer:(NSString *)arg1;
- (void)continuityConnectToPeer:(NSString *)arg1;
- (void)continuityStopScanningForType:(long long)arg1;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 peers:(NSArray *)arg3 withOptions:(NSDictionary *)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityStopAdvertisingOfType:(long long)arg1;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityClientInstanceCreated;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setAudioEnabled:(BOOL)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)sendSessionMessage:(NSData *)arg1 toSession:(NSString *)arg2;
- (void)endSession:(NSString *)arg1 withData:(NSData *)arg2;
- (void)endSession:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)declineInvitation:(NSString *)arg1;
- (void)acceptInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)acceptInvitation:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)cancelInvitation:(NSString *)arg1;
- (void)sendInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)sendInvitation:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)setupNewSessionWithConfiguration:(NSDictionary *)arg1;
- (void)setNSUUID:(NSString *)arg1 onDeviceWithUniqueID:(NSString *)arg2 forService:(NSString *)arg3;
- (void)closeSocketWithOptions:(NSDictionary *)arg1;
- (void)openSocketWithOptions:(NSDictionary *)arg1;
- (void)xpcObject:(void *)arg1 objectContext:(NSDictionary *)arg2;
- (void)setListenerServices:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)sendAppAckWithGUID:(NSString *)arg1 toDestination:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)acknowledgeMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2;
- (void)acknowledgeOutgoingMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2;
- (void)sendServerMessage:(NSDictionary *)arg1 command:(NSNumber *)arg2 usingAccountWithUniqueID:(NSString *)arg3;
- (void)sendPersistedFile:(NSURL *)arg1 userInfo:(NSDictionary *)arg2 toDestinations:(NSArray *)arg3 usingAccountWithUniqueID:(NSString *)arg4 identifier:(NSString *)arg5;
- (void)cancelItemWithIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)sendMessageWithSendParameters:(NSDictionary *)arg1;
- (void)receivedPublicKeyAck;
- (void)savePublicKey:(NSData *)arg1 withIdentifier:(NSString *)arg2;
- (void)deletePairedDevice:(NSString *)arg1;
- (void)addPairedDevice:(NSString *)arg1;
- (void)localSetupCompleted;
- (void)localSetupUnpair;
- (void)stopLocalSetup;
- (void)startLocalSetup;
- (void)idsiCloudSignInDataMigratorForID:(NSString *)arg1;
- (void)kickGetDependentForAccount:(NSString *)arg1;
- (void)receivediCloudSignOutHack;
- (void)receivediCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)iCloudSignOutHack;
- (void)iCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)hardDeregister;
- (void)deactivateAndPurgeIdentifyForAccount:(NSString *)arg1;
- (void)_reregisterAndReidentify:(NSNumber *)arg1 account:(NSString *)arg2;
- (void)unregisterAccount:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)removeAliases:(NSArray *)arg1 fromAccount:(NSString *)arg2;
- (void)addAliases:(NSArray *)arg1 toAccount:(NSString *)arg2;
- (void)validateProfileForAccount:(NSString *)arg1;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 forAccount:(NSString *)arg3;
- (void)passwordUpdatedForAccount:(NSString *)arg1;
- (void)authenticateAccount:(NSString *)arg1;
- (void)authenticationChangedForAccount:(NSString *)arg1;
- (void)passwordChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)authTokenChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)setLoginID:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)disableAccount:(NSString *)arg1;
- (void)enableAccount:(NSString *)arg1;
- (void)updateAccount:(NSString *)arg1 withAccountInfo:(NSDictionary *)arg2;
- (void)_removeAndDeregisterAccount:(NSString *)arg1;
- (void)_removeAccount:(NSString *)arg1;
- (void)addAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 uniqueID:(NSString *)arg3 accountType:(int)arg4 accountInfo:(NSDictionary *)arg5;
- (void)setupAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 accountType:(int)arg3 accountConfig:(NSDictionary *)arg4 authToken:(NSString *)arg5 password:(NSString *)arg6 transactionID:(NSString *)arg7;
@end

