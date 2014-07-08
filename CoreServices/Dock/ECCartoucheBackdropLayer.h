//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECBackdropLayerProtocol.h"

@class ECMaterialLayer, NSString, _ECCartoucheMaskLayer;

@interface ECCartoucheBackdropLayer : CALayer <ECBackdropLayerProtocol>
{
    ECMaterialLayer *_materialLayer;
    _ECCartoucheMaskLayer *_containerMask;
    CALayer *_shadows;
    CALayer *_primaryShadow;
    _ECCartoucheMaskLayer *_primaryShadowShadow;
    _ECCartoucheMaskLayer *_primaryShadowMask;
    CALayer *_rimShadow;
    _ECCartoucheMaskLayer *_rimShadowShadow;
    _ECCartoucheMaskLayer *_rimShadowMask;
    id _cartoucheImage;
    struct CGSize _cartouchSize;
    unsigned char _cartoucheSide;
    float _radius;
    double _minHeight;
    double _edgeInset;
    float _scaleFactor;
    double _center;
    CALayer *_contentLayer;
}

@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) double center; // @synthesize center=_center;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
- (void).cxx_destruct;
- (void)_initCartouche:(unsigned char)arg1 side:(unsigned char)arg2 scaleFactor:(float)arg3;
- (void)setMaterial:(unsigned long long)arg1;
- (void)layout;
- (id)initWithCartoucheSize:(unsigned char)arg1 side:(unsigned char)arg2 radius:(float)arg3 material:(unsigned long long)arg4 rimStyle:(unsigned char)arg5 scaleFactor:(float)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

