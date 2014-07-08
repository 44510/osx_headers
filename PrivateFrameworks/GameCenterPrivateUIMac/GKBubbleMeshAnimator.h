//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSTimer;

@interface GKBubbleMeshAnimator : NSObject
{
    NSMutableSet *_animatingViews;
    NSTimer *_timer;
    double _lastUpdateTime;
}

+ (id)sharedAnimator;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *animatingViews; // @synthesize animatingViews=_animatingViews;
- (void)update:(id)arg1;
- (void)removeAnimatingBubbleView:(id)arg1;
- (void)addAnimatingBubbleView:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (id)init;

@end

