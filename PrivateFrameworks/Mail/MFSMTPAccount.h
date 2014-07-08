//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFDeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
    long long _lastTimerSetTime;
}

+ (id)accountTypeString;
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)releaseAllConnections;
- (void)_disconnect:(id)arg1;
- (void)_connectionExpired:(id)arg1;
- (void)_setTimer;
- (void)checkInConnection:(id)arg1;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)googleClientToken;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void *)keychainProtocol;
- (id)saslProfileName;
- (long long)defaultPortNumber;
- (id)standardSSLPorts;
- (id)standardPorts;
- (Class)delivererClass;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (id)objectSpecifier;

@end

