//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry
{
    id _reserved;
    unsigned int _isPresentationInstance:1;
    float _reflectivity;
    float _reflectionFalloffStart;
    float _reflectionFalloffEnd;
    float _reflectionResolutionScaleFactor;
    unsigned long long _reflectionSampleCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
+ (id)floor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setReflectionFallOffEnd:(double)arg1;
- (void)setReflectionFallOffStart:(double)arg1;
- (double)reflectionFallOffEnd;
- (double)reflectionFallOffStart;
@property(nonatomic) double reflectivity;
- (void)setReflectionSampleCount:(unsigned long long)arg1;
- (unsigned long long)reflectionSampleCount;
@property(nonatomic) double reflectionResolutionScaleFactor;
@property(nonatomic) double reflectionFalloffStart;
@property(nonatomic) double reflectionFalloffEnd;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;
- (struct __C3DFloor *)floorRef;
- (void)dealloc;
- (id)init;

@end

