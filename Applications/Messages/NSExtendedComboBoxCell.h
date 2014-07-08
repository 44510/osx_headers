//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSComboBoxCell.h"

@class NSTextFieldCell;

@interface NSExtendedComboBoxCell : NSComboBoxCell
{
    BOOL _drawPopUpButton;
    NSTextFieldCell *_textFieldCell;
}

- (float)_buttonWidth;
- (struct CGRect)boundsForButtonCell:(struct CGRect)arg1;
- (struct CGRect)boundsForTextCell:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isPopUpButtonVisible;
- (void)setPopUpButtonVisible:(BOOL)arg1;
- (void)dealloc;

@end

