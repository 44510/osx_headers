//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnection : NSObject
{
    NSXPCStore *_store;
    NSXPCConnection *_connection;
    struct dispatch_semaphore_s *_semaphore;
}

- (id)sendMessage:(id)arg1 fromContext:(id)arg2 store:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (void)disconnect;
- (id)initForStore:(id)arg1 withOptions:(id)arg2;
- (id)createConnectionWithOptions:(id)arg1;

@end

