//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TUCallCapabilities : NSObject
{
}

+ (void)_setRelayCallingEnabledDefault:(BOOL)arg1;
+ (BOOL)_relayCallingEnabledDefault;
+ (void)_setCanEnableRelayCallingDefault:(BOOL)arg1;
+ (BOOL)_canEnableRelayCallingDefault;
+ (void)setRelayCallingEnabled:(BOOL)arg1;
+ (BOOL)isRelayCallingEnabled;
+ (BOOL)canEnableRelayCalling;
+ (void)_tearDownRelayCallingListeners;
+ (void)_setUpRelayCallingListeners;
+ (void)_initializeState;
+ (void)setWiFiCallingCapabilityInformation:(id)arg1;
+ (id)wiFiCallingCapabilityInformation;
+ (void)setWiFiCallingEnabled:(BOOL)arg1;
+ (BOOL)isWiFiCallingEnabled;
+ (BOOL)canEnableWiFiCalling;
+ (BOOL)supportsDisplayingFaceTimeVideoCalls;
+ (BOOL)supportsDisplayingFaceTimeAudioCalls;
+ (BOOL)supportsDisplayingTelephonyCalls;
+ (BOOL)supportsRelayingFaceTimeVideoCalls;
+ (BOOL)supportsRelayingFaceTimeAudioCalls;
+ (BOOL)supportsRelayingTelephonyCalls;
+ (BOOL)supportsHostingFaceTimeVideoCalls;
+ (BOOL)supportsHostingFaceTimeAudioCalls;
+ (BOOL)supportsCellularCalls;
+ (BOOL)supportsFaceTimeVideoCalls;
+ (BOOL)supportsFaceTimeAudioCalls;
+ (BOOL)supportsTelephonyCalls;

@end
