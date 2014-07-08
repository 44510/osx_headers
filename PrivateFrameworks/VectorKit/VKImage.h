//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject
{
    struct CGImage *_imageRef;
    NSData *_data;
    NSString *_name;
    struct CGSize _size;
    double _scale;
    BOOL _usedAsTextureAndImage;
    struct Texture2D *_gglTexture;
    VKResourceManager *_resourceManager;
}

- (id).cxx_construct;
- (double)scale;
- (struct CGSize)size;
- (struct CGImage *)image;
- (struct Texture2D *)gglTexture;
- (void)dealloc;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 usedAsTextureAndImage:(BOOL)arg3;

@end

