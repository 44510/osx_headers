//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_PVIVSelectionWithRectangle.h"

@class CATextLayer;

@interface PVIVSelectionRect : _PVIVSelectionWithRectangle
{
    CATextLayer *_dimensionsDisplayLayer;
}

- (void)dealloc;
- (void)setRect:(struct CGRect)arg1;
- (void)removeDimensionsDisplay;
- (void)updateDimensionsDisplayAtPoint:(struct CGPoint)arg1 withExifOrientation:(long long)arg2;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (struct CGPath *)newPathCroppedToRect:(struct CGRect)arg1 outPathOrigin:(struct CGPoint *)arg2;
- (struct CGRect)rect;
- (struct CGRect)bounds;

@end

