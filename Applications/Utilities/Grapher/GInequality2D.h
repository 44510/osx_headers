//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GScalarField2D.h"

@class NSColor;

@interface GInequality2D : GScalarField2D
{
    NSColor *mTempColor;
}

+ (id)defaultAttributes;
+ (BOOL)canDraw2DContourLines;
- (id)colorAtPosition:(double)arg1;
- (void)startScalarField;
- (void)scalarFieldMin:(double *)arg1 max:(double *)arg2;

@end

