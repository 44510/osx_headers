//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/BarBackground.h>

@class ChevronButton, NSMutableArray, SlidingAnimation;

__attribute__((visibility("hidden")))
@interface SlidingViewsBar : BarBackground
{
    unsigned long long _dragSourceIndex;
    unsigned long long _dropIndex;
    double _draggedItemWidth;
    NSMutableArray *_buttons;
    SlidingAnimation *_animation;
    ChevronButton *_clipIndicator;
}

@property(readonly, nonatomic) ChevronButton *clipIndicator; // @synthesize clipIndicator=_clipIndicator;
- (void).cxx_destruct;
- (void)viewWillBeginDragging:(id)arg1;
- (id)viewPinnedToOverflowIndicator;
- (void)moveSlidingViewToCurrentDropIndex:(id)arg1;
- (BOOL)isSliding;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)updateDropTarget:(id)arg1;
- (double)slidingWidthForView:(id)arg1;
- (double)widthOfDraggingInfo:(id)arg1;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (BOOL)reorderSlidingView:(id)arg1 fromMouseDownEvent:(id)arg2;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (id)_lastDraggedEventFollowing:(id)arg1;
- (void)setDropIndex:(unsigned long long)arg1;
- (unsigned long long)dropIndex;
- (BOOL)slideButtonsIntoPlace;
- (unsigned long long)dropIndexFromLocalPoint:(struct CGPoint)arg1;
- (unsigned long long)dropIndexFromDraggingInfo:(id)arg1;
- (void)refreshButtons;
- (void)draggedSlidingView:(id)arg1;
- (void)reorderedSlidingView:(id)arg1;
- (double)buttonBottomOffset;
- (double)paddingBetweenButtons;
- (struct CGRect)_constrainProposedButtonFrame:(struct CGRect)arg1;
- (double)minSlidingViewX;
- (double)minButtonX;
- (double)maxButtonX;
- (double)maxButtonXWithClipIndicator;
- (double)maxButtonXWithoutClipIndicator;
- (unsigned long long)lastNonSlidingViewIndex;
- (BOOL)usesCenteredLayout;
@property(readonly, nonatomic) BOOL isShowingClipIndicator;
- (id)createClipIndicatorView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_ensureButtonIsInViewHierarchy:(id)arg1;

@end

