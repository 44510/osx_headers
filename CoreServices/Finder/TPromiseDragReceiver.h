//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCoalescingNodeObserverProtocol.h"

@class NSString;

@interface TPromiseDragReceiver : NSObject <TCoalescingNodeObserverProtocol>
{
    function_966f7bb5 _promiseDragNodeAddedCallback;
    function_40a2a9af _promiseDragCompletionCallback;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    struct TFENode _dropTargetNode;
    struct TStringVector _rawNamesOfPendingPromisedNodes;
    struct TPromiseDragReceiverThread *_receiverThread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodesAdded:(const struct TFENodeVector *)arg1 toObservedNode:(const struct TFENode *)arg2;
- (void)openSyncCompleted:(const struct TFENode *)arg1;
- (void)waitForPromisedNodesAsync;
- (void)receivePromiseDrag:(struct TDropOperation *)arg1 nodeAddedCallback:(CDUnknownBlockType)arg2 completionCallback:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithDropTargetNode:(const struct TFENode *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

