//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, PKInstallRequest;

@interface PKInstallClient : NSObject
{
    PKInstallRequest *_installRequest;
    id _delegate;
    BOOL _delegateWantsUpdates;
    id _conn;
    id _installToken;
    NSTimer *_statusTimer;
    double _lastProgress;
    BOOL _isRegistering;
}

+ (id)_connectToDaemonForAuthLevel:(int)arg1 privileged:(BOOL)arg2 recursiveInstall:(BOOL)arg3 forInstance:(id)arg4;
+ (BOOL)isCurrentlyStagedInstallRequest:(id)arg1 purgeableSize:(id *)arg2;
+ (double)estimatedTimeForInstallRequest:(id)arg1;
+ (void)_modifyConnectionsForRegisteredAuthorizations:(id)arg1;
+ (void)unregisterAuthorizations;
+ (BOOL)registerAuthorization:(struct AuthorizationOpaqueRef *)arg1;
+ (void)initialize;
+ (void)purgeSandboxesOnVolume:(id)arg1 untilFreeSpaceAvailable:(unsigned long long)arg2;
+ (unsigned long long)estimateOfPurgeableSpaceForSandboxesOnVolume:(id)arg1;
- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)_installDaemonDidEndInstallWithError:(id)arg1 registrationPaths:(id)arg2;
- (id)_localPackageForRemoteSpecifier:(id)arg1;
- (void)_finishInstallClientOnMainThreadWithError:(id)arg1;
- (void)_statusTimerHasFired:(id)arg1;
- (void)_scheduleStatusTimerOnCurrentThread;
- (id)_installStatusByConnectingToDaemon;
- (void)_installDaemonDidBeginInstall_OnMainThread;
- (id)displayNames;
- (id)request;
- (void)dealloc;
- (id)_initWithRequest:(id)arg1 options:(unsigned long long)arg2 ignoringBlockingClients:(BOOL)arg3 delegate:(id)arg4 error:(id *)arg5;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)initForCurrentCommitWithDelegate:(id)arg1 ignoringBlockingClients:(BOOL)arg2 error:(id *)arg3;
- (id)initWithRequest:(id)arg1 inUserContext:(BOOL)arg2 holdingBoostDuringInstall:(BOOL)arg3 delegate:(id)arg4 error:(id *)arg5;
- (id)initWithRequest:(id)arg1 inUserContext:(BOOL)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 error:(id *)arg3;

@end

