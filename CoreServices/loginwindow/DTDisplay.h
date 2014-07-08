//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSWindow;

@interface DTDisplay : NSObject
{
    unsigned int _display;
    NSWindow *_window;
    CALayer *_baseLayer;
    CALayer *_pictureLayer;
    CALayer *_bootLayer;
}

@property(readonly) unsigned int displayID; // @synthesize displayID=_display;
@property(readonly) CALayer *bootLayer; // @synthesize bootLayer=_bootLayer;
@property(readonly) CALayer *pictureLayer; // @synthesize pictureLayer=_pictureLayer;
@property(readonly) CALayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(readonly) NSWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (unsigned int)realWindowID;
- (void)setTopLayerImage:(struct CGImage *)arg1;
- (void)showRootMacBuddyToLoginUITransition;
- (void)transition;
- (void)moveTransitionWindowToPrelaunchPosition;
- (void)setTransistionWindowsToAllowLoginHooksToShow;
- (void)setWindowLevelTo:(id)arg1;
- (void)appear;
- (void)updateDisplay:(unsigned int)arg1;
- (void)relinquishMain;
- (void)becomeMain;
- (id)initWithScreen:(id)arg1 displayID:(unsigned int)arg2 grabImage:(BOOL)arg3;

@end

