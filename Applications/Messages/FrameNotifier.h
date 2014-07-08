//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FPS, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FrameNotifier : NSObject
{
    NSString *_sourceName;
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_notifiers;
    id _lastFrame;
    FPS *_fps;
    id _delegate;
}

+ (id)_backgroundNotificationThread;
+ (void)_backgroundThreadRunner;
+ (void)_setupThread;
+ (id)runLoopModes;
+ (id)frameNotifierForSource:(id)arg1;
+ (BOOL)postFrame:(id)arg1 fromSource:(id)arg2;
+ (BOOL)hasListenersForSource:(id)arg1;
- (id)lastFrame;
- (BOOL)canPostFrame;
- (void)postFrame:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 onThread:(id)arg2;
- (BOOL)hasListeners;
- (id)sourceName;
- (void)dealloc;
- (id)initWithSourceName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)description;

@end

