//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray;

@interface GKHorizontalBubbleControlsView : NSView
{
    NSArray *_bubbles;
    double _overlap;
    NSArray *_bubbleTokens;
}

@property(retain, nonatomic) NSArray *bubbleTokens; // @synthesize bubbleTokens=_bubbleTokens;
@property(nonatomic) double overlap; // @synthesize overlap=_overlap;
@property(retain, nonatomic) NSArray *bubbles; // @synthesize bubbles=_bubbles;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

