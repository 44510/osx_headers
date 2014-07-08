//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FrameNotifier, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSThread;

@interface ThreadNotifier : NSObject
{
    NSString *_name;
    NSThread *_thread;
    FrameNotifier *_frameNotifier;
    NSMutableSet *_listeners;
    unsigned int _isPostingFrame:1;
    NSObject<OS_dispatch_queue> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)postFrame:(id)arg1;
- (id)queue;
- (void)removeListener:(id)arg1;
- (BOOL)addListener:(id)arg1;
- (long long)listenerCount;
- (void)dealloc;
- (id)initWithName:(id)arg1 thread:(id)arg2 frameNotifier:(id)arg3;

@end

