//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSUserNotificationCenterDelegate.h"
#import "_NSUserNotificationCenterDelegatePrivate.h"

@class ACAccountStore, NSBundle, NSString, NSUserNotificationCenter;

@interface SPAService : NSObject <NSUserNotificationCenterDelegate, _NSUserNotificationCenterDelegatePrivate>
{
    BOOL _pushSettingsHaveChanged;
    NSString *_serviceType;
    NSString *_apnTopic;
    ACAccountStore *_accountStore;
    NSUserNotificationCenter *_userNotificationCenter;
    NSBundle *_bundle;
}

@property(retain) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain) NSUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property BOOL pushSettingsHaveChanged; // @synthesize pushSettingsHaveChanged=_pushSettingsHaveChanged;
@property(retain) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain) NSString *apnTopic; // @synthesize apnTopic=_apnTopic;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (id)stringFromResponseObject:(id)arg1;
- (void)userNotificationCenter:(id)arg1 notificationsDisabled:(BOOL)arg2;
- (void)userNotificationCenter:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (id)registeredPushDestinationsFromProviderWithAccount:(id)arg1;
- (id)destroyParametersForUUID:(id)arg1;
- (id)destroyURLForUUID:(id)arg1;
- (id)urlForActivateNotification:(id)arg1;
- (void)handleAPSConnectionMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (id)notificationCenterBundleID;
- (id)listURL;
- (id)registrationURL;
- (id)acAccountType;
- (unsigned long long)currentPushSettings;
- (id)registrationPlistPath;
- (void)registerWithUserNotificationCenter;
- (id)firstAuthenticatedAccount;
- (id)accountWithUserName:(id)arg1;
- (void)unregisterFromNotificationCenterIfOneAccountLeft;
- (id)allAccounts;
- (void)listAllPushDestinationsAndUnregister:(BOOL)arg1 thisDeviceOnly:(BOOL)arg2 removePersistedFile:(BOOL)arg3;
- (id)registeredPushDestinationsFromProvider;
- (long long)removePushDestinationsForAccount:(id)arg1 onDevice:(id)arg2 allowOtherDevices:(BOOL)arg3;
- (void)sendServiceProviderPushDestinationRequestForDeviceToken:(id)arg1;
- (BOOL)isRegisteredForPush:(id)arg1;
- (void)checkForMissingPushDestinations;
- (BOOL)handleChangesToPushNotificationSettings;
- (id)initWithServiceType:(id)arg1 accountStore:(id)arg2;
- (void)unregisterAllAccountsThenRegisterForNewDeviceTokenWithOldUUID:(id)arg1 deviceToken:(id)arg2 newUUID:(id)arg3;
- (void)registerForPushNotificationsAndUpdatePersistFileWithDeviceToken:(id)arg1 UUID:(id)arg2 account:(id)arg3 enabledFor:(unsigned long long)arg4;
- (void)registerAccount:(id)arg1;
- (void)unregisterCurrentUUID;
- (BOOL)unregisterAccount:(id)arg1 uuid:(id)arg2;
- (BOOL)unregisterAccount:(id)arg1;
- (void)removePersistentStorage;
- (void)removePersistedAccountUsername:(id)arg1;
- (void)persistUUID:(id)arg1 deviceToken:(id)arg2 enabledFor:(unsigned long long)arg3 account:(id)arg4;
- (unsigned long long)persistedEnabledFor;
- (id)persistedDeviceToken;
- (id)persistedUUID;
- (id)persistedAccountList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

