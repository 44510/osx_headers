//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSColor;

__attribute__((visibility("hidden")))
@interface FI_TTextCell : NSTextFieldCell
{
    double _leftMargin;
    double _rightMargin;
    struct TNSRef<NSColor *> _enabledTextColor;
    struct TNSRef<NSColor *> _disabledTextColor;
    _Bool _drawGrayTextWhenDisabled;
    _Bool _centerVertically;
}

@property(nonatomic) _Bool centerVertically; // @synthesize centerVertically=_centerVertically;
@property(nonatomic) _Bool drawGrayTextWhenDisabled; // @synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) NSColor *disabledTextColor; // @dynamic disabledTextColor;
@property(retain, nonatomic) NSColor *enabledTextColor; // @dynamic enabledTextColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initImageCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;

@end

