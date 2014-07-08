//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class ALConnection, NSDictionary, NSMutableArray, NSNetService, NSNetServiceBrowser, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface ALSession : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
{
    id _securityDelegate;
    NSString *_type;
    NSString *_name;
    NSDictionary *_txtRecord;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    Class _securityProviderClass;
    struct __SCDynamicStore *_dynamicStoreConnection;
    NSObject<OS_dispatch_queue> *_scObservationQueue;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    CDUnknownBlockType _connectionComparator;
    int _ipv6AcceptSocket;
    NSString *_connectedServiceName;
    NSMutableArray *_availablePeers;
    BOOL _clientIsReconnecting;
    BOOL _automaticallySeeksFastestConnection;
    BOOL _clientIsReResolving;
    BOOL _clientIsUpdatingAvailableConnections;
    NSNetService *_netService;
    ALConnection *_activeConnection;
    NSMutableArray *_otherConnections;
    NSDictionary *_remoteAddressesByIFMap;
    BOOL _isServer;
    int _socketFd;
    BOOL _hasEverBeenConnected;
    BOOL _secureTransport106Compatibility;
    BOOL _disallowsIPV6;
    NSNumber *_connectionTimeout;
    id <ALSessionDelegateProtocol> _delegate;
    NSNetServiceBrowser *_netServiceBrowser;
}

@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property __weak id <ALSessionDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) NSNumber *connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property BOOL disallowsIPV6; // @synthesize disallowsIPV6=_disallowsIPV6;
@property BOOL secureTransport106Compatibility; // @synthesize secureTransport106Compatibility=_secureTransport106Compatibility;
@property(readonly) BOOL isCheckingForNewConnectionMethods; // @synthesize isCheckingForNewConnectionMethods=_clientIsUpdatingAvailableConnections;
- (void).cxx_destruct;
@property(readonly) int remoteInterfaceType;
@property(readonly) int localInterfaceType;
- (int)_findAvailablePortFrom:(int)arg1 addressFamily:(int)arg2 keepBound:(BOOL)arg3 fd:(int *)arg4;
- (void)closeStream:(id)arg1;
- (id)newStreamWithName:(id)arg1;
- (id)_connect:(id)arg1;
- (void)_enumerateAndConnectToNewAddressesOfPeerNamed:(id)arg1 clientIsWaiting:(BOOL)arg2;
- (void)connectToPeerNamed:(id)arg1;
- (BOOL)resolvePeerNamed:(id)arg1;
- (void)stop;
- (void)startClient;
- (void)assumeFastestConnection;
- (void)setsAutomaticallySeeksFastestConnection:(BOOL)arg1;
- (void)_reResolveAddresses;
- (void)_networkConfigurationChanged;
- (BOOL)startServer;
- (void)setSecurityProviderDelegate:(id)arg1;
- (void)setSecurityProvider:(Class)arg1;
- (void)setName:(id)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)type;
- (void)dealloc;
- (id)initWithType:(id)arg1 baseQueueName:(id)arg2;
- (id)initWithType:(id)arg1;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (void)connection:(id)arg1 streamClosing:(id)arg2;
- (void)connection:(id)arg1 newIncomingStream:(id)arg2;
- (void)connectionDeterminedTopology:(id)arg1 withCurrentRemoteAddressMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

