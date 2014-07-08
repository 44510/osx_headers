//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMapTable, NSTimer, NSToolTip, NSWindow;

@interface NSToolTipManager : NSObject
{
    NSWindow *_toolTipWindow;
    NSMapTable *_toolTipsByView;
    double toolTipDelay;
    NSDate *timeToolTipRemovedFromScreen;
    struct __CFRunLoopTimer *_toolTipDisplayTimer;
    NSToolTip *currentDisplayedToolTip;
    NSToolTip *currentFadingToolTip;
    double currentFadeValue;
    NSTimer *fadeTimer;
    NSWindow *lastToolTipWindow;
    NSWindow *_expansionToolTipWindow;
    NSToolTip *_currentExpansionToolTip;
}

+ (BOOL)isCurrentMouseLocationAboveWindow:(id)arg1;
+ (id)sharedToolTipManager;
- (void)orderOutOnlyExpansionToolTip;
- (BOOL)isRegularToolTipVisible;
- (BOOL)isExpansionToolTipVisible;
- (void)_toolTipTimerFiredWithToolTip:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)_isToolTipAlive:(id)arg1;
- (void)mouseEnteredToolTip:(id)arg1 inWindow:(id)arg2 withEvent:(id)arg3;
- (BOOL)_inQuickDisplayModeForWindow:(id)arg1;
- (void)abortToolTip;
- (void)orderOutToolTipImmediately:(BOOL)arg1;
- (void)fadeToolTip:(id)arg1;
- (void)_stopFadeTimer;
- (void)orderOutToolTip;
- (void)displayToolTip:(id)arg1;
- (void)drawToolTip:(id)arg1 attributedString:(id)arg2 inView:(id)arg3;
- (void)installContentView:(id)arg1 forToolTip:(id)arg2 toolTipWindow:(id)arg3 isNew:(BOOL)arg4;
- (struct CGPoint)onScreenToolTipWindowFrameOriginForToolTip:(id)arg1 windowFrame:(struct CGRect)arg2 where:(struct CGPoint)arg3 location:(struct CGPoint)arg4;
- (id)toolTipContentViewWithAttributedString:(id)arg1 location:(struct CGPoint)arg2 where:(struct CGPoint)arg3 windowFrame:(struct CGRect *)arg4 toolTip:(id)arg5;
- (id)toolTipAttributes;
- (double)toolTipYOffset;
- (struct CGSize)toolTipContentMargin;
- (id)toolTipBackgroundColor;
- (id)toolTipTextColor;
- (id)_newToolTipWindow;
- (void)_stopTimerIfRunningForToolTip:(id)arg1;
- (void)stopTimer;
- (void)startTimer:(double)arg1 userInfo:(id)arg2;
- (void)recomputeToolTipsForView:(id)arg1 remove:(BOOL)arg2 add:(BOOL)arg3;
- (void)orderOutToolTipForView:(id)arg1;
- (void)viewDidChangeGeometryInWindow:(id)arg1;
- (id)toolTipForView:(id)arg1 cell:(id)arg2;
- (id)_findToolTipForView:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)removeAllToolTipsForView:(id)arg1 withDisplayDelegate:(id)arg2;
- (void)removeAllToolTipsForView:(id)arg1 withOwner:(id)arg2;
- (void)removeAllToolTipsForView:(id)arg1;
- (BOOL)viewHasToolTips:(id)arg1;
- (void)removeToolTipForView:(id)arg1 tag:(long long)arg2;
- (void)setToolTip:(id)arg1 forView:(id)arg2 cell:(id)arg3;
- (void)setToolTipWithOwner:(id)arg1 forView:(id)arg2 cell:(id)arg3;
- (long long)setToolTipForView:(id)arg1 rect:(struct CGRect)arg2 owner:(id)arg3 userData:(void *)arg4;
- (long long)setToolTipForView:(id)arg1 rect:(struct CGRect)arg2 displayDelegate:(id)arg3 displayInfo:(id)arg4;
- (void)_removeTrackingRectForToolTip:(id)arg1 stopTimerIfNecessary:(BOOL)arg2;
- (void)_removeTrackingRectsForView:(id)arg1 stopTimerIfNecessary:(BOOL)arg2;
- (long long)_setToolTip:(id)arg1 forView:(id)arg2 cell:(id)arg3 rect:(struct CGRect)arg4 owner:(id)arg5 ownerIsDisplayDelegate:(BOOL)arg6 userData:(void *)arg7;
- (void)_removeToolTipsForView:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_addTrackingRectsForView:(id)arg1;
- (void)addTrackingRectForToolTip:(id)arg1 reuseExistingTrackingNum:(BOOL)arg2;
- (long long)_addTrackingRect:(struct CGRect)arg1 andStartToolTipIfNecessary:(BOOL)arg2 view:(id)arg3 owner:(id)arg4 toolTip:(id)arg5 reuseExistingTrackingNum:(BOOL)arg6;
- (BOOL)_checkDisplayDelegate:(id)arg1;
- (void)_getIsExpansionToolTip:(id)arg1;
- (void)_getDisplayDelegateFadesOutWhenInactive:(id)arg1;
- (BOOL)_shouldInstallToolTip:(void *)arg1;
- (void)windowDidBecomeKeyNotification:(id)arg1;
- (void)setInitialToolTipDelay:(double)arg1;
- (void)_menuDidBeginTracking:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_orderOutAllToolTipsImmediately:(BOOL)arg1;
- (void)_getDisplayDelay:(double *)arg1 inQuickMode:(char *)arg2 forView:(id)arg3;
- (void)_displayTemporaryToolTipForView:(id)arg1 withDisplayDelegate:(id)arg2 displayInfo:(id)arg3;
- (void)_displayTemporaryToolTipForView:(id)arg1 withString:(id)arg2;

@end

