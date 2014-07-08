//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBezierPath;

@interface AKPotrace : NSObject
{
    struct CGPath *_path;
    NSBezierPath *_bezierPath;
    struct potrace_bitmap_s *_po_bm;
    struct potrace_param_s *_params;
}

+ (struct CGPath *)newCGPathFromPotracePathOLD:(struct potrace_path_s *)arg1;
+ (id)bezierPathFromPotracePath:(struct potrace_path_s *)arg1;
+ (struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg1;
+ (id)EPSDataFromPotracePath:(struct potrace_path_s *)arg1;
- (void).cxx_destruct;
@property double opttolerance;
@property int opticurve;
@property double alphamax;
@property int turnpolicy;
@property int turdsize;
- (id)bezierPath;
- (struct CGPath *)CGPath;
- (void)_generateBezierPath;
- (void)_generatePath;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 threshhold:(unsigned char)arg2 lowValuesAreOn:(BOOL)arg3 flipped:(BOOL)arg4;

@end

