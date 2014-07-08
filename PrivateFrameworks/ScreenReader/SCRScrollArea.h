//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class NSArray, NSMutableSet, SCRScrollBar;

__attribute__((visibility("hidden")))
@interface SCRScrollArea : SCRMapElement
{
    SCRScrollBar *_vScrollbar;
    SCRScrollBar *_hScrollbar;
    double _previousEventTime;
    unsigned long long _contentChildrenCount;
    NSArray *_contentChildren;
    NSMutableSet *_childrenUIElementsCheckedForScrollbars;
}

- (BOOL)isScrollArea;
- (BOOL)handleScrollByPageWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleSpeakScrollPageWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)trackElementWithGestureEvent:(id)arg1 request:(id)arg2;
- (void)prepareGestureTrackingChildren;
- (BOOL)isContainerElement;
- (void)addContentToRequest:(id)arg1 visibleOnly:(BOOL)arg2;
- (void)incrementReadContentsElementIndex:(BOOL)arg1;
- (BOOL)performBrailleRouterActionWithIndex:(unsigned long long)arg1 outputRequest:(id)arg2;
- (void)prepareBrailleItemDescriptionForRequest:(id)arg1 hasBrailleFocus:(BOOL)arg2;
- (void)addItemDescriptionForBrailleToRequest:(id)arg1;
- (id)description;
- (BOOL)addKeyboardSelectionSummaryToRequest:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (void)addItemDescriptionForCommand:(id)arg1 toRequest:(id)arg2;
- (void)addItemDescriptionToRequest:(id)arg1;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (void)highlightWithScrolling:(BOOL)arg1;
- (BOOL)isSectionView;
- (void)handleInteractionOutput:(id)arg1 forCommand:(id)arg2 withStatus:(BOOL)arg3;
- (BOOL)_scrollEndWithRequest:(id)arg1;
- (BOOL)_scrollHomeWithRequest:(id)arg1;
- (BOOL)_scrollRightWithRequest:(id)arg1 distance:(int)arg2;
- (BOOL)_scrollLeftWithRequest:(id)arg1 distance:(int)arg2;
- (BOOL)_scrollDownWithRequest:(id)arg1 distance:(int)arg2;
- (BOOL)_scrollUpWithRequest:(id)arg1 distance:(int)arg2;
- (BOOL)_handleScrollWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_enableScrollModeWithRequest:(id)arg1;
- (BOOL)handleTaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)isInteractive;
- (BOOL)needToRebuildChildrenWithChildrenUIElements:(id)arg1;
- (BOOL)allowBuildChildren;
- (BOOL)shouldNavigate;
- (id)deepestPotentialChild;
- (id)_derivedFocusedChildWithEvent:(id)arg1;
- (id)focusedChildForChaining;
- (BOOL)showRect:(struct CGRect)arg1;
- (void)setChildren:(id)arg1;
- (id)contentChildren;
- (BOOL)isChildScrollable:(id)arg1;
- (BOOL)shouldPromoteUIElement:(id)arg1;
- (id)removeSpecialChildren:(id)arg1;
- (void)endFocus;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;
- (void)setKeyboardFocus:(BOOL)arg1;
- (BOOL)hasKeyboardFocus;
- (struct CGRect)droppableBounds;
- (struct CGRect)contentBounds;
- (id)vScrollbar;
- (id)hScrollbar;
- (id)_copyScrollBarOfOrientation:(id)arg1;
- (void)_updateCachedScrollBars;
- (void)_handleWindowResized:(id)arg1;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (void)deallocChildren;
- (Class)classForChildUIElement:(id)arg1 parent:(id)arg2;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

