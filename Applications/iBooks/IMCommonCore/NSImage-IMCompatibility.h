//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (IMCompatibility)
+ (id)im_imageWithCGImages:(id)arg1 size:(struct CGSize)arg2;
+ (struct CGContext *)im_currentContext;
+ (id)im_imageWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 drawingHandler:(CDUnknownBlockType)arg3;
- (id)im_CGImages;
- (id)im_imageWithMaxBounds:(struct CGSize)arg1;
- (id)im_imageWithPixelSize:(struct CGSize)arg1;
- (id)im_imageWithSize:(struct CGSize)arg1 options:(int)arg2;
- (id)im_imageWithSize:(struct CGSize)arg1 preserveAspectRatio:(BOOL)arg2;
- (id)im_imageWithSize:(struct CGSize)arg1;
- (id)im_initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(int)arg3;
- (struct CGImage *)im_CGImage;
- (double)im_scale;
@end

