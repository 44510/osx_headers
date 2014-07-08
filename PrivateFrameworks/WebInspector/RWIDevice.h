//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWITarget.h>

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface RWIDevice : RWITarget
{
    id <RWIDeviceDelegate> _deviceDelegate;
    BOOL _hasBuildVersion;
    BOOL _attemptedPair;
    long long _pairedProgress;
    struct _AMDevice *_device;
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;
    NSObject<OS_dispatch_source> *_deviceAccessQueuePairingTimer;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceAccessQueue; // @synthesize deviceAccessQueue=_deviceAccessQueue;
@property(readonly, nonatomic) struct _AMDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) long long pairingProgress; // @synthesize pairingProgress=_pairedProgress;
@property(nonatomic) id <RWIDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate=_deviceDelegate;
- (void)_queueAttemptingPairWithProgressCallback:(CDUnknownBlockType)arg1;
- (void)_fetchMobileDeviceInformationFromDevice;
- (void)connectionChangedConnectivity;
- (void)setSimulatorBuildVersion:(id)arg1 productVersion:(id)arg2 name:(id)arg3;
- (void)setDeviceName:(id)arg1 udid:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 paired:(long long)arg5 supported:(BOOL)arg6;
- (void)markAsHavingBuildVersion;
- (BOOL)_paired;
- (BOOL)isSimulator;
- (BOOL)isDevice;
- (BOOL)isIOS;
- (BOOL)isReady;
- (BOOL)hadConnectionError;
- (void)pair;
- (void)dealloc;
- (id)initWithUDID:(id)arg1 name:(id)arg2 manager:(id)arg3;
- (id)initWithDevice:(struct _AMDevice *)arg1 manager:(id)arg2;

@end

