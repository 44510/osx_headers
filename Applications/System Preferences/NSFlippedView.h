//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class SpotlightView;

@interface NSFlippedView : NSView
{
    BOOL mHighlight;
    struct CGRect mBackgroundRects[8];
    short mBackgroundRectCounter;
    SpotlightView *mSpotlightView;
    BOOL mFKAState;
}

- (void)animateSpotlightPref;
- (void)selectSpotlightPref:(id)arg1;
- (void)spotlightPrefs:(id)arg1 animate:(BOOL)arg2;
- (void)addBackGroundFrame:(struct CGRect)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

