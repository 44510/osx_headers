//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOpenGLView.h"

@class CIContext, NSImage, NSTimer, OpenGLLayerModel, VideoRecordingAdapter;

@interface OpenGLLayerView : NSOpenGLView
{
    CIContext *_ciContext;
    struct _CGLPixelFormatObject *_cglPixelFormat;
    OpenGLLayerModel *_layerModel;
    NSImage *_offscreenImage;
    float _bgRed;
    float _bgGreen;
    float _bgBlue;
    unsigned int _vramTextureId;
    VideoRecordingAdapter *_videoRecordingAdapter;
    NSTimer *_redrawTimer;
    BOOL _ignoreRedrawTimer;
}

- (void)layer:(id)arg1 videoSizeChangedFrom:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (void)setRecordingAdapter:(id)arg1;
- (void)renderIntoContext:(id)arg1 width:(int)arg2 height:(int)arg3;
- (BOOL)saveVideoSnapshotToFile:(id)arg1;
- (struct CGSize)adjustWindow:(id)arg1 proposedSize:(struct CGSize)arg2;
- (struct CGSize)adjustWindow:(id)arg1 proposedSize:(struct CGSize)arg2 aspectRatio:(double)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundWhite:(float)arg1;
- (void)setBackgroundRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)update;
- (void)reshape;
- (void)setLayerModelNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (void)_redrawTimerFired:(id)arg1;
- (void)setIgnoresRedrawTimer:(BOOL)arg1;
- (BOOL)ignoresRedrawTimer;
- (void)removeFromSuperview;
- (void)_recompositeLayers;
- (id)bitmapImageFromSurface;
- (id)bitmapImageFromSurfaceInRect:(struct CGRect)arg1;
- (void)draw;
- (BOOL)isOpaque;
- (void)_setAutoscalesBoundsToPixelUnits:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidMoveToWindow;
- (void)handleVirtualScreenChangedNotificiation:(int)arg1;
- (void)_updateVirtualScreen;
- (id)layerModel;
- (void)setLayerModel:(id)arg1;
@property(readonly) CIContext *ciContext;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowChangedScreen:(id)arg1;
- (void)recreateCIContextFromWindow:(id)arg1;
- (void)_stopRedrawTimer;
- (void)_startRedrawTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 masterContext:(id)arg2;

@end

