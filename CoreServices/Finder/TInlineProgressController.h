//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TInlineProgressController : NSObject
{
    struct unordered_map<TFENode, TProgressState, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TProgressState>>> _nodesProgress;
    struct TMutex _progressLock;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)nodeProgress:(const struct TFENode *)arg1 state:(unsigned int *)arg2 amount:(unsigned int *)arg3 cancellable:(_Bool *)arg4;
- (id)copyProgressImageForNode:(const struct TFENode *)arg1;
- (struct TString)progressStateForNode:(const struct TFENode *)arg1;
- (_Bool)updateNodeProgressState:(const struct TFENode *)arg1;
- (struct TIconRef)nodeProgressIcon:(const struct TFENode *)arg1;
- (id)nodeProgressState:(const struct TFENode *)arg1;

@end

