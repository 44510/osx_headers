//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject
{
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    id <WRMClientDelegate> wrmClientDelegate;
}

@property(readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue;
@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;
- (void)reportMetrics:(CDStruct_dd9362d3 *)arg1;
- (void)stopWRMClient;
- (void)startWRMClient;
@property id <WRMClientDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

