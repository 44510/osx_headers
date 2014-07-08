//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AssistantCallbackController.h"

#import "AutoGuessSetup.h"
#import "BaseStationSetup.h"
#import "SettingsProtocol.h"
#import "SetupUIConfigDelegateResult.h"

@class NSDate, NSDictionary, NSMutableSet, NSString;

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup, SettingsProtocol>
{
    id _context;
    struct SettingsContext *_settingsContext;
    NSMutableSet *_settingsDelegates;
    NSString *_settingsKeyToEdit;
    BOOL _autoJoinState;
    BOOL _scanningState;
    BOOL _busy;
    BOOL _initializedBasePasswordFlag;
    BOOL _performingManualRead;
    BOOL _needToNilBonjour;
    struct BSConfigurationContext *_configContext;
    NSMutableSet *_setupDelegates;
    id _uiConfigDelegate;
    NSString *_autoGuessSetupRecommendation;
    NSDictionary *_lastInstrumentation;
    BOOL _rememberDiskPassword;
    NSDate *_lastHeardFromDevice;
    NSString *_lastSystemName;
    NSString *_lastDNSName;
    NSString *_keychainBasePassword;
    NSString *_keychainWiFiPassword;
    NSString *_keychainDiskPassword;
    NSString *_wifiNameTwoFour;
    NSString *_wifiNameFive;
    BOOL _activeTask;
}

+ (id)setupController;
+ (void)initialize;
@property(nonatomic) BOOL activeTask; // @synthesize activeTask=_activeTask;
@property(retain, nonatomic) NSString *lastDNSName; // @synthesize lastDNSName=_lastDNSName;
@property(retain, nonatomic) NSString *lastSystemName; // @synthesize lastSystemName=_lastSystemName;
@property(nonatomic) BOOL rememberDiskPassword; // @synthesize rememberDiskPassword=_rememberDiskPassword;
@property(copy, nonatomic) NSString *settingsKeyToEdit; // @synthesize settingsKeyToEdit=_settingsKeyToEdit;
@property(readonly, nonatomic) NSMutableSet *settingsDelegates; // @synthesize settingsDelegates=_settingsDelegates;
@property(retain, nonatomic) NSDictionary *lastInstrumentation; // @synthesize lastInstrumentation=_lastInstrumentation;
@property(retain, nonatomic) NSString *autoGuessSetupRecommendation; // @synthesize autoGuessSetupRecommendation=_autoGuessSetupRecommendation;
@property(nonatomic) id <SetupUIConfigDelegate> uiConfigDelegate; // @synthesize uiConfigDelegate=_uiConfigDelegate;
@property(readonly, nonatomic) NSMutableSet *setupDelegates; // @synthesize setupDelegates=_setupDelegates;
@property(nonatomic) id context; // @synthesize context=_context;
- (int)performFunctionWithParamDict:(id)arg1;
- (id)possibleValuesForSubproperty:(id)arg1 includeHiddenValues:(BOOL)arg2;
- (id)possibleValuesForSettingKey:(id)arg1 andMetadataKey:(id)arg2 includeHiddenValues:(BOOL)arg3;
- (BOOL)isConflictingValue:(id)arg1 forSettingKey:(id)arg2 andMetadataKey:(id)arg3 andMetaDataIndex:(unsigned long long)arg4 conflictBodyKey:(id *)arg5 conflictAlertPromptKey:(id *)arg6;
- (BOOL)isValidMetaDataRecord:(id)arg1 atIndex:(unsigned long long)arg2 forSettingKey:(id)arg3;
- (BOOL)isValidValue:(id)arg1 forSettingKey:(id)arg2 andMetadataKey:(id)arg3 andRecord:(id)arg4;
- (id)icloudKitClientString;
- (int)getValue:(id *)arg1 forSettingKey:(id)arg2;
- (int)setValue:(id)arg1 forSettingKey:(id)arg2;
- (int)endEdit:(BOOL)arg1;
- (BOOL)isEditing;
- (BOOL)hasChanges;
- (int)beginEdit;
- (BOOL)hasEditMode;
- (BOOL)hasSettingsLevel:(int)arg1;
- (int)settingsLevel;
- (int)setSettingsLevel:(int)arg1;
- (int)refreshSettings;
@property(nonatomic) id <SettingsFunctionDelegate> settingsFunctionDelegate;
@property(nonatomic) id <SettingsValueDelegate> settingsValueDelegate; // @dynamic settingsValueDelegate;
- (int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (int)setupWithTargetNetwork:(id)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2;
@property(readonly, nonatomic) NSDictionary *retiredOverrides;
@property(retain, nonatomic) NSDictionary *retiredFWInfo;
@property(retain, nonatomic) NSString *newestFirmwareVersion;
- (struct SettingsContext *)settingsContext;
- (long long)ethernetPortCount;
- (struct _BaseStation *)bsRef;
- (BOOL)dirty;
@property(retain, nonatomic) NSDictionary *bonjourRecord;
@property(nonatomic) BOOL rememberWiFiPassword;
@property(nonatomic) BOOL rememberBasePassword;
@property(readonly, nonatomic) NSDate *lastHeardFromDevice; // @synthesize lastHeardFromDevice=_lastHeardFromDevice;
- (BOOL)isMonitoring;
- (int)setMonitorForChanges:(BOOL)arg1;
- (int)taskArchiveDiskAsync:(id)arg1;
- (int)taskEraseDiskAsync:(id)arg1;
- (int)taskUploadFirmwareAsync:(id)arg1;
- (int)taskRestoreDefaultsAsync:(BOOL)arg1;
- (int)taskRestartAsync;
- (int)busyState;
- (unsigned int)taskCode;
- (int)taskState;
- (int)rpcWPSAllowClientAsync:(id)arg1;
- (int)rpcWPSStopAsync;
- (int)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2 timeout:(unsigned int)arg3;
- (int)rpcRenewDHCPLeaseAsync;
- (int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (int)rpcRefreshBSSettingAsync:(int)arg1;
- (int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2;
- (int)rpcSystemInterfacesAsync;
- (void)deleteKeychainWirelessPassword;
- (void)saveKeychainWirelessPassword;
- (void)loadKeychainWirelessPassword;
- (void)deleteKeychainDiskPassword;
- (void)saveKeychainDiskPassword;
- (void)loadKeychainDiskPassword;
- (void)deleteKeychainBasePassword;
- (void)saveKeychainBasePassword;
- (void)loadKeychainBasePassword;
- (int)updateKeychainWithPasswords;
- (int)updateKeychainWithPasswordsWithStatus:(int)arg1;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(BOOL)arg1;
- (void)updateRememberKeychainFlagsIfInitializing;
- (id)allKeychainMACAddresses;
- (id)bestKeychainMACAddress;
- (int)snapshotPop:(BOOL)arg1;
- (int)snapshotPush;
- (BOOL)snapshotDirty;
- (void)snapshotResetAll;
- (id)snapshotChangedKeys;
- (int)updateSettingsAsync;
- (int)readPropertyListFromBaseAsync:(id)arg1;
- (int)readAllPropertiesFromBaseAsync;
- (int)joinAndBrowseAsync;
- (int)joinAsync;
@property(retain, nonatomic) NSString *keychainDiskPassword; // @dynamic keychainDiskPassword;
@property(retain, nonatomic) NSString *keychainWiFiPassword; // @dynamic keychainWiFiPassword;
@property(retain, nonatomic) NSString *keychainBasePassword; // @dynamic keychainBasePassword;
@property(retain, nonatomic) NSString *wifiNameFive; // @synthesize wifiNameFive=_wifiNameFive;
@property(retain, nonatomic) NSString *wifiNameTwoFour; // @synthesize wifiNameTwoFour=_wifiNameTwoFour;
- (int)unIgnoreProblemCode:(unsigned int)arg1;
- (int)ignoreProblemCode:(unsigned int)arg1;
- (id)validateSettingsAndGetErrors:(id)arg1;
- (id)validateAllSettingsAndGetErrors;
- (long long)unignoredProblemCount;
- (int)stateForProblem:(unsigned int)arg1;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (int)getValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)copyValueOrig:(id *)arg1 forSettingPath:(id)arg2;
- (int)copyValueNew:(id *)arg1 forSettingPath:(id)arg2;
- (int)copyValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)setValue:(id)arg1 forSettingPath:(id)arg2;
- (int)getValue:(id *)arg1 forBSSetting:(int)arg2;
- (int)copyValue:(id *)arg1 forBSSetting:(int)arg2;
- (int)setValue:(id)arg1 forBSSetting:(int)arg2;
- (int)cancelSetup;
- (int)cancelTask;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (int)closeAllConnections;
- (int)closeAllConnections:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)targetBaseInfoDict;
- (void)logChangesToCCL;
- (void)handleTaskComplete;
- (void)handleSetupComplete:(int)arg1;
- (void)resetWiFiState;
- (void)setupWiFiState;
- (void)updateLastHeardFromDevice;
- (void)handleBusyComplete;
- (void)handleBusyStart;
- (BOOL)performingManualRead;
- (void)handleSettingRefresh:(id)arg1 status:(int)arg2;
- (void)handleSettingsUpdate:(id)arg1;
- (void)handleCopyAllSettingsUpdateThread:(id)arg1;
- (void)handleRefreshDelegates:(id)arg1;
- (void)handleSettingsDelegatesClosed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSDictionary *restoreRecommendation;
@property(readonly) Class superclass;
@property(nonatomic) id <AssistantCallbackUIDelegate> uiDelegate;

@end

