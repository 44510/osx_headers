//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate, NSDictionary, NSString, NSURL;

@protocol SafariNotificationAgent
- (void)fetchIdentifiersAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)forgetNotificationPermissionForWebsite:(NSString *)arg1;
- (void)denyRemoteNotificationPermissionForWebsite:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)grantRemoteNotificationPermissionForWebsite:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)denyRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
- (void)grantRemoteNotificationPermissionForRequestID:(unsigned long long)arg1;
- (void)startVerificationForRemoteNotificationProviderWithApiURL:(NSURL *)arg1 websiteIdentifier:(NSString *)arg2 queryParameters:(NSDictionary *)arg3 referrerURL:(NSURL *)arg4 requestID:(unsigned long long)arg5;
@end

