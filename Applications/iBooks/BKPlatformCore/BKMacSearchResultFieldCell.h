//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSColor;

@interface BKMacSearchResultFieldCell : NSTextFieldCell
{
    NSColor *mBoldTextColor;
    double mLineSpacing;
    long long mNumberOfLines;
    double mLayoutWidth;
    struct _NSRange mBoldRange;
    struct _NSRange mFinalBoldRange;
}

@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=mLayoutWidth;
@property(nonatomic) struct _NSRange finalBoldRange; // @synthesize finalBoldRange=mFinalBoldRange;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=mNumberOfLines;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=mLineSpacing;
@property(retain, nonatomic) NSColor *boldTextColor; // @synthesize boldTextColor=mBoldTextColor;
@property(nonatomic) struct _NSRange boldRange; // @synthesize boldRange=mBoldRange;
- (void).cxx_destruct;
- (void)p_updateStringAttributesToMatchColors;
- (void)setStringValue:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColor:(id)arg1 boldTextColor:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initTextCell:(id)arg1;

@end

