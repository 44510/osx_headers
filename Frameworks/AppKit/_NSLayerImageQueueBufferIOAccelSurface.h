//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSLayerImageQueueBuffer.h>

__attribute__((visibility("hidden")))
@interface _NSLayerImageQueueBufferIOAccelSurface : NSLayerImageQueueBuffer
{
    unsigned int _sid;
    unsigned int _accelerator;
    unsigned int _width;
    unsigned int _height;
    unsigned int _opaque:1;
    unsigned int _flipped:1;
    struct CGColorSpace *_colorspace;
}

+ (int)bufferType;
- (unsigned long long)registerBufferWithCAImageQueue:(struct _CAImageQueue *)arg1;
- (void)dealloc;
- (id)initWithIOAccelSurfaceID:(unsigned long long)arg1 accelerator:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 opaque:(BOOL)arg5 flipped:(BOOL)arg6 colorspace:(struct CGColorSpace *)arg7;

@end

