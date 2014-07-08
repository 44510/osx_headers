//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Daemon.h>

#import "ALSessionDelegateProtocol.h"

@class ALSession, NSDictionary, NSImage, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSOrderedSet, NSString, NSURL, SMMacRemoteSystem, SMSlingShotFS;

@interface SMSystem_Daemon_AutoLoader : SMSystem_Daemon <ALSessionDelegateProtocol>
{
    BOOL connected;
    BOOL _connectOK;
    BOOL _connecting;
    BOOL _determiningFastestConnection;
    BOOL _connectionMethodHasChanged;
    BOOL _isCheckingForNewConnectionMethods;
    SMSlingShotFS *slingshotFS;
    NSURL *url;
    NSImage *_icon;
    ALSession *_session;
    NSObject<OS_dispatch_semaphore> *_waitForCallbackSemaphore;
    NSObject<OS_dispatch_queue> *_atomicConnectionQueue;
    SMMacRemoteSystem *_slingshot;
    unsigned long long _remoteCapabilities;
    NSString *_remoteOSVersion;
    NSString *_serviceName;
    unsigned long long _effectiveConnectionMethod;
    unsigned long long _localConnectionMethod;
    unsigned long long _remoteConnectionMethod;
    unsigned long long _availableConnectionMethods;
    NSString *_fasterInterfaceRecommendation;
    NSString *_serviceType;
    NSDictionary *_descriptionData;
}

+ (id)keyPathsForValuesAffectingFasterInterfaceRecommendations;
+ (id)keyPathsForValuesAffectingConnectionFamilies;
+ (id)keyPathsForValuesAffectingCommonCapabilities;
+ (id)getSadAndGrayIconForModel:(id)arg1 ofSize:(long long)arg2;
+ (id)iconForFile:(id)arg1 ofSize:(double)arg2;
+ (id)URLStringWithType:(id)arg1 name:(id)arg2;
+ (unsigned long long)requiredScannerState;
@property(retain) NSDictionary *descriptionData; // @synthesize descriptionData=_descriptionData;
@property(retain) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property BOOL isCheckingForNewConnectionMethods; // @synthesize isCheckingForNewConnectionMethods=_isCheckingForNewConnectionMethods;
@property BOOL connectionMethodHasChanged; // @synthesize connectionMethodHasChanged=_connectionMethodHasChanged;
@property(readonly) NSString *fasterInterfaceRecommendation; // @synthesize fasterInterfaceRecommendation=_fasterInterfaceRecommendation;
@property unsigned long long availableConnectionMethods; // @synthesize availableConnectionMethods=_availableConnectionMethods;
@property unsigned long long remoteConnectionMethod; // @synthesize remoteConnectionMethod=_remoteConnectionMethod;
@property unsigned long long localConnectionMethod; // @synthesize localConnectionMethod=_localConnectionMethod;
@property unsigned long long effectiveConnectionMethod; // @synthesize effectiveConnectionMethod=_effectiveConnectionMethod;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain) NSString *remoteOSVersion; // @synthesize remoteOSVersion=_remoteOSVersion;
@property unsigned long long remoteCapabilities; // @synthesize remoteCapabilities=_remoteCapabilities;
@property(retain) SMMacRemoteSystem *slingshot; // @synthesize slingshot=_slingshot;
@property BOOL determiningFastestConnection; // @synthesize determiningFastestConnection=_determiningFastestConnection;
@property(retain) NSObject<OS_dispatch_queue> *atomicConnectionQueue; // @synthesize atomicConnectionQueue=_atomicConnectionQueue;
@property(retain) NSObject<OS_dispatch_semaphore> *waitForCallbackSemaphore; // @synthesize waitForCallbackSemaphore=_waitForCallbackSemaphore;
@property(retain) ALSession *session; // @synthesize session=_session;
@property BOOL connecting; // @synthesize connecting=_connecting;
@property BOOL connectOK; // @synthesize connectOK=_connectOK;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property BOOL connected; // @synthesize connected;
@property(retain) NSURL *url; // @synthesize url;
@property(retain) SMSlingShotFS *slingshotFS; // @synthesize slingshotFS;
- (void).cxx_destruct;
@property(readonly) NSOrderedSet *fasterInterfaceRecommendations;
@property(readonly) NSOrderedSet *connectionFamilies;
@property(readonly) unsigned long long commonCapabilities;
- (id)pathToFile:(id)arg1 error:(id *)arg2;
- (BOOL)shouldAcceptPeerCertificates:(id)arg1;
- (id)localCertificates;
- (void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3;
- (void)sessionInterrupted:(id)arg1 didReplaceActiveConnection:(BOOL)arg2;
- (void)session:(id)arg1 streamClosing:(id)arg2;
- (void)session:(id)arg1 newIncomingStream:(id)arg2;
- (void)sessionIsActive:(id)arg1;
- (void)sessionHasFasterConnectionAvailable:(id)arg1;
- (void)sessionDeterminingFastestConnection:(id)arg1;
- (void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2;
- (void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3;
- (void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2;
- (void)session:(id)arg1 peerDisappeared:(id)arg2;
- (void)session:(id)arg1 discoveredPeerNamed:(id)arg2;
- (BOOL)isMounted;
- (void)mount;
- (void)mountSync;
- (unsigned long long)alInterfaceToSMInterface:(int)arg1;
- (void)_observeChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_connectSession;
- (void)evaluateServerType;
- (id)pathAnalysis;
- (id)statusDelegate;
@property(readonly) __weak NSNumber *passcode;
- (id)volumeIcon;
- (id)volumeName;
- (id)productVersion;
- (id)systemVersion;
- (id)accessibilityDescription;
- (BOOL)isInternal;
- (BOOL)isMountableByUser;
- (BOOL)isNetworkSystem;
- (unsigned long long)systemType;
- (id)displayState;
- (id)extendedDescription;
- (id)systemName;
- (id)description;
- (void)dealloc;
- (id)initWithSession:(id)arg1 name:(id)arg2 txtRecord:(id)arg3;

// Remaining properties
@property(retain) NSString *path;

@end

