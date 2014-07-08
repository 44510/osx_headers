//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TopoDeviceNode.h"

#import "NSCoding.h"
#import "SettingsFunctionDelegate.h"
#import "SettingsValueDelegate.h"
#import "TopoSettingsProtocol.h"

@class AUSetupController, DiskTaskController, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface TopoAirPortDeviceNode : TopoDeviceNode <NSCoding, TopoSettingsProtocol, SettingsValueDelegate, SettingsFunctionDelegate>
{
    AUSetupController *_config;
    NSDictionary *_info;
    NSDictionary *_systemInterfaces;
    NSDictionary *_wanConnectedBaseStations;
    NSArray *_lanConnectedBaseStations;
    NSDictionary *_connectedClients;
    BOOL _isPrimary;
    BOOL _isNATRouter;
    BOOL _isPrimaryNATRouter;
    BOOL _isDHCPServer;
    BOOL _hasEthernetConnection;
    int _wifiRole;
    BOOL _promptedForPassword;
    NSString *_passwordProvided;
    BOOL _removeOnTaskComplete;
    BOOL _okToEditWithOldSoftware;
    DiskTaskController *_diskTask;
    struct AsyncConnection *_connectivityCheck;
    int _connectivityCheckResult;
    NSMutableDictionary *_connectedDeviceInfo;
}

@property(retain, nonatomic) NSString *passwordProvided; // @synthesize passwordProvided=_passwordProvided;
@property(nonatomic) BOOL okToEditWithOldSoftware; // @synthesize okToEditWithOldSoftware=_okToEditWithOldSoftware;
@property(retain, nonatomic) NSMutableDictionary *connectedDeviceInfo; // @synthesize connectedDeviceInfo=_connectedDeviceInfo;
@property(nonatomic) int connectivityCheckResult; // @synthesize connectivityCheckResult=_connectivityCheckResult;
@property(nonatomic) struct AsyncConnection *connectivityCheck; // @synthesize connectivityCheck=_connectivityCheck;
@property(retain, nonatomic) DiskTaskController *diskTask; // @synthesize diskTask=_diskTask;
@property(nonatomic) BOOL removeOnTaskComplete; // @synthesize removeOnTaskComplete=_removeOnTaskComplete;
@property(nonatomic) int wifiRole; // @synthesize wifiRole=_wifiRole;
@property(nonatomic) BOOL hasEthernetConnection; // @synthesize hasEthernetConnection=_hasEthernetConnection;
@property(nonatomic) BOOL isDHCPServer; // @synthesize isDHCPServer=_isDHCPServer;
@property(nonatomic) BOOL isPrimaryNATRouter; // @synthesize isPrimaryNATRouter=_isPrimaryNATRouter;
@property(nonatomic) BOOL isNATRouter; // @synthesize isNATRouter=_isNATRouter;
@property(nonatomic) BOOL isPrimary; // @synthesize isPrimary=_isPrimary;
@property(retain, nonatomic) NSArray *lanConnectedBaseStations; // @synthesize lanConnectedBaseStations=_lanConnectedBaseStations;
@property(retain, nonatomic) NSDictionary *wanConnectedBaseStations; // @synthesize wanConnectedBaseStations=_wanConnectedBaseStations;
@property(retain, nonatomic) NSDictionary *systemInterfaces; // @synthesize systemInterfaces=_systemInterfaces;
@property(readonly, nonatomic) AUSetupController *config; // @synthesize config=_config;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupMonitoredSettingChanged:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (void)setConfig:(id)arg1;
- (int)callbackFunctionWithParamDict:(id)arg1;
- (void)handleEnterBasePasswordPrompt;
- (int)getValue:(id *)arg1 forSettingKey:(id)arg2;
- (int)settingsDevice;
- (id)settingsDictForCurrentContext;
- (id)description;
- (id)debugDescription;
- (id)describeOne:(id)arg1 node:(id)arg2 indent:(unsigned long long)arg3;
@property(retain, nonatomic) NSDictionary *connectedClients;
- (unsigned int)ipv4Address;
- (void)setIpv4Address:(unsigned int)arg1;
- (long long)localizedCompareDeviceNode:(id)arg1;
- (id)comparisonKey;
- (id)secondaryDeviceIdentifier;
- (id)deviceIdentifier;
- (void)createSetupControllerIfNecessary:(BOOL)arg1;
- (void)closeSetupController;
@property(retain, nonatomic) NSDictionary *info;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)initTopoAirPortDeviceNodeCommon;
@property(readonly, nonatomic) BOOL hasWirelessConnection;

@end

