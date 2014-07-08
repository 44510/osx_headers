//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRDisplayWindow.h>

@class CATextLayer, SCRDisplayRotorKnob;

__attribute__((visibility("hidden")))
@interface SCRDisplayRotorWindow : SCRDisplayWindow
{
    SCRDisplayRotorKnob *_rotorKnob;
    CATextLayer *_titleLayer;
    CATextLayer *_stagingTitleLayer;
    BOOL _wasRotorMovementClockwise;
}

+ (id)sharedWindow;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (void)show;
- (void)updateRotorPosition:(BOOL)arg1;
- (void)setRotorItemCount:(long long)arg1;
- (void)resetRotorPosition;
- (void)setTitle:(id)arg1;
- (id)initWithScreenRect:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

