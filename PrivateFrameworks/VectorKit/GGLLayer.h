//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAOpenGLLayer.h"

@class NSObject<GGLRenderQueueSource>;

__attribute__((visibility("hidden")))
@interface GGLLayer : CAOpenGLLayer
{
    BOOL _readPixels;
    unsigned int _depthBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    shared_ptr_3f8cd81b _renderer;
    id <GGLLayerDisruptor> _renderDisruptor;
    struct CGSize _backingSize;
    NSObject<GGLRenderQueueSource> *_renderSource;
}

@property(readonly, nonatomic) struct CGSize backingSize; // @synthesize backingSize=_backingSize;
@property id <GGLLayerDisruptor> renderDisruptor; // @synthesize renderDisruptor=_renderDisruptor;
@property NSObject<GGLRenderQueueSource> *renderSource; // @synthesize renderSource=_renderSource;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setReadPixels;
- (void)drawWithTimestamp:(double)arg1;
- (void)_deleteBuffers;
- (void)_detachDepthStencil;
- (void)_attachDepthStencil;
- (void)_createRenderTarget;
- (void)layoutSublayers;
- (void)releaseCGLPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (struct _CGLContextObject *)copyCGLContextForPixelFormat:(struct _CGLPixelFormatObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
@property(readonly) struct GLRenderer *renderer;
- (void)dealloc;
- (id)initWithRenderer:(shared_ptr_3f8cd81b)arg1;

@end

