//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALCanvasItem.h"

@class NSImage;

@interface CALCanvasStretchableImage : CALCanvasItem
{
    NSImage *_leftImage;
    NSImage *_rightImage;
    NSImage *_centerImage;
    NSImage *_leftInactiveImage;
    NSImage *_rightInactiveImage;
    NSImage *_centerInactiveImage;
    double _maxHeight;
    double _alpha;
}

- (void).cxx_destruct;
- (struct CGRect)bounds;
- (BOOL)isHitByPoint:(struct CGPoint)arg1;
- (void)drawInOpenGL;
- (void)draw;
- (void)drawShadow;
- (void)setAlpha:(double)arg1;
- (double)alpha;
- (void)setInactiveImages:(id)arg1 center:(id)arg2 right:(id)arg3;
- (void)setImages:(id)arg1 center:(id)arg2 right:(id)arg3;
- (id)initWithTagID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 leftImage:(id)arg4 centerImage:(id)arg5 rightImage:(id)arg6 delegate:(id)arg7 shown:(BOOL)arg8 selectable:(BOOL)arg9 userData:(id)arg10;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 leftImage:(id)arg3 centerImage:(id)arg4 rightImage:(id)arg5;

@end

