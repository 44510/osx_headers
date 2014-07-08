//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitView.h"

@class NSColor, NSDate, NSImage, NSTimer;

@interface OurSplitView : NSSplitView
{
    BOOL mDelegateRespondsToSplitViewDoubleClicked;
    BOOL mDelegateRespondsToSplitViewWillTrackOrResize;
    BOOL mDelegateRespondsToSplitViewDidTrackOrResize;
    double mDividerThickness;
    struct CGRect mDividerRect;
    NSColor *mFillColor;
    int _ourSplitStyle;
    NSImage *_vDimple;
    NSImage *_vBackground;
    NSImage *_hDimple;
    NSImage *_hBackground;
    double _initialLength;
    double _targetLength;
    double _deltaLength;
    NSDate *_startAnimationDate;
    double _totalTime;
    NSTimer *_animationTimer;
}

- (void)setFillColor:(id)arg1;
- (void)setNormalDividerThickness;
- (double)normalDividerThickness;
- (void)setDividerThickness:(double)arg1;
- (double)dividerThicknessForLength:(double)arg1;
- (double)dividerThickness;
- (void)setOurSplitViewStyle:(int)arg1;
- (int)ourSplitStyle;
- (void)_ensureImages;
- (void)_unloadImages;
- (void)_loadImages;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setFirstSubviewLength:(double)arg1;
- (double)firstSubviewLength;
- (void)mouseDown:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)animateToLength:(double)arg1;
- (void)_animationTimerCallback:(id)arg1;
- (void)_stopAnimation;
- (double)animationResizeTime:(double)arg1;
- (double)animationResizeTime_oldWay:(double)arg1;

@end

