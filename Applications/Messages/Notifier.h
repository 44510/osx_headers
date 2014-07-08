//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class FloaterWindow, IMHandle, NSString, NSWindow;

@interface Notifier : NSObject <NSWindowDelegate>
{
    NSWindow *_realWindow;
    FloaterWindow *_floaterWindow;
    struct CGPoint _floaterOffset;
    double _prevRealHeight;
    BOOL _canHideShowRealWindow;
    long long _stage;
    BOOL _respondedToInvite;
    int _inviteType;
    struct CGAffineTransform _finalXform;
    NSString *_openNoteID;
    IMHandle *_sender;
    BOOL _beSilent;
    BOOL _forcedOrderFront;
}

+ (void)orderFrontNotifierWithID:(id)arg1;
+ (id)staleNotifiersWithType:(int)arg1 fromID:(id)arg2;
+ (id)allNotifiers;
+ (id)notifierWithType:(int)arg1 fromID:(id)arg2;
+ (id)notifierWithType:(int)arg1 from:(id)arg2;
+ (void)addItemsToMenu:(id)arg1 atIndex:(unsigned long long)arg2 fromData:(id)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)floaterBackgroundColor;
+ (void)clearAllWeakReferencesToObject:(id)arg1;
- (id)menuItemFormat;
- (void)windowWillClose:(id)arg1;
- (void)_appDidUnhide:(id)arg1;
- (void)_appWillHide:(id)arg1;
- (void)_realWindowEndSheet:(id)arg1;
- (void)_realWindowBeginSheet:(id)arg1;
- (void)_realWindowResignedMain:(id)arg1;
- (void)_realWindowWillClose:(id)arg1;
- (void)_realWindowWillMiniaturize:(id)arg1;
- (void)_realWindowDidResize:(id)arg1;
- (void)_realWindowDidBecomeKey:(id)arg1;
- (void)closeWithoutAcceptingOrRejecting;
- (void)blockNotification;
- (void)acceptNotification;
- (void)rejectNotificationAndCloseRealWindow:(BOOL)arg1;
- (void)_rejectNotificationAndCloseRealWindow:(BOOL)arg1;
- (void)closeDownShop:(BOOL)arg1;
- (void)_closeDownShop;
- (void)realWindowHiding;
- (void)_doFrameOfRealHiding:(id)arg1;
- (void)_animateRealHiding;
- (BOOL)canHideRealWindow;
- (BOOL)canShowRealWindow;
- (void)realWindowVisible;
- (void)_doFrameOfRealDisplay:(id)arg1;
- (void)_animateRealDisplay:(id)arg1;
- (void)orderFrontRealWindow;
- (void)forceOrderFrontRealWindow;
- (void)floaterBecomingVisible;
- (void)floaterWillBecomeVisible;
- (void)_doFrameOfFloaterDisplay:(id)arg1;
- (void)animateFloaterDisplay;
- (void)_doAnimateFloaterDisplay;
- (struct CGAffineTransform)_xformForFloaterScale:(double)arg1;
- (BOOL)isRealWindowHidden;
- (void)_addSelfToNotifierList;
- (void)stopEventActions;
- (BOOL)silent;
- (void)setSilent:(BOOL)arg1;
- (void)setAccessibilityDescription:(id)arg1;
- (void)_updateWindowTitle;
- (void)buildFloaterWindowOfClass:(Class)arg1 frame:(struct CGRect)arg2 styleMask:(long long)arg3;
- (void)positionRealWindowInCorner:(BOOL)arg1;
- (BOOL)_collidesWithExistingWindow:(struct CGRect)arg1;
- (void)setRealWindow:(id)arg1;
- (id)realWindow;
- (id)floaterWindow;
- (BOOL)isStale;
- (BOOL)isActiveNotification;
- (void)setPreviousRealHeight:(double)arg1;
- (double)previousRealHeight;
- (void)moveFloaterOffset:(struct CGSize)arg1;
- (void)setFloaterOffset:(struct CGPoint)arg1;
- (struct CGPoint)floaterOffset;
- (void)setOpenNoteID:(id)arg1;
- (id)openNoteID;
- (void)setSender:(id)arg1;
- (id)sender;
- (void)setStage:(long long)arg1;
- (long long)stage;
- (void)setCanHideShowRealWindow:(BOOL)arg1;
- (BOOL)canHideShowRealWindow;
- (void)setInviteType:(int)arg1;
- (int)inviteType;
- (void)setRespondedToInvite:(BOOL)arg1;
- (BOOL)respondedToInvite;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)installRealWindowNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

