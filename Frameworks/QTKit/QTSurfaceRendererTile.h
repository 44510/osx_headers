//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QTSurfaceRendererTile : NSObject
{
    struct __CVBuffer *_imageBuffer;
    struct CGColorSpace *_colorSpace;
    struct CGColorSpace *_forcedContentColorSpace;
    struct CGColor *_contentBackgroundColor;
    struct CGRect _contentRect;
    struct CGRect _surfaceRect;
    BOOL _surfaceVisible;
    BOOL _surfaceOpaque;
    unsigned int _connectionID;
    unsigned int _windowID;
    unsigned int _surfaceID;
}

+ (id)softwareTile;
+ (id)acceleratedTileForGraphicsDevice:(id)arg1;
+ (id)tileForGraphicsDevice:(id)arg1;
- (id)pixelBufferAttributes;
- (void)render;
- (void)unbindSurface;
- (void)updateBinding;
- (void)bindSurface;
- (unsigned int)surfaceID;
- (void)display;
- (void)setImageBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)imageBuffer;
- (void)setVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (void)setWindowID:(unsigned int)arg1;
- (unsigned int)windowID;
- (void)setConnectionID:(unsigned int)arg1;
- (unsigned int)connectionID;
- (void)setSurfaceRect:(struct CGRect)arg1;
- (struct CGRect)surfaceRect;
- (void)setContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRect;
- (void)setContentBackgroundColor:(struct CGColor *)arg1;
- (struct CGColor *)contentBackgroundColor;
- (void)setForcedContentColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)forcedContentColorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpace;
- (id)graphicsDevice;
- (id)preferredAttributes;
- (void)removeSurface;
- (void)ensureSurface;
- (void)finalize;
- (void)dealloc;
- (void)invalidate;

@end

