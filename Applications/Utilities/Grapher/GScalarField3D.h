//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GScalarField.h"

@interface GScalarField3D : GScalarField
{
    id mGLObject;
}

+ (id)defaultAttributes;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (void)updateAttributeSelf;
- (void)scalarValue:(double)arg1 at:(double *)arg2;
- (id)colorAtPosition:(double)arg1;
- (void)startScalarField;
- (void)glDrawContent:(BOOL)arg1;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

