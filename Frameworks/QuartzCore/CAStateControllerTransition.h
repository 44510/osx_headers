//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, CAStateController, CAStateTransition, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerTransition : NSObject
{
    CAStateController *_controller;
    CALayer *_layer;
    CAStateTransition *_transition;
    double _beginTime;
    double _duration;
    float _speed;
    NSString *_masterKey;
    NSMutableArray *_animations;
}

@property(readonly, nonatomic) float speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) CAStateTransition *transition; // @synthesize transition=_transition;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)invalidate;
- (void)removeAnimationFromLayer:(id)arg1 forKey:(id)arg2;
- (void)addAnimation:(id)arg1;
- (id)init;

@end

