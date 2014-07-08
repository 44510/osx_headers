//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLevelIndicatorCell.h"

@interface ITRatingLevelIndicatorCell : NSLevelIndicatorCell
{
    shared_ptr_11b4b364 _multistateImage;
    BOOL _allowHalfRating;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)keyDown:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)hasHalfStar;
- (void)setAllowHalfRating:(BOOL)arg1;
- (BOOL)allowHalfRating;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (void)accessibilityPerformStepInDirection:(long long)arg1;
- (id)accessibilityAttributeNames;
- (void)_drawTickMarksWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawRatingWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (shared_ptr_11b4b364)multistateImage;
- (id)initWithCell:(id)arg1 allowHalfRating:(BOOL)arg2;
- (id)initWithCell:(id)arg1;
- (id)init;

@end

