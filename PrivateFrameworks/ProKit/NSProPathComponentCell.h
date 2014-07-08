//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPathComponentCell.h"

@interface NSProPathComponentCell : NSPathComponentCell
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (id)_dividerArrowFacet;
+ (id)_textFadeMaskToCoverRect:(struct CGRect *)arg1;
+ (id)_navBarFacet;
- (id)_proLabelFont;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_proDrawTitle:(id)arg1 inRect:(struct CGRect)arg2 ofControlView:(id)arg3;
- (void)_drawNavigationBarBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (double)_minWidth;
- (double)_fullWidth;
- (double)_initialComponentOffset;
- (double)_titleYOffset;
- (double)_spacingBeforeDividerArrow;
- (double)_overlapAmount;
- (id)_textAttributes;
- (id)init;

@end

