//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOpenGLDefaultFramebufferLayer;

@protocol NSOpenGLDefaultFramebufferLayerDelegate <NSObject>

@optional
- (void)drawOpenGLDefaultFramebufferLayer:(NSOpenGLDefaultFramebufferLayer *)arg1 inCGLContext:(struct _CGLContextObject *)arg2;
- (struct _CGLContextObject *)openGLDefaultFramebufferLayerCreateCGLContext:(NSOpenGLDefaultFramebufferLayer *)arg1;
- (struct _CGLPixelFormatObject *)openGLDefaultFramebufferLayerCreateCGLPixelFormat:(NSOpenGLDefaultFramebufferLayer *)arg1;
@end

