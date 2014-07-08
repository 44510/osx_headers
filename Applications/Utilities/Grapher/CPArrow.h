//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPFormat.h"

@interface CPArrow : CPFormat
{
    long long mKind;
    double mSize;
    double mWidth;
}

+ (struct CGSize)defaultSampleSize;
+ (id)pasteboardType;
+ (id)arrowWithKind:(long long)arg1 size:(double)arg2;
+ (id)arrow;
+ (id)defaultFormat;
+ (long long)kinds;
- (void)drawSampleInRect:(struct CGRect)arg1;
- (void)drawSampleInRect:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawFrom:(struct CGPoint)arg1 to:(struct CGPoint *)arg2 withLineStyle:(id)arg3;
- (void)drawFrom:(struct CGPoint)arg1 to:(struct CGPoint *)arg2;
- (void)drawFrom:(struct CGPoint)arg1 to:(struct CGPoint *)arg2 visible:(BOOL)arg3 withLineStyle:(id)arg4;
- (void)drawFrom:(struct CGPoint)arg1 to:(struct CGPoint *)arg2 visible:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)size;
- (void)setSize:(double)arg1;
- (long long)kind;
- (void)setKind:(long long)arg1;
- (id)initWithKind:(long long)arg1 size:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

