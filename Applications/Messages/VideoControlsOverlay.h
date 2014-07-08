//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class AVTimeSlider, AVVolumeSlider, MenuButton, ModifierTabView, NSExtendedBox, NSString, NSTabView, NSView, NSViewAnimation, NSWindow, OverlayBackground;

@interface VideoControlsOverlay : NSObject <NSAnimationDelegate>
{
    id _delegate;
    NSWindow *_overlayWindow;
    NSWindow *_parentWindow;
    NSView *_parentView;
    double _horizPosition;
    NSViewAnimation *_fadeAnimation;
    BOOL _fadedOut;
    BOOL _trackingTimeSlider;
    NSView *_overlayContentView;
    OverlayBackground *_overlayContainer;
    ModifierTabView *_mutePauseTabView;
    NSTabView *_theaterPlayPauseTabView;
    NSExtendedBox *_controlsDivider;
    NSView *_fullScreenControlsContainer;
    MenuButton *_endChatButton;
    MenuButton *_muteChatButton;
    MenuButton *_pauseChatButton;
    MenuButton *_effectsButton;
    MenuButton *_endFullScreenButton;
    NSView *_theaterControlsContainer;
    MenuButton *_previousButton;
    MenuButton *_playButton;
    MenuButton *_pauseButton;
    MenuButton *_nextButton;
    AVVolumeSlider *_volumeControl;
    AVTimeSlider *_timeSlider;
    NSView *_fullScreenFullTemplate;
    NSView *_fullScreenNoSliderTemplate;
    NSView *_fullScreenOnlyTemplate;
    NSView *_windowedFullTemplate;
    NSView *_windowedNoVolumeTemplate;
    NSView *_windowedNoSliderTemplate;
    NSView *_windowedButtonsOnlyTemplate;
    NSView *_controlsFullTemplate;
    NSView *_controlsPrevNextTemplate;
    NSView *_currentTemplate;
}

- (void)theaterSetTime:(id)arg1;
- (void)theaterSetVolume:(id)arg1;
- (void)theaterNext:(id)arg1;
- (void)theaterPlayPause:(id)arg1;
- (void)theaterPrevious:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)showEffectsPalette:(id)arg1;
- (void)toggleMute:(id)arg1;
- (void)togglePause:(id)arg1;
- (void)endConference:(id)arg1;
- (void)sliderDidEndTracking:(id)arg1;
- (void)_stopTracking;
- (void)sliderWillStartTracking:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)performNext;
- (void)performPrevious;
- (void)_performClickOnButton:(id)arg1;
- (void)setMute:(BOOL)arg1 enabled:(BOOL)arg2 paused:(BOOL)arg3 enabled:(BOOL)arg4 effectsEnabled:(BOOL)arg5;
- (void)setFullScreen:(BOOL)arg1 theaterControls:(id)arg2;
- (void)_setFullScreen:(BOOL)arg1 playPause:(id)arg2 previous:(id)arg3 next:(id)arg4 volume:(id)arg5 slider:(id)arg6;
- (BOOL)isVisible;
- (void)fadeInAnimated:(BOOL)arg1;
- (void)fadeOutIfPossible;
- (void)_fadeOut:(BOOL)arg1 animated:(BOOL)arg2;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_updateOpacity;
- (id)overlayWindow;
- (id)parentWindow;
- (void)setParentView:(id)arg1 horizPosition:(double)arg2;
- (void)_setParentView:(id)arg1 horizPosition:(double)arg2 forceReposition:(BOOL)arg3;
- (void)_repositionOverlayWindow;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_setButton:(id)arg1 imageTemplateDimension:(double)arg2;
- (void)_setButton:(id)arg1 imageTemplateSize:(struct CGSize)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

