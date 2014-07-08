//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEIPC, NSUUID;

@interface NEIPCHandle : NSObject
{
    NEIPC *_primary_ipc;
    NEIPC *_secondary_ipc;
    NSUUID *_config_id;
    struct __CFArray *_configurations;
    struct ipc_queue *_send_queue;
}

+ (BOOL)sendMessageWithType:(unsigned int)arg1 data:(struct __CFData *)arg2 forConfiguration:(struct _VPNConfigurationPrivate *)arg3;
+ (void)deregisterConfiguration:(struct _VPNConfigurationPrivate *)arg1;
@property struct ipc_queue *send_queue; // @synthesize send_queue=_send_queue;
@property struct __CFArray *configurations; // @synthesize configurations=_configurations;
@property NSUUID *config_id; // @synthesize config_id=_config_id;
@property NEIPC *secondary_ipc; // @synthesize secondary_ipc=_secondary_ipc;
@property NEIPC *primary_ipc; // @synthesize primary_ipc=_primary_ipc;
- (id)createIPCFromSocket:(int)arg1;
- (BOOL)sendMessage:(struct __CFData *)arg1 withType:(unsigned int)arg2;
- (void)addConfiguration:(struct _VPNConfigurationPrivate *)arg1;
- (void)removeConfiguration:(struct _VPNConfigurationPrivate *)arg1;
- (long long)getIndexOfConfiguration:(struct _VPNConfigurationPrivate *)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(struct _VPNConfigurationPrivate *)arg1;

@end

