//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GameControllerDaemonListener.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface GCControllerManager : NSObject <GameControllerDaemonListener>
{
    NSXPCConnection *_connection;
    id <GameControllerDaemon> _remote;
    struct __IOHIDManager *_hidManager;
    NSMutableDictionary *_controllersByUDID;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    struct IONotificationPort *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    CDUnknownBlockType _logger;
    BOOL _idleTimerNeedsReset;
    NSTimer *_idleWatchTimer;
    CDUnknownBlockType _requestConnectedHostsCallback;
}

@property(nonatomic) BOOL idleTimerNeedsReset; // @synthesize idleTimerNeedsReset=_idleTimerNeedsReset;
@property(retain, nonatomic) id <GameControllerDaemon> remote; // @synthesize remote=_remote;
@property(copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(nonatomic) struct __IOHIDManager *hidManager; // @synthesize hidManager=_hidManager;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)open;
- (id)controllers;
- (void)removeController:(id)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setArrayValue:(float *)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)addController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (void)requestConnectedHostsWithHandler:(CDUnknownBlockType)arg1;
- (void)startIdleWatchTimer;
- (void)updateIdleTimer:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

