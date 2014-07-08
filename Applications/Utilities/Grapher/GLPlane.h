//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLObject.h"

@interface GLPlane : GLObject
{
    struct _GPoint3D mOrigin;
    struct _GPoint3D mAxis;
    double mAngle;
}

+ (id)planeWithOrigin:(double [3])arg1 normal:(double [3])arg2;
- (void)glDraw;
- (void)render;
- (id)initWithOrigin:(double [3])arg1 normal:(double [3])arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

