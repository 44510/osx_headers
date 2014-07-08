//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButtonCell.h"

@class NSButtonCell, NSImage;

@interface ImagePopUpButtonCell : NSPopUpButtonCell
{
    NSButtonCell *mButtonCell;
    BOOL mShowsMenuWhenImageClicked;
    NSImage *mImage;
    NSImage *mArrowImage;
    struct CGSize mImageSize;
}

- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)performClick:(id)arg1;
- (struct CGSize)cellSize;
- (void)setArrowImage:(id)arg1;
- (struct CGSize)arrowSize;
- (id)arrowImage;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setShowsMenuWhenImageClicked:(BOOL)arg1;
- (BOOL)showsMenuWhenImageClicked;
- (void)setImageSize:(struct CGSize)arg1;
- (struct CGSize)imageSize;
- (void)dealloc;
- (id)initWithCell:(id)arg1;
- (id)init;

@end

