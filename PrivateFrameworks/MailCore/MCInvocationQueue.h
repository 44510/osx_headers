//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@class NSPort;

@interface MCInvocationQueue : NSOperationQueue
{
    id _runLoopCancelPortOnceLock;
    NSPort *_runLoopCancelPort;
}

+ (BOOL)didCancelAllMonitoredItems;
+ (void)cancelAllMonitoredItems;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_newOperationWithInvocation:(id)arg1;
- (void)runInvocationOnQueueSynchronously:(id)arg1;
- (void)addInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithMaxConcurrentOperationCount:(long long)arg1;
- (id)init;

@end

