//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class NSTrackingArea;

__attribute__((visibility("hidden")))
@interface NSTitlebarView : NSVisualEffectView
{
    BOOL _transparent;
    NSTrackingArea *_buttonGroupTrackingArea;
}

@property BOOL transparent; // @synthesize transparent=_transparent;
- (id)titleFont;
- (id)menuForEvent:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)_removeTrackingAreaIfNeeded;
- (id)associatedThemeFrame;
@property BOOL drawsSeparator;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

