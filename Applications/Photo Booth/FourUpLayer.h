//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QCCompositionLayer.h"

@class CALayer, NSArray;

@interface FourUpLayer : QCCompositionLayer
{
    NSArray *_layers;
    CALayer *_bgLayer;
    CALayer *_shadowLayer;
    BOOL _needsReset;
}

+ (BOOL)implicitParameterAnimations;
- (void).cxx_destruct;
@property(readonly) double patchTimeOutput;
@property(readonly) BOOL zoomedInOutput;
@property(readonly) long long selectedIndexOutput;
@property long long index;
@property long long zoomedIn;
@property BOOL animationBypass;
- (void)setImage:(id)arg1 forIndex:(long long)arg2;
- (void)onMouseUp:(id)arg1;
- (void)onMouseDown:(id)arg1;
- (id)init;
- (id)_imageLayerWithName:(id)arg1;
- (void)setNeedsReset;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;

@end

