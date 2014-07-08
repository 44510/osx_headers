//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CWEAPOLClient, CWIPMonitor, NSArray, NSSet, NSString, NSXPCConnection;

@interface CWInterface : NSObject
{
    void *_device;
    NSString *_interfaceName;
    NSArray *_capabilities;
    struct IONotificationPort *_interfaceRemovedNotificationPort;
    unsigned int _interfaceRemovedNotification;
    BOOL _deviceAttached;
    id _eapolClient;
    id _ipMonitor;
    struct dispatch_queue_s *_internalQueue;
    void *_serviceStore;
    void *_interfaceStore;
    BOOL _lastPowerState;
    NSXPCConnection *_xpcConnection;
}

+ (id)interfaceWithName:(id)arg1;
+ (id)interface;
+ (id)interfaceNames;
+ (id)supportedInterfaces;
@property BOOL deviceAttached; // @synthesize deviceAttached=_deviceAttached;
@property BOOL lastPowerState; // @synthesize lastPowerState=_lastPowerState;
@property(copy) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property void *device; // @synthesize device=_device;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (BOOL)commitConfiguration:(id)arg1 authorization:(id)arg2 error:(out id *)arg3;
- (id)configuration;
- (long long)security;
- (BOOL)serviceActive;
- (id)hardwareAddress;
- (BOOL)powerOn;
- (id)cachedScanResults;
- (long long)transmitPower;
- (double)transmitRate;
- (long long)noiseMeasurement;
- (long long)rssiValue;
- (long long)interfaceMode;
- (long long)activePHYMode;
- (id)wlanChannel;
- (id)countryCode;
- (id)bssid;
- (id)ssidData;
- (id)ssid;
- (id)supportedWLANChannels;
- (BOOL)startIBSSModeWithSSID:(id)arg1 security:(long long)arg2 channel:(unsigned long long)arg3 password:(id)arg4 error:(out id *)arg5;
- (id)__supportedWLANChannelForChannelNumber:(unsigned long long)arg1;
- (void)disassociate;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 identity:(struct OpaqueSecIdentityRef *)arg2 username:(id)arg3 password:(id)arg4 error:(out id *)arg5;
- (BOOL)associateToNetwork:(id)arg1 password:(id)arg2 error:(out id *)arg3;
- (id)scanForNetworksWithName:(id)arg1 error:(out id *)arg2;
- (id)scanForNetworksWithSSID:(id)arg1 error:(out id *)arg2;
- (BOOL)setWEPKey:(id)arg1 flags:(unsigned long long)arg2 index:(long long)arg3 error:(out id *)arg4;
- (BOOL)setPairwiseMasterKey:(id)arg1 error:(out id *)arg2;
- (BOOL)setWLANChannel:(id)arg1 error:(out id *)arg2;
- (BOOL)setPower:(BOOL)arg1 error:(out id *)arg2;
- (id)initWithInterfaceName:(id)arg1;
- (BOOL)__startEventMonitoring;
- (void)dealloc;
- (void)finalize;
- (BOOL)connectToTetherDevice:(id)arg1 remember:(BOOL)arg2 error:(id *)arg3;
- (id)lastTetherDeviceJoined;
- (void)relinquishBluetoothPagingLockAndReply:(CDUnknownBlockType)arg1;
- (void)acquireBluetoothPagingLockAndReply:(CDUnknownBlockType)arg1;
- (void)restoreJoinConfigurationWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveJoinConfigurationAndReply:(CDUnknownBlockType)arg1;
- (id)initWithInterfaceName:(id)arg1 xpcConnection:(id)arg2 legacyEventMonitoring:(BOOL)arg3;
- (void)clearANQPCacheForBSSID:(id)arg1;
- (void)clearANQPCache;
- (id)queryANQPCacheForElements:(unsigned long long)arg1 network:(id)arg2 maxAge:(double)arg3;
- (id)queryANQPElements:(unsigned long long)arg1 network:(id)arg2 maxCacheAge:(double)arg3 timeout:(double)arg4 error:(out id *)arg5;
- (id)name;
- (BOOL)causedLastWake;
- (id)lastPreferredNetworkJoined;
- (id)lastNetworkJoined;
- (id)bssidData;
- (BOOL)busy;
- (void)clearScanCache;
- (BOOL)startWPSForNetwork:(id)arg1 pin:(id)arg2 remember:(BOOL)arg3 error:(out id *)arg4;
@property(readonly) unsigned long long interfaceCapabilities;
- (void)stopIBSSMode;
- (id)queryGASCacheWithANQPElements:(unsigned long long)arg1 bssid:(id)arg2 hessid:(id)arg3 maxAge:(double)arg4 error:(out id *)arg5;
- (id)performGASQueryWithANQPElements:(unsigned long long)arg1 bssid:(id)arg2 hessid:(id)arg3 channel:(id)arg4 maxAge:(double)arg5 interfaceName:(id)arg6 waitForWiFi:(BOOL)arg7 waitForBluetooth:(BOOL)arg8 priority:(long long)arg9 error:(out id *)arg10;
- (id)queryScanCacheWithChannels:(id)arg1 ssidList:(id)arg2 maxAge:(double)arg3 maxMissCount:(long long)arg4 maxWakeCount:(long long)arg5 maxAutoJoinCount:(long long)arg6 error:(out id *)arg7;
- (id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 restTime:(unsigned long long)arg4 dwellTime:(unsigned long long)arg5 ssidList:(id)arg6 error:(out id *)arg7;
- (id)scanForNetworksWithChannels:(id)arg1 ssidList:(id)arg2 legacyScanSSID:(id)arg3 includeHiddenNetworks:(BOOL)arg4 mergedScanResults:(BOOL)arg5 maxAge:(double)arg6 maxMissCount:(long long)arg7 maxWakeCount:(long long)arg8 maxAutoJoinCount:(long long)arg9 waitForWiFi:(BOOL)arg10 waitForBluetooth:(BOOL)arg11 priority:(long long)arg12 error:(out id *)arg13;
- (id)scanForNetworksWithChannels:(id)arg1 ssid:(id)arg2 bssid:(id)arg3 error:(out id *)arg4;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 clientItemID:(struct __EAPOLClientItemID *)arg2 username:(id)arg3 password:(id)arg4 identity:(struct OpaqueSecIdentityRef *)arg5 forceBSSID:(BOOL)arg6 remember:(BOOL)arg7 error:(out id *)arg8;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 clientItemID:(struct __EAPOLClientItemID *)arg2 username:(id)arg3 password:(id)arg4 identity:(struct OpaqueSecIdentityRef *)arg5 error:(out id *)arg6;
- (BOOL)associateToEnterpriseNetwork:(id)arg1 identity:(struct OpaqueSecIdentityRef *)arg2 username:(id)arg3 password:(id)arg4 forceBSSID:(BOOL)arg5 remember:(BOOL)arg6 error:(out id *)arg7;
- (BOOL)associateToPasspointNetwork:(id)arg1 usingDomainName:(id)arg2 error:(out id *)arg3;
- (BOOL)associateToSystemModeEnterpriseNetwork:(id)arg1 error:(out id *)arg2;
- (BOOL)associateToLoginWindowModeEnterpriseNetworkWithEAPProfile:(struct __EAPOLClientProfile *)arg1 username:(id)arg2 password:(id)arg3 error:(out id *)arg4;
- (id)__scanForLoginWindowModeEnterpriseNetworkWithEAPProfile:(struct __EAPOLClientProfile *)arg1 error:(out id *)arg2;
- (BOOL)associateToNetwork:(id)arg1 password:(id)arg2 forceBSSID:(BOOL)arg3 remember:(BOOL)arg4 error:(out id *)arg5;
- (void)stopHostAPMode;
- (BOOL)startHostAPMode:(out id *)arg1;
- (BOOL)startHostAPModeWithSSID:(id)arg1 securityType:(unsigned long long)arg2 channel:(id)arg3 password:(id)arg4 error:(out id *)arg5;
- (BOOL)setWakeOnWirelessEnabled:(BOOL)arg1 error:(out id *)arg2;
- (BOOL)wakeOnWirelessEnabled;
- (BOOL)networkInterfaceAvailable;
- (long long)interfaceControlState;
- (unsigned long long)mcsIndex;
- (unsigned long long)maximumLinkSpeed;
- (unsigned long long)supportedPhysicalLayerModes;
- (id)networkServiceIDs;
- (unsigned long long)securityType;
- (BOOL)monitorMode;
- (unsigned long long)physicalLayerMode;
@property(readonly, retain) CWEAPOLClient *eapolClient; // @dynamic eapolClient;
@property(readonly, retain) CWIPMonitor *ipMonitor; // @dynamic ipMonitor;
- (BOOL)enableIBSSWithParameters:(id)arg1 error:(out id *)arg2;
- (id)securityMode;
- (BOOL)associateToNetwork:(id)arg1 parameters:(id)arg2 error:(out id *)arg3;
- (id)phyMode;
@property(readonly) NSSet *supportedISMChannels; // @dynamic supportedISMChannels;
@property(readonly) long long aggregateNoise; // @dynamic aggregateNoise;
@property(readonly) long long aggregateRSSI; // @dynamic aggregateRSSI;
@property(readonly) BOOL powerSaveModeEnabled; // @dynamic powerSaveModeEnabled;
- (id)opMode;
- (BOOL)supportsShortGI40MHz;
- (id)txRate;
- (id)noise;
- (id)rssi;
- (BOOL)power;
- (id)interfaceState;
- (id)channel;
- (id)scanForNetworksWithParameters:(id)arg1 error:(out id *)arg2;
- (void)disableHostAPMode;
- (void)enableHostAPMode;

@end
