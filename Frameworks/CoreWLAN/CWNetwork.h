//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CWChannel, NSData, NSDictionary, NSString;

@interface CWNetwork : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_scanRecord;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *scanRecord; // @synthesize scanRecord=_scanRecord;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (BOOL)supportsPHYMode:(long long)arg1;
- (BOOL)supportsSecurity:(long long)arg1;
- (BOOL)isEqualToNetwork:(id)arg1;
@property(readonly) NSString *countryCode; // @dynamic countryCode;
@property(readonly) long long beaconInterval; // @dynamic beaconInterval;
@property(readonly) NSData *informationElementData; // @dynamic informationElementData;
@property(readonly) long long noiseMeasurement; // @dynamic noiseMeasurement;
@property(readonly) long long rssiValue; // @dynamic rssiValue;
@property(readonly) CWChannel *wlanChannel; // @dynamic wlanChannel;
@property(readonly) NSString *bssid; // @dynamic bssid;
@property(readonly) NSData *ssidData; // @dynamic ssidData;
@property(readonly) NSString *ssid; // @dynamic ssid;
@property(readonly) BOOL ibss; // @dynamic ibss;
- (void)dealloc;
- (BOOL)isAppleSWAP;
- (id)accessoryFriendlyName;
- (BOOL)isUnconfiguredAirPrintAccessory;
- (BOOL)isUnconfiguredAirPlayAccessory;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)isUnconfiguredBaseStation:(id *)arg1;
- (id)unconfiguredBaseStationName:(unsigned char)arg1;
@property(readonly, copy) NSString *hessid; // @dynamic hessid;
@property(readonly) long long venueType; // @dynamic venueType;
@property(readonly) long long venueGroup; // @dynamic venueGroup;
@property(readonly) BOOL isUnauthenticatedEmergencyServiceAccessible; // @dynamic isUnauthenticatedEmergencyServiceAccessible;
@property(readonly) BOOL isEmergencyServicesReachable; // @dynamic isEmergencyServicesReachable;
@property(readonly) BOOL isAdditionalStepRequiredForAccess; // @dynamic isAdditionalStepRequiredForAccess;
@property(readonly) BOOL hasInternet; // @dynamic hasInternet;
@property(readonly) long long accessNetworkType; // @dynamic accessNetworkType;
@property(readonly) BOOL hasInterworkingIE; // @dynamic hasInterworkingIE;
@property(readonly) BOOL isPasspoint; // @dynamic isPasspoint;
@property(readonly) BOOL isPersonalHotspot; // @dynamic isPersonalHotspot;
@property(readonly) NSData *bssidData; // @dynamic bssidData;
@property(readonly) unsigned long long physicalLayerMode; // @dynamic physicalLayerMode;
@property(readonly) unsigned long long securityType; // @dynamic securityType;
@property(readonly) BOOL supportsWPS; // @dynamic supportsWPS;
@property(readonly) BOOL supportsEasyConnect; // @dynamic supportsEasyConnect;
- (id)initWithScanRecord:(id)arg1;
- (id)phyMode;
- (id)wirelessProfile;
- (id)ieData;
- (id)noise;
- (id)channel;
- (id)rssi;
- (id)securityMode;
- (BOOL)isIBSS;
@property(readonly) long long aggregateRSSI; // @dynamic aggregateRSSI;

@end
