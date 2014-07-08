//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GAxis2D.h"

@interface GLinearAxis2D : GAxis2D
{
    struct CGPoint mStart;
    struct CGPoint mLineStart;
    struct CGPoint mEnd;
    struct CGPoint mLineEnd;
    double mLength;
    struct CGPoint mTickVector;
}

+ (id)defaultAttributes;
- (long long)axisType;
- (void)drawContent;
- (struct CGPoint)getVectorForTick:(double)arg1;
- (BOOL)drawTickAtPoint:(struct CGPoint)arg1;
- (void)strokeAxis;
- (id)axisPath;
- (double)totalLength;
- (void)prepareAxis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

