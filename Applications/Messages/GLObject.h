//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOpenGLContext;

@interface GLObject : NSObject
{
    NSOpenGLContext *_context;
    struct _CGLContextObject *cgl_ctx;
}

- (void)throwOnGLError:(id)arg1;
- (void)throwOnGLError:(const char *)arg1:(int)arg2;
- (id)context;
- (void)dealloc;
- (id)initWithOpenGLContext:(id)arg1;

@end

