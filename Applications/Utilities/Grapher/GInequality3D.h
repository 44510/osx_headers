//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GScalarField3D.h"

@class NSColor;

@interface GInequality3D : GScalarField3D
{
    NSColor *mTempColor;
}

+ (id)defaultAttributes;
- (id)colorAtPosition:(double)arg1;
- (void)startScalarField;
- (void)scalarFieldMin:(double *)arg1 max:(double *)arg2;

@end

