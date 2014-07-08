//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

@interface TTransposingStackView : NSStackView
{
    double _verticalSpacing;
    double _horizontalSpacing;
}

@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
- (void)layout;
- (double)calcWidthToTriggerTranspose;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

