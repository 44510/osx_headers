//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface _NSImageLayerContents : NSObject
{
    NSImage *_image;
    double _scale;
}

- (void *)CA_copyRenderValue;
- (void)dealloc;
- (id)replacementObjectForCoder:(id)arg1;
- (struct CGImage *)_CGImageWithColorSpace:(struct CGColorSpace *)arg1;
- (id)initWithImage:(id)arg1 scaleFactor:(double)arg2;

@end

