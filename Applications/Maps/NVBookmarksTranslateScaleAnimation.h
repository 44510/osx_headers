//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVBookmarksAnimation.h"

__attribute__((visibility("hidden")))
@interface NVBookmarksTranslateScaleAnimation : NVBookmarksAnimation
{
    double _initialScaleFactor;
    double _finalScaleFactor;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) double finalScaleFactor; // @synthesize finalScaleFactor=_finalScaleFactor;
@property(nonatomic) double initialScaleFactor; // @synthesize initialScaleFactor=_initialScaleFactor;
- (void)setCurrentProgress:(float)arg1;
- (struct CGPoint)centerPointForProgress:(double)arg1;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;

@end

