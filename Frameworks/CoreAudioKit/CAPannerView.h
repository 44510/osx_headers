//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface CAPannerView : NSView
{
    double mAngle;
    struct CGPoint mCenterPoint;
    double mRadius;
    NSImage *backgroundImage;
    double indicatorWidth;
    NSColor *indicatorColor;
    BOOL mIsEnabled;
    BOOL mIsHighlighted;
}

- (BOOL)isFlipped;
- (void)setAngle:(double)arg1;
- (double)angle;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawKnobValueIndicator;
- (void)setAngleIndicatorColor:(id)arg1;
- (void)setAngleIndicatorWidth:(double)arg1;
- (void)setBackgroundImage:(id)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

