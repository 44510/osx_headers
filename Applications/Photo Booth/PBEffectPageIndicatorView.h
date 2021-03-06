//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

@interface PBEffectPageIndicatorView : NSView
{
    id _delegate;
    long long _count;
    long long _current;
    BOOL _fullScreenMode;
    NSButton *_leftArrowButton;
    NSButton *_rightArrowButton;
}

@property(nonatomic) BOOL fullScreenMode; // @synthesize fullScreenMode=_fullScreenMode;
- (void).cxx_destruct;
- (void)updateArrowButtonsState;
- (void)goNextPage:(id)arg1;
- (void)goPreviousPage:(id)arg1;
- (void)goPreviousNextPage:(BOOL)arg1;
- (void)pageClicked:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setPageCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_setCurrentPage:(long long)arg1;
- (void)_prepareCells:(id)arg1;
- (id)_attributedStringValue;
- (void)_refreshIndicator;
- (double)_textSize;
- (void)_refreshArrowsAroundView:(id)arg1;
- (id)_imageForEffectPageAtState:(long long)arg1;
- (id)_imageForEffectArrowAtState:(long long)arg1 pointLeft:(BOOL)arg2;

@end

