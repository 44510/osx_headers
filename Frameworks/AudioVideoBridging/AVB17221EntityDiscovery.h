//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVBInterface, NSMutableDictionary, NSString;

@interface AVB17221EntityDiscovery : NSObject
{
    unsigned int connection;
    struct IONotificationPort *notificationPort;
    struct dispatch_queue_s *callbackQueue;
    unsigned int localArrivalIterator;
    unsigned int localDepartureIterator;
    unsigned int remoteArrivalIterator;
    unsigned int remoteDepartureIterator;
    NSMutableDictionary *localEntities;
    NSMutableDictionary *remoteEntities;
    unsigned int notification;
    NSString *interfaceName;
    AVBInterface *interface;
    id <AVB17221EntityDiscoveryDelegate> discoveryDelegate;
}

+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;
@property id <AVB17221EntityDiscoveryDelegate> discoveryDelegate; // @synthesize discoveryDelegate;
@property AVBInterface *interface; // @synthesize interface;
@property(copy) NSString *interfaceName; // @synthesize interfaceName;
- (void)dealloc;
- (void)finalize;
- (void)cleanupIOKit;
- (void)remoteEntityDepartedWithGUID:(unsigned long long)arg1 service:(unsigned int)arg2;
- (void)remoteEntityArrivedWithGUID:(unsigned long long)arg1 service:(unsigned int)arg2;
- (void)localEntityDepartedWithGUID:(unsigned long long)arg1 service:(unsigned int)arg2;
- (void)localEntityArrivedWithGUID:(unsigned long long)arg1 service:(unsigned int)arg2;
- (BOOL)changeEntityWithEntityID:(unsigned long long)arg1 toNewGPTPGrandmasterID:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)changeEntityWithGUID:(unsigned long long)arg1 toNewASGrandmasterID:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)removeLocalEntity:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)addLocalEntity:(id)arg1 error:(id *)arg2;
- (BOOL)discoverEntity:(unsigned long long)arg1;
- (BOOL)discoverEntities;
- (void)primeIterators;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)commonInit;
- (void)entityDiscoveryTerminated;

@end

