//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSMutableArray, NSTimer;

@interface LCAAnimatedLanguagesView : NSView
{
    NSMutableArray *_views;
    NSArray *_strings;
    NSTimer *_timer;
    BOOL animating;
}

@property(copy, nonatomic) NSArray *strings; // @synthesize strings=_strings;
- (void)dealloc;
- (void)endAnimation:(BOOL)arg1;
- (void)beginAnimation;
- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_update:(id)arg1;
- (void)_collisionDetection;
- (void)_fadeInView:(id)arg1;
- (void)_animateView:(id)arg1 beginning:(BOOL)arg2;
- (id)textView;
- (id)_pickString;
- (void)_getCrowdingFactors:(double [9])arg1;

@end

