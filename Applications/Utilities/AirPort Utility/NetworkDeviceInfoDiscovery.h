//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableDictionary, NSString;

@interface NetworkDeviceInfoDiscovery : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSMutableDictionary *_masterSearchDict;
    id _delegate;
    NSString *_currentInterface;
}

+ (void)initalizeQueues;
- (void)seekInfoForIPv4Address:(id)arg1 onInterface:(id)arg2;
- (void)seekInfoForMACAddress:(id)arg1 onInterface:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)getResolvedServiceDictFromSearchInfo:(id)arg1 forServiceName:(id)arg2;
- (void)netServiceWillResolve:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)stopDiscovery;
- (void)startDiscovery:(id)arg1;
- (void)pingNetwork:(id)arg1 withSubnet:(id)arg2;
- (void)ipv4Resolved:(id)arg1 toHostname:(id)arg2;
- (void)startBonjourSearchForServicesWithInfo:(CDStruct_86fe59b7 *)arg1 inDomain:(id)arg2 onInterface:(id)arg3;
- (void)sendUpdatedDevicesToDelegate:(id)arg1;
@property(nonatomic) id <NetworkDeviceDiscoveryDelegate> delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
