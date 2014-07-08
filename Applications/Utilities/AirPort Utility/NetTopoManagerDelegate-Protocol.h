//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NetTopoAirPortDeviceLayer, NetTopoObjectLayer;

@protocol NetTopoManagerDelegate <NSObject>

@optional
- (void)requiredFirmwareUpdateAvailabilityChanged:(NetTopoObjectLayer *)arg1;
- (void)networkInterfaceRemoved:(NSString *)arg1;
- (void)networkInterfaceAdded:(NSString *)arg1 displayName:(NSString *)arg2;
- (void)topologyWasDestroyed;
- (void)topologyWillBeDestroyed;
- (void)noDevicesFoundYet;
- (void)deviceWasDeleted:(NetTopoObjectLayer *)arg1;
- (void)deviceHasGoneMissing:(NetTopoObjectLayer *)arg1;
- (void)deviceWasChanged:(NetTopoObjectLayer *)arg1;
- (void)deviceHadReadError:(NetTopoObjectLayer *)arg1 status:(int)arg2;
- (void)deviceHadWriteError:(NetTopoObjectLayer *)arg1 status:(int)arg2;
- (void)deviceHadTaskError:(NetTopoObjectLayer *)arg1 taskCode:(unsigned int)arg2 status:(int)arg3;
- (BOOL)okToRunDiscovery;
- (void)deviceDiscoveryComplete:(NetTopoObjectLayer *)arg1;
- (void)deviceWasAdded:(NetTopoObjectLayer *)arg1;
- (void)remoteAirPortBaseStationRemoved:(NSDictionary *)arg1;
- (void)remoteAirPortBaseStationAdded:(NSDictionary *)arg1;
- (void)remoteAirPortDeviceAdded:(NetTopoAirPortDeviceLayer *)arg1 fromConfigureOther:(BOOL)arg2;
- (void)unconfiguredAirPortNetworkRemoved:(NSDictionary *)arg1;
- (void)unconfiguredAirPortNetworkAdded:(NSDictionary *)arg1;
- (void)unconfiguredAirPortDeviceAdded:(NetTopoAirPortDeviceLayer *)arg1;
@end

