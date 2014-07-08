//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSpectrum/SPCEffect.h>

@class NSArray, SPCExpression, SPCImageAsset, SPCImageAssetKey;

@interface SPCFillEffect : SPCEffect
{
    NSArray *_propertyDescriptors;
    long long _fillType;
    SPCExpression *_fillColorExpression;
    SPCExpression *_rotationExpression;
    SPCExpression *_gradientExpression;
    SPCExpression *_gradientTypeExpression;
    SPCImageAsset *_fillImageAsset;
    SPCImageAssetKey *_fillImageAssetKey;
    NSArray *_fillEffectProperties;
}

@property(copy) NSArray *fillEffectProperties; // @synthesize fillEffectProperties=_fillEffectProperties;
@property(retain, nonatomic) SPCImageAssetKey *fillImageAssetKey; // @synthesize fillImageAssetKey=_fillImageAssetKey;
@property(retain, nonatomic) SPCImageAsset *fillImageAsset; // @synthesize fillImageAsset=_fillImageAsset;
@property(retain, nonatomic) SPCExpression *gradientTypeExpression; // @synthesize gradientTypeExpression=_gradientTypeExpression;
@property(retain, nonatomic) SPCExpression *gradientExpression; // @synthesize gradientExpression=_gradientExpression;
@property(retain, nonatomic) SPCExpression *rotationExpression; // @synthesize rotationExpression=_rotationExpression;
@property(retain, nonatomic) SPCExpression *fillColorExpression; // @synthesize fillColorExpression=_fillColorExpression;
@property(nonatomic) long long fillType; // @synthesize fillType=_fillType;
- (void)_postChangeNotification;
- (void)_gradientDidChange;
- (id)propertyDescriptors;
- (id)recursiveDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFillType:(long long)arg1;

@end

