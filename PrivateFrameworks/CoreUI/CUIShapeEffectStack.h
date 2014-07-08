//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIShapeEffectStack : NSObject
{
    float shapeOpacity;
    float outputOpacity;
    _Bool hasColorOverlay;
    struct {
        unsigned int blendMode;
        float fillRed;
        float fillGreen;
        float fillBlue;
        float fillOpacity;
    } colorOverlay;
    _Bool hasInnerGradient;
    CDStruct_429f1ac1 innerGradient;
    _Bool hasInnerGlow;
    struct {
        unsigned int blendMode;
        float glowRed;
        float glowGreen;
        float glowBlue;
        float glowOpacity;
        float glowSize;
    } innerGlow;
    _Bool hasInnerShadow;
    struct {
        unsigned int blendMode;
        float shadowRed;
        float shadowGreen;
        float shadowBlue;
        float shadowBlurSize;
        float shadowOpacity;
        float shadowOffsetAmount;
        float shadowOffsetAngle;
        struct CGPoint shadowOffset;
    } insideShadow;
    _Bool hasOuterGlow;
    struct {
        float glowRed;
        float glowGreen;
        float glowBlue;
        float glowOpacity;
        float glowSize;
        float glowSpread;
    } outerGlow;
    _Bool hasEngraveShadow;
    CDStruct_1b570c92 engraveShadow;
    _Bool hasExtraShadow;
    CDStruct_1b570c92 extraShadow;
    _Bool hasBevelEmboss;
    struct {
        float embossSize;
        float embossSoften;
        float embossAngle;
        float embossAltitude;
        float highlightRed;
        float highlightGreen;
        float highlightBlue;
        float highlightOpacity;
        float shadowRed;
        float shadowGreen;
        float shadowBlue;
        float shadowOpacity;
    } emboss;
    float scalefactor;
    int renderStrategy;
}

+ (id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(struct CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(BOOL)arg21 hasOutsideShadowBlur:(BOOL)arg22;
+ (id)bevelEmbossFrom:(id)arg1 withSize:(unsigned int)arg2 soften:(unsigned int)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13;
+ (id)outerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 size:(unsigned int)arg3 spread:(unsigned int)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8;
+ (id)outerGlowFrom:(id)arg1 withSize:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3;
+ (id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (id)gradientWithParameters:(CDStruct_429f1ac1 *)arg1 inRect:(struct CGRect)arg2;
+ (id)rectangle:(struct CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)blur:(id)arg1 radius:(float)arg2;
+ (id)invert:(id)arg1;
+ (id)image:(id)arg1 withOpacity:(float)arg2;
+ (id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned int)arg3;
+ (id)composite:(id)arg1 atop:(id)arg2;
+ (id)composite:(id)arg1 outOf:(id)arg2;
+ (id)composite:(id)arg1 into:(id)arg2;
+ (id)composite:(id)arg1 over:(id)arg2;
+ (id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3;
+ (id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(struct CGPoint)arg3;
+ (id)adjustOpacity:(id)arg1 by:(float)arg2;
+ (id)offset:(id)arg1 by:(struct CGPoint)arg2;
+ (id)sharedCIContext;
+ (id)preferredCIContextOptions;
- (id)processedImageFromShapePath:(struct CGPath *)arg1 inRect:(struct CGRect)arg2;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1;
- (CDStruct_3c058996)effectInsetsWithScale:(double)arg1;
- (struct CGRect)effectPaddingWithScale:(double)arg1;
- (id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1;
- (id)standardEffectCompositeWithShapeImage:(id)arg1;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1 tintEffectColors:(BOOL)arg2;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1;
- (void)scaleEffectParametersBy:(double)arg1;
- (id)imageWithBevelEmbossOfImage:(id)arg1;
- (id)imageWithExtraShadowOfImage:(id)arg1;
- (id)imageWithEngraveShadowOfImage:(id)arg1;
- (id)imageWithOuterGlowOfImage:(id)arg1;
- (id)imageWithInteriorGradientFillOfImage:(id)arg1;
- (id)imageWithColorOverlayOfImage:(id)arg1;
- (id)imageWithAdjustedOutputOpacityOfImage:(id)arg1;
- (id)imageWithAdjustedShapeOpacityOfImage:(id)arg1;
- (id)imageWithInnerShadowOfImage:(id)arg1;
- (id)imageWithInnerGlowOfImage:(id)arg1;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2;
- (id)effectPreset;
- (id)initWithEffectPreset:(id)arg1;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg1;
- (void)_precompositeColorOverlayInnerGradient;
- (void)_addBevelEmbossFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addExtraShadowFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addEngraveShadowFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addOuterGlowFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addInnerShadowFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addInnerGlowFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setInteriorGradientFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setColorFillFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;

@end

