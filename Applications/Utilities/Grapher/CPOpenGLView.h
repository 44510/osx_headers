//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOpenGLView.h"

@class NSRecursiveLock;

@interface CPOpenGLView : NSOpenGLView
{
    id mDelegate;
    NSRecursiveLock *mContentLock;
}

- (id)menuForEvent:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (id)snapshot;
- (struct CGSize)pixelSize;
- (BOOL)isOpaque;
- (void)readPixels:(char *)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)glDrawBackgroundWithDepth:(double)arg1 width:(double)arg2 height:(double)arg3;
- (void)glDrawInView:(id)arg1;
- (void)reshape;
- (void)reshapeView:(id)arg1;
- (void)dealloc;
- (BOOL)initOpenGLView:(id)arg1;
- (id)createPixelFormatWithView:(id)arg1 colorBits:(long long)arg2 depthBits:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 colorBits:(long long)arg2 depthBits:(long long)arg3;

@end

