//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView, NSWindow;

@interface Overlay : NSObject
{
    NSView *_targetView;
    NSWindow *_overlayWindow;
    NSView *_overlayView;
    BOOL _sharesKey;
    id _delegate;
}

+ (Class)overlayWindowClass;
- (void)setSharesKeyWithParentWindow:(BOOL)arg1;
- (BOOL)sharesKeyWithParentWindow;
- (void)setIgnoresMouseEvents:(BOOL)arg1;
- (BOOL)ignoresMouseEvents;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)overlayView;
- (id)targetView;
- (BOOL)isAttached;
- (void)detachOverlay;
- (BOOL)containsScreenPoint:(struct CGPoint)arg1;
- (void)attachOverlay;
- (void)dealloc;
- (id)initWithTargetView:(id)arg1 overlayViewClass:(Class)arg2;
- (void)_repositionOverlayWindow;
- (struct CGRect)_computeOverlayWindowFrame;

@end

