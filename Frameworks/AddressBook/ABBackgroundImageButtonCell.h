//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

__attribute__((visibility("hidden")))
@interface ABBackgroundImageButtonCell : NSButtonCell
{
}

+ (id)imageBackgroundNormal;
+ (id)imageBackgroundHighlighted;
+ (id)imageBackgroundSelected;
+ (id)backgroundImageForState:(long long)arg1 isHighlighted:(BOOL)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawIconWithFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (void)drawTextWithFrame:(struct CGRect)arg1;
- (void)drawRightSideWithFrame:(struct CGRect)arg1;
- (void)drawLeftSideWithFrame:(struct CGRect)arg1;
- (void)drawBottomWithFrame:(struct CGRect)arg1;
- (void)drawLineAroundCellWithFrame:(struct CGRect)arg1;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 isFlipped:(BOOL)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

