//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSTimer;

@interface IPInvocationQueue : NSObject
{
    struct vector<IQEntry, std::allocator<IQEntry>> *_processQueue;
    int _busyThreads;
    BOOL _started;
    BOOL _cancelled;
    NSTimer *_timer;
    struct vector<unsigned long, std::allocator<unsigned long>> *_active;
    NSCondition *_processLock;
}

+ (int)numProcessors;
- (void)_processThread;
- (BOOL)_processOne;
- (unsigned long long)queueCount:(unsigned long long *)arg1;
- (BOOL)unqueueActionWithKey:(unsigned long long)arg1;
- (BOOL)queueHasActionWithKey:(unsigned long long)arg1 active:(char *)arg2 moveToHead:(BOOL)arg3;
- (void)emptyQueue;
- (void)queueAction:(id)arg1 key:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 returnsObject:(BOOL)arg5 insertAtHead:(BOOL)arg6;
- (void)stop;
- (void)startUsingProcessorCountThreads;
- (void)startUsingOneThread;
- (void)startUsingTimer;
- (void)dealloc;
- (id)init;

@end

