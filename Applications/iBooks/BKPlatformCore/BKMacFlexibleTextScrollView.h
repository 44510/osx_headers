//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@interface BKMacFlexibleTextScrollView : NSScrollView
{
    double _minHeight;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
- (id)p_textView;
- (double)p_frameHeightForContentHeight:(double)arg1;
- (void)scrollWheel:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)requiredHeightForCurrentText;

@end

