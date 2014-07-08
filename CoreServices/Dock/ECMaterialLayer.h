//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CABackdropLayer, NSString;

@interface ECMaterialLayer : CALayer
{
    CABackdropLayer *_backdropLayer;
    CALayer *_tintLayer;
    NSString *_groupName;
    _Bool _reduceTransparency;
    unsigned long long _material;
}

@property(nonatomic) _Bool reduceTransparency; // @synthesize reduceTransparency=_reduceTransparency;
@property(nonatomic) unsigned long long material; // @synthesize material=_material;
- (void).cxx_destruct;
- (void)_buildLayerTree;
- (void)setBounds:(struct CGRect)arg1;
@property(nonatomic) float blurRadius;
- (id)initWithMaterial:(unsigned long long)arg1 groupName:(id)arg2 reduceTransparency:(_Bool)arg3;

@end

