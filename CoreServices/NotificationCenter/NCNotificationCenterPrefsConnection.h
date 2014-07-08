//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCConnection, NSXPCListener;

@interface NCNotificationCenterPrefsConnection : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    NSXPCConnection *_connection;
    id <NCWidgetPrefServerInterface> _todayPrefsDelegate;
}

+ (id)sharedConnection;
@property __weak id <NCWidgetPrefServerInterface> todayPrefsDelegate; // @synthesize todayPrefsDelegate=_todayPrefsDelegate;
- (void).cxx_destruct;
- (void)notifyOfChange;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_disconnected;
@property(readonly) id <NCWidgetsPrefClientInterface> todayPrefClient;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

