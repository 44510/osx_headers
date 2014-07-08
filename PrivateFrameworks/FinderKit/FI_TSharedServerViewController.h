//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNavSharedServerController.h"

#import "TNodeObserverProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TSharedServerViewController : NSNavSharedServerController <TNodeObserverProtocol>
{
    _Bool _waitingToEject;
    struct TNodeObserverCocoaBridge *_nodeObserver;
}

+ (void)initialize;
- (void)screenShareClicked:(id)arg1;
- (void)askToUseODSClicked:(id)arg1;
- (void)connectAsButtonClicked:(id)arg1;
- (void)connectToSharedServerAs;
- (void)setRepresentedObject:(id)arg1;
- (void)updateConnectionState;
- (void)updateConnectionStateAsRemoteDisc;
- (void)updateConnectionStateAsSharedServer;
- (void)updateLayout;
- (void)openSyncCompleted:(const struct TFENode *)arg1;
- (void)openSyncStarted:(const struct TFENode *)arg1;
- (void)nodeDeleted:(const struct TFENode *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodeChanged:(const struct TFENode *)arg1 inObservedNode:(const struct TFENode *)arg2 property:(unsigned int)arg3;
- (void)nodeAdded:(const struct TFENode *)arg1 toObservedNode:(const struct TFENode *)arg2;
- (void)stopObservingNode:(const struct TFENode *)arg1;
- (void)startObservingNode:(const struct TFENode *)arg1;
- (void)setNetworkConnectionState:(unsigned int)arg1;
- (unsigned int)networkConnectionState;
- (struct TFENode)serverNode;
- (void)finalize;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

