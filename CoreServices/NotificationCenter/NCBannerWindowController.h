//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCBannerAnimationDelegate.h"

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSObject<OS_dispatch_source>, NSPanel, NSString, NSTrackingArea, NSView, _NCBannersWindow;

@interface NCBannerWindowController : NSObject <NCBannerAnimationDelegate>
{
    _NCBannersWindow *_window;
    NSView *_contentView;
    NSMutableArray *_banners;
    _Bool _hasPendingAnimations;
    _Bool _mouseInside;
    _Bool _hasExpandedBanners;
    _Bool _canExpandBanners;
    NSHashTable *_pendingAdds;
    NSHashTable *_pendingDeletes;
    NSMapTable *_pendingAnimations;
    struct CGRect _visibleRect;
    struct CGRect _screenRect;
    double _rightColumnConstraintConstant;
    double _dockRightMargin;
    long long _windowRaiseCount;
    long long _normalWindowLevel;
    long long _animationWindowLevel;
    NSHashTable *_coalescedSlideOutBanners;
    NSObject<OS_dispatch_source> *_coalescedSlideOutTimer;
    NSObject<OS_dispatch_source> *_animation_block_timer;
    NSObject<OS_dispatch_source> *_mouse_moved_source;
    NSTrackingArea *_mouseTracking;
    long long _animatingCounter;
    _Bool _lockscreenMode;
    _Bool _disableAnimations;
    id <NCBannerWindowControllerDelegate> _delegate;
}

@property __weak id <NCBannerWindowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool disableAnimations; // @synthesize disableAnimations=_disableAnimations;
@property(nonatomic) _Bool lockscreenMode; // @synthesize lockscreenMode=_lockscreenMode;
@property(readonly) NSArray *banners; // @synthesize banners=_banners;
@property(readonly) NSPanel *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_animateWithDuration:(double)arg1 change:(CDUnknownBlockType)arg2 completed:(CDUnknownBlockType)arg3;
- (struct CGRect)_windowFrame;
- (void)_animationComplete;
- (void)_orderWindowOnIfNecessary;
- (void)_orderWindowOutIfNecessary;
- (void)_sortViews;
- (void)_horizontalLayout;
- (void)_handleDeletingOverflow:(id)arg1;
- (void)_recalculateOverflow;
- (void)_addHorizontalConstraintToBanner:(id)arg1;
- (void)_addVerticalConstraint:(id)arg1 matchingBanner:(id)arg2;
- (void)_addVerticalConstraint:(id)arg1;
- (void)_fixupVerticalConstraints;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)bannerAnimationDoneRaisedWindowLevel:(id)arg1;
- (void)bannerAnimationNeedsRaisedWindowLevel:(id)arg1;
- (void)performAnimationsDisabled:(CDUnknownBlockType)arg1;
- (id)existingBannerDisplayedByApplication:(id)arg1;
- (void)layoutWindowForScreenRect:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;
- (void)replaceBanners:(id)arg1;
- (void)removeBanners:(id)arg1 withAnimation:(int)arg2;
- (void)swapBannerContents:(id)arg1 withBanner:(id)arg2;
- (void)_processQueuedAnimations;
- (void)_queueBannerChange;
- (void)_queueAddBaner:(id)arg1 withAnimation:(int)arg2;
- (void)removeBanner:(id)arg1 withAnimation:(int)arg2;
- (void)insertBanner:(id)arg1 below:(id)arg2 withAnimation:(int)arg3;
- (void)insertBanner:(id)arg1 above:(id)arg2 withAnimation:(int)arg3;
- (void)addBanner:(id)arg1 withAnimation:(int)arg2;
@property(readonly) struct CGRect expectedWindowFrame;
@property(readonly) _Bool animating;
@property(readonly) double rightMargin;
@property(readonly) long long windowLevel;
- (id)initWithScreenFrame:(struct CGRect)arg1 andVisibleFrame:(struct CGRect)arg2 spaces:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

