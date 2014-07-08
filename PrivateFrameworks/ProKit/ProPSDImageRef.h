//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ProPSDImageRef : NSObject
{
    NSMutableDictionary *_ivars;
    int _file;
    struct CPSDFile *_psd;
}

+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(struct _PSDImageInfo *)arg2;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int *)arg2 validateLayers:(BOOL)arg3;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int *)arg2;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1;
- (id)_gradientAtAbsoluteIndex:(unsigned int)arg1;
- (id)_fillSampleAtAbsoluteIndex:(unsigned int)arg1;
- (id)_createMaskFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2;
- (id)_createPatternColorFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isZeroSizeImage:(char *)arg3;
- (id)_createImageFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isEmptyImage:(char *)arg3;
- (BOOL)_shouldWorkaround4760782;
- (id)_createImageAtAbsoluteIndex:(unsigned int)arg1 isZeroSizeImage:(char *)arg2;
- (struct CGImage *)_createCGImageAtAbsoluteIndex:(unsigned int)arg1;
- (unsigned int)_blendModeAtAbsluteIndex:(unsigned int)arg1;
- (double)_opacityAtAbsoluteIndex:(unsigned int)arg1;
- (BOOL)_visibilityAtAbsoluteIndex:(unsigned int)arg1;
- (struct CGRect)_boundsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_namesOfSublayers:(id)arg1;
- (id)_nameAtAbsoluteIndex:(unsigned int)arg1;
- (void)_logInvalidAbsoluteIndex:(unsigned int)arg1 psd:(struct CPSDFile *)arg2;
- (id)_generateSublayerInfoAtAbsoluteIndex:(unsigned int)arg1 atRoot:(BOOL)arg2;
- (BOOL)_treatDividerAsLayer;
- (id)_layerRefAtAbsoluteIndex:(unsigned int)arg1;
- (struct CPSDLayerRecord *)_psdLayerRecordAtAbsoluteIndex:(unsigned int)arg1;
- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)arg1;
- (id)_layerInfo;
- (id)gradientAtLayer:(unsigned int)arg1;
- (id)fillSampleAtLayer:(unsigned int)arg1;
- (struct CGSize)size;
- (id)metadataString;
- (id)layerNames;
- (unsigned int)numberOfChannels;
- (unsigned int)numberOfSlices;
- (unsigned int)numberOfLayers;
- (BOOL)hasQuickMask;
- (BOOL)hasTransparency;
- (struct _PSDImageInfo)imageInfo;
- (struct CGColorSpace *)colorSpace;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (BOOL)visibilityAtLayer:(unsigned int)arg1;
- (CDStruct_1ba92a5e)metricsInMask:(id)arg1 forRect:(struct CGRect)arg2;
- (CDStruct_1ba92a5e)metricsInAlphaChannel:(long long)arg1 forRect:(struct CGRect)arg2;
- (struct CGRect)boundsForSlice:(unsigned int)arg1;
- (struct CGRect)boundsAtLayer:(unsigned int)arg1;
- (id)createMaskFromCompositeAlphaChannel:(long long)arg1;
- (id)createCompositeImage;
- (struct CGImage *)createCompositeCGImage;
- (id)createMaskFromSlice:(unsigned int)arg1 AtLayer:(unsigned int)arg2;
- (id)createPatternColorFromSlice:(unsigned int)arg1 AtLayer:(unsigned int)arg2 isZeroSizeImage:(char *)arg3;
- (id)createPatternColorFromSlice:(unsigned int)arg1 AtLayer:(unsigned int)arg2;
- (id)createImageFromSlice:(unsigned int)arg1 AtLayer:(unsigned int)arg2 isEmptyImage:(char *)arg3;
- (id)createImageFromSlice:(unsigned int)arg1 AtLayer:(unsigned int)arg2;
- (id)createImageAtLayer:(unsigned int)arg1 isZeroSizeImage:(char *)arg2;
- (id)createImageAtLayer:(unsigned int)arg1;
- (struct CGImage *)createCGImageAtLayer:(unsigned int)arg1;
- (id)createImageFromRef:(struct CGImage *)arg1;
- (struct CPSDFile *)psdFileForComposite;
- (struct CPSDFile *)psdFile;
- (struct CPSDFile *)_psdFileWithLayers:(BOOL)arg1;
- (id)path;
- (void)finalize;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (BOOL)loadPSDFileWithLayers:(BOOL)arg1;
- (BOOL)openImageFile;

@end

