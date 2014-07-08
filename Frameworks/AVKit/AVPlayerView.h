//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AVTrimControlsViewControllerDelegate.h"
#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class AVAnimator, AVAudioOnlyIndicatorView, AVControlsContainerViewController, AVLoadingIndicatorView, AVPlayer, AVPlayerController, AVPlayerControlsViewController, AVPlayerLayer, AVShareController, AVStatusOverlayView, AVTrimControlsViewController, AVUnsupportedContentIndicatorView, NSArray, NSMenu, NSMutableArray, NSString, NSTimer, NSTrackingArea, NSWindow;

@interface AVPlayerView : NSView <NSSharingServicePickerDelegate, NSSharingServiceDelegate, AVTrimControlsViewControllerDelegate>
{
    unsigned int _playerShouldAutoplay:1;
    NSString *_videoGravity;
    AVPlayerLayer *_playerLayer;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    NSView *_contentOverlayView;
    AVStatusOverlayView *_statusOverlayView;
    NSMutableArray *_statusOverlayViewLayoutConstraints;
    AVLoadingIndicatorView *_loadingIndicatorView;
    NSTimer *_loadingIndicatorTimer;
    AVControlsContainerViewController *_controlsContainerViewController;
    AVPlayerControlsViewController *_initialControlsViewController;
    AVPlayerControlsViewController *_playbackControlsViewController;
    AVTrimControlsViewController *_trimControlsViewController;
    AVPlayerControlsViewController *_editControlsViewController;
    NSTrackingArea *_trackingArea;
    long long _showControlsCount;
    NSTimer *_controlsTimer;
    NSTimer *_temporaryControlsTimer;
    unsigned int _viewHasBeenSetup:1;
    unsigned int _showsControlsPane:1;
    unsigned int _canHideControls:1;
    unsigned int _isShowingPlaybackControlsForMouseMovingInsideView:1;
    unsigned int _isShowingPlaybackControlsViewForUnsupportedContent:1;
    unsigned int _isShowingPlaybackControlsViewForAudioOnlyContent:1;
    unsigned int _isShowingPlaybackControlsViewForPlayingOnExternalScreen:1;
    unsigned int _didPausePlaybackForSheet:1;
    unsigned int _hideControlsOnMouseUp:1;
    unsigned int _doNotMakeCurrentControlsViewControllerViewFirstResponder:1;
    unsigned int _viewNeedsResetupInViewDidMoveToWindow:1;
    unsigned int _showsFrameSteppingButtons:1;
    unsigned int _showsSharingServiceButton:1;
    NSMenu *_actionPopUpButtonMenu;
    unsigned int _showsFullScreenToggleButton:1;
    CDUnknownBlockType _trimCompletionBlock;
    AVPlayerController *_playerController;
    unsigned int _isFullScreen:1;
    unsigned long long _savedPresentationOptions;
    NSWindow *_fullScreenWindow;
    NSWindow *_originalWindow;
    NSView *_superview;
    NSView *_placeholderView;
    struct CGRect _savedViewFrame;
    CDStruct_e83c9415 _slowMotionTimeRange;
    id <AVPlayerViewSlowMotionDelegate> _slowMotionDelegate;
    struct {
        unsigned int playerView_playerItemTimeForNormalizedTime:1;
    } _slowMotionDelegateRespondsTo;
    long long _playerLayerLayoutMode;
    struct CGSize _fixedPlayerLayerSize;
    AVAnimator *_animator;
    NSArray *_noHideAreaViews;
    CDStruct_83cd8af5 _floatingPlaybackControlsMargin;
    unsigned int _canZoomHorizontally:1;
    unsigned int _canZoomVertically:1;
    unsigned int _isZoomed:1;
    unsigned int _showsAlternateMediaTrackPreview:1;
    unsigned int _prefersReducedUserInterface:1;
    AVShareController *_shareController;
    long long _controlsStyle;
}

+ (id)restorableStateKeyPaths;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingPlayer;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanBeginTrimming;
+ (BOOL)automaticallyNotifiesObserversOfPlayerController;
+ (id)keyPathsForValuesAffectingIsTrimming;
+ (BOOL)wantsPlayerLayerLayout;
+ (id)keyPathsForValuesAffectingPlayerLayerFrame;
+ (id)keyPathsForValuesAffectingPrefersUnobscuredContent;
+ (id)keyPathsForValuesAffectingCanShowSharingServiceButton;
@property long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void).cxx_destruct;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)playerControllerDidChangePlaybackStateByHandlingEvent:(id)arg1;
- (void)playerControllerDidSeekChapter:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_fireControlsTimer:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1;
- (id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
- (void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1;
- (id)_currentControlsViewController;
- (void)_setupTrackingAreas;
- (void)_showOrHideControls;
- (BOOL)_mouseInNoHideArea;
- (id)_noHideAreaViews;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_fireTemporaryControlsTimer:(id)arg1;
- (void)_showControlsTemporarily;
- (void)_hideControlsIfPossibleAfterDelay;
- (void)_hideControlsIfPossible;
- (void)_showControlsIfNeeded;
- (void)_updateAudioOnlyIndicatorView;
- (BOOL)_isAudioOnlyContent;
- (void)_updateUnsupportedContentIndicatorView;
- (BOOL)_isUnsupportedContent;
- (void)_setupControlsContainerView;
- (void)_setupContentOverlayView;
- (void)_layoutStatusOverlayView;
- (void)_setupStatusOverlayView;
- (void)_setupLoadingIndicatorView;
- (void)_setupAudioOnlyIndicatorView;
- (void)_setupUnsupportedContentIndicatorView;
- (void)_setupPlayerLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
@property(retain) AVPlayerControlsViewController *editControlsViewController;
@property(retain) AVTrimControlsViewController *trimControlsViewController;
@property(retain) AVPlayerControlsViewController *playbackControlsViewController;
@property(readonly) NSView *contentOverlayView;
@property(readonly) struct CGRect videoBounds;
@property(readonly, getter=isReadyForDisplay) BOOL readyForDisplay;
@property(copy) NSString *videoGravity;
@property(retain) AVPlayer *player;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property BOOL showsFullScreenToggleButton;
@property(retain) NSMenu *actionPopUpButtonMenu;
@property BOOL showsSharingServiceButton;
@property BOOL showsFrameSteppingButtons;
- (void)trimControlsViewControllerDidCancel:(id)arg1;
- (void)trimControlsViewControllerDidTrim:(id)arg1;
- (void)_callTrimCompletionHandlerWithResult:(long long)arg1;
- (void)_restorePlaybackControlsAfterTrimmingWithTrimControlsViewController:(id)arg1;
- (void)beginTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL canBeginTrimming;
- (void)flashChapterNumber:(unsigned long long)arg1 chapterTitle:(id)arg2;
@property(retain) AVPlayerController *playerController;
- (void)exitFullScreen:(id)arg1;
- (void)enterFullScreen:(id)arg1;
- (void)setIsFullScreen:(BOOL)arg1;
@property(readonly) BOOL isFullScreen;
@property BOOL canHideControls;
- (void)beginTrimmingWithMaximumDuration:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL isTrimming;
@property __weak id <AVPlayerViewSlowMotionDelegate> slowMotionDelegate;
@property CDStruct_e83c9415 slowMotionTimeRange;
- (id)animator;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGRect)playerLayerFrameForBoundsSize:(struct CGSize)arg1 playerLayerLayoutMode:(long long)arg2;
@property(readonly) struct CGRect playerLayerFrame;
@property struct CGSize fixedPlayerLayerSize;
@property long long playerLayerLayoutMode;
- (void)hideEditControlsViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showEditControlsViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)toggleZoom:(id)arg1;
@property BOOL showsAlternateMediaTrackPreview;
@property(getter=isZoomed) BOOL zoomed;
@property BOOL canZoomVertically;
@property BOOL canZoomHorizontally;
@property CDStruct_83cd8af5 floatingPlaybackControlsMargin;
@property(retain) NSArray *noHideAreaViews;
@property(readonly) BOOL prefersUnobscuredContent;
@property(readonly) BOOL showsControlsPane;
@property(readonly) AVShareController *shareController;
- (void)_hideControlsForPopUpButtonOrPopover;
- (void)_showControlsForPopUpButtonOrPopover;
@property BOOL prefersReducedUserInterface;
- (struct CGRect)videoRect;
- (void)showSharingServicePickerRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
@property(readonly) BOOL canShowSharingServiceButton;
- (void)performWithService:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)previewThumbnailImage;
- (BOOL)canShareCompositionWithService:(id)arg1;
- (void)doService:(id)arg1 withItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
