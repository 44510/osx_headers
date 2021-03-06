//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CloudConfigurationManager, CountryManager, DateAndTimeManager, IncompatibleSoftwareManager, KeyboardManager, LocalUserAccountManager, MBLoginHelperConnection, MigrationManager, NetworkingManager, PointingDeviceManager, PreloginTasksManager, RegistrationServerManager, ServicesManager, WiFiManager, iCloudManager;

@interface SetupStateManager : NSObject
{
    MBLoginHelperConnection *_helper;
    BOOL isMiniBuddy;
    BOOL _isKeychainUpsellBuddy;
    BOOL _didDoTALRestore;
    CloudConfigurationManager *cloudConfigurationManager;
    CountryManager *countryManager;
    KeyboardManager *keyboardManager;
    WiFiManager *wifiManager;
    NetworkingManager *networkingManager;
    MigrationManager *migrationManager;
    iCloudManager *iCloudManager;
    LocalUserAccountManager *localUserAccountManager;
    PointingDeviceManager *pointingDeviceManager;
    ServicesManager *servicesManager;
    IncompatibleSoftwareManager *incompatibleSoftwareManager;
    DateAndTimeManager *dateAndTimeManager;
    PreloginTasksManager *preloginTasksManager;
    RegistrationServerManager *registrationServerManager;
}

@property BOOL didDoTALRestore; // @synthesize didDoTALRestore=_didDoTALRestore;
@property BOOL isKeychainUpsellBuddy; // @synthesize isKeychainUpsellBuddy=_isKeychainUpsellBuddy;
@property(retain) RegistrationServerManager *registrationServerManager; // @synthesize registrationServerManager;
@property(retain) PreloginTasksManager *preloginTasksManager; // @synthesize preloginTasksManager;
@property(retain) DateAndTimeManager *dateAndTimeManager; // @synthesize dateAndTimeManager;
@property(retain) IncompatibleSoftwareManager *incompatibleSoftwareManager; // @synthesize incompatibleSoftwareManager;
@property(retain) ServicesManager *servicesManager; // @synthesize servicesManager;
@property(retain) PointingDeviceManager *pointingDeviceManager; // @synthesize pointingDeviceManager;
@property(retain) LocalUserAccountManager *localUserAccountManager; // @synthesize localUserAccountManager;
@property(retain) iCloudManager *iCloudManager; // @synthesize iCloudManager;
@property(retain) MigrationManager *migrationManager; // @synthesize migrationManager;
@property(retain) NetworkingManager *networkingManager; // @synthesize networkingManager;
@property(retain) WiFiManager *wifiManager; // @synthesize wifiManager;
@property(retain) KeyboardManager *keyboardManager; // @synthesize keyboardManager;
@property(retain) CountryManager *countryManager; // @synthesize countryManager;
@property(retain) CloudConfigurationManager *cloudConfigurationManager; // @synthesize cloudConfigurationManager;
@property BOOL isMiniBuddy; // @synthesize isMiniBuddy;
- (void)connectToMBLoginHelper;
@property(readonly, retain) MBLoginHelperConnection *mbloginhelper;
- (void)createNewRegistrationServerManager;
- (void)dealloc;
- (id)init:(BOOL)arg1;

@end

