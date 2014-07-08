//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class NSString, _IDSWeakReference;

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol>
{
    id _delegateContext;
    _IDSWeakReference *_delegate;
    struct dispatch_queue_s *_queue;
    long long _state;
}

@property(readonly) long long state; // @synthesize state=_state;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)stopScanningForType:(long long)arg1;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2 delegateContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

