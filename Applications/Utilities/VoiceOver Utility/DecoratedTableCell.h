//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSMutableDictionary, NSMutableParagraphStyle;

@interface DecoratedTableCell : NSTextFieldCell
{
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_selectedTextAttributes;
    NSMutableParagraphStyle *_textStyle;
    double _imageWidth;
    double _imageBorderWidth;
    double _doubleImageBorderWidth;
}

- (id)accessibilityAttributeValue:(id)arg1;
- (id)attributedStringValue;
- (id)stringValue;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)shouldUseSelectedTextAttributesInControlView:(id)arg1;
- (void)setSelectedTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)selectedTextColor;
- (id)textColor;
- (double)imageWidth;
- (void)setImageWidth:(double)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (BOOL)isSideBarStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

