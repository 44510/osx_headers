//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCurve.h"

@class GLCurve, GLTube;

@interface GCurve3D : GCurve
{
    GLCurve *mCurve;
    GLTube *mTube;
}

+ (id)defaultAttributes;
+ (void)addTubeAttributes:(id)arg1;
- (void)projectWithColor:(id)arg1 linesOnly:(BOOL)arg2;
- (void)addItemsToContextualMenu:(id)arg1;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (void)updateSelf;
- (void)updateAttributeSelf;
- (void)glDrawContent:(BOOL)arg1;
- (void)endCurve;
- (void)lineTo:(double *)arg1;
- (void)startCurve;
- (void)liftPen;
- (void)setPoint:(double *)arg1 to:(double *)arg2;
- (BOOL)undefinedPoint:(double *)arg1;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

