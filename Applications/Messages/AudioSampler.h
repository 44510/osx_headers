//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FZVideoConferenceController, NSMutableDictionary, NSMutableSet, NSTimer;

@interface AudioSampler : NSObject
{
    NSMutableSet *_localObservers;
    BOOL _micIrisClosed;
    NSMutableDictionary *_remoteObservers;
    NSTimer *_timer;
    FZVideoConferenceController *_vcc;
}

+ (id)sharedSampler;
- (void)removeRemoteObserver:(id)arg1;
- (void)removeRemoteObserverForUserID:(id)arg1;
- (void)_clearRemoteObserversIfPossible;
- (void)addRemoteObserver:(id)arg1 forUserID:(id)arg2;
- (void)removeLocalObserver:(id)arg1;
- (void)addLocalObserver:(id)arg1;
- (void)_handleMicChangeNotification:(id)arg1;
- (void)_stopTimerIfPossible;
- (void)_startTimerIfNecessary;
- (void)_broadcastLevel;
- (void)dealloc;
- (id)init;

@end

