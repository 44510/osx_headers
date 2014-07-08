//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface IPLargeMovementMouseWatcher : NSObject
{
    NSTimer *_heartbeatTimer;
    BOOL _paused;
    struct CGPoint _lastMotionPoint;
    double _distance;
    BOOL _largeMovementDetected;
    id <IPLargeMovementMouseWatcherDelegate> _delegate;
    double _timeBetweenHeartbeats;
    double _largeMovementDistance;
}

@property(readonly, nonatomic) double distanceForHeartbeat; // @synthesize distanceForHeartbeat=_distance;
@property(nonatomic) double largeMovementDistance; // @synthesize largeMovementDistance=_largeMovementDistance;
@property(nonatomic) double timeBetweenHeartbeats; // @synthesize timeBetweenHeartbeats=_timeBetweenHeartbeats;
@property(nonatomic) id <IPLargeMovementMouseWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void)unpause;
- (void)pause;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)checkForLargeMovement;
- (BOOL)hasLargeMovementOccurred;
- (void)timerFired:(id)arg1;
- (void)reset;
- (void)_resetDistance;
- (void)dealloc;

@end

