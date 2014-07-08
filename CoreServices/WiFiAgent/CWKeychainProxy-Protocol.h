//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString;

@protocol CWKeychainProxy
- (void)queryIsWiFiCloudSyncEngineRunningWithReply:(void (^)(NSError *, BOOL))arg1;
- (void)removeCloudWiFiProfileWithSSID:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)synchronizeWithReply:(void (^)(NSError *))arg1;
- (void)deleteUserWiFiKeychainPasswordWithSSID:(NSData *)arg1 reply:(void (^)(NSError *))arg2;
- (void)setUserWiFiKeychainPasswordWithSSID:(NSData *)arg1 password:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (void)queryUserWiFiKeychainPasswordWithSSID:(NSData *)arg1 reply:(void (^)(NSError *, NSString *))arg2;
@end

