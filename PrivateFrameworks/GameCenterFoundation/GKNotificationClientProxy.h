//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKNotificationServerProtocol.h"

@class NSString, NSXPCConnection;

@interface GKNotificationClientProxy : NSObject <GKNotificationServerProtocol>
{
    NSXPCConnection *_connection;
    int _pid;
}

+ (void)sendNotification:(id)arg1 userInfo:(id)arg2;
+ (id)clientForPID:(int)arg1;
+ (id)syncQueue;
+ (id)_clientLookup;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (oneway void)hello:(id)arg1;
- (oneway void)xpcNotify:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)initWithPID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

