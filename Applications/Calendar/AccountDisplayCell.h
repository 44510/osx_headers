//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class CalManagedAccount, NSColor, NSImageCell;

@interface AccountDisplayCell : NSTextFieldCell
{
    NSTextFieldCell *_descriptionTextCell;
    NSTextFieldCell *_activeTextCell;
    NSImageCell *_imageCell;
    CalManagedAccount *_account;
    NSColor *_activeTextColor;
}

- (void).cxx_destruct;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_createDisabledImageForImage:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)setAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
