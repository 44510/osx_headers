//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAService.h"

@interface SPATencentWeiboService : SPAService
{
}

- (id)notificationCenterBundleID;
- (id)destroyParametersForUUID:(id)arg1;
- (id)destroyURLForUUID:(id)arg1;
- (id)listURL;
- (id)registrationURL;
- (id)acAccountType;
- (unsigned long long)currentPushSettings;
- (id)registrationPlistPath;
- (id)urlForActivateNotification:(id)arg1;
- (void)handleAPSConnectionMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)unregisterCurrentUUID;
- (BOOL)unregisterAccount:(id)arg1 uuid:(id)arg2;
- (id)registeredPushDestinationsFromProviderWithAccount:(id)arg1;
- (void)registerForPushNotificationsAndUpdatePersistFileWithDeviceToken:(id)arg1 UUID:(id)arg2 account:(id)arg3 enabledFor:(unsigned long long)arg4;
- (void)issueTencentRequestForURL:(id)arg1 method:(long long)arg2 parameters:(id)arg3 account:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithServiceType:(id)arg1 accountStore:(id)arg2;

@end

