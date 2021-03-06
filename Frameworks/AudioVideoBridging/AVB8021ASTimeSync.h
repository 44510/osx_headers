//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVBInterface, NSArray, NSMutableArray, NSString;

@interface AVB8021ASTimeSync : NSObject
{
    unsigned int _service;
    unsigned int _connection;
    unsigned long long lastGrandmasterID;
    BOOL lastASCapable;
    struct IONotificationPort *notificationPort;
    struct dispatch_queue_s *notificationsQueue;
    unsigned int notification;
    NSMutableArray *clients;
    AVBInterface *interface;
    NSString *_interfaceName;
}

+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
+ (unsigned long long)_mach_absolute_time;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property AVBInterface *interface; // @synthesize interface;
- (void)dealloc;
- (void)finalize;
- (BOOL)setClockPriority2:(unsigned char)arg1;
- (BOOL)setClockAccuracy:(unsigned char)arg1;
- (BOOL)setClockClass:(unsigned char)arg1;
- (BOOL)setClockPriority1:(unsigned char)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
@property(readonly) BOOL isASCapable;
@property(readonly) unsigned int propagationDelay; // @dynamic propagationDelay;
@property(readonly) unsigned long long currentGrandmasterID; // @dynamic currentGrandmasterID;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1 withFlags:(unsigned int *)arg2;
- (BOOL)sendSignalToTargetClockIdentity:(unsigned long long)arg1 port:(unsigned short)arg2 linkDelayInterval:(BOOL)arg3 timeSyncInterval:(BOOL)arg4 announceInterval:(BOOL)arg5;
- (void)registryPropertyChanged;
@property(readonly) unsigned short remotePortNumber; // @dynamic remotePortNumber;
@property(readonly) unsigned long long remoteClockIdentity; // @dynamic remoteClockIdentity;
@property(readonly) unsigned long long clockIdentity;
@property(readonly, copy) NSArray *asPath;
@property(readonly) long long clockLockState; // @dynamic clockLockState;
@property(readonly, getter=isClockFreeRunning) BOOL freeRunning; // @dynamic freeRunning;
@property(readonly, getter=isClockMaster) BOOL clockMaster; // @dynamic clockMaster;
- (BOOL)convertFromDomainTime:(unsigned long long *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)arg1 toDomainTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)commonInit;

@end

