//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EventActionView.h"

@class CALayer, CameraController, CameraLayer, FPS, FXLayer, FourUpLayer, LoadingLayer, MinSizeCALayer, MovieLayer, NSImage, NSString, NSURL, NSView, NSVisualEffectView, PBImagePickerController, PBOverlayScrollView, PBTransparentSlider, ShadowedTextLayer, VideoLayer;

@interface PBView : EventActionView
{
    id _delegate;
    id _applicationWindow;
    CameraController *_camera;
    PBImagePickerController *_ibImagePickerController;
    NSView *_trayBoxView;
    PBOverlayScrollView *_trayScrollView;
    NSVisualEffectView *_trayBlendedView;
    BOOL _saveViewMode;
    BOOL _finishedLaunchCameraSetup;
    BOOL _mouseDownOccuredInsideView;
    int _viewMode;
    CALayer *_reflectionLayer;
    CALayer *_glowLayerLeft;
    CALayer *_glowLayerRight;
    CALayer *_contentLayer;
    CALayer *_stillLayer;
    MinSizeCALayer *_promptBgLayer;
    ShadowedTextLayer *_promptTextLayer;
    FourUpLayer *_fourUpLayer;
    MovieLayer *_movieLayer;
    VideoLayer *_videoLayer;
    CameraLayer *_statusLayer;
    LoadingLayer *_loadingLayer;
    CALayer *_flyingSnapshotLayer;
    BOOL _reflectionsEnabled;
    PBTransparentSlider *_sliderView;
    BOOL _isTransitioning;
    BOOL _isReplaceBackground;
    int _allowKeyboardAndMouseControlDisableCount;
    BOOL _allowKeyboardAndMouseControl;
    FPS *_droppedFps;
    BOOL _hasLockedCamera;
    BOOL _previouslySleeping;
}

+ (void)initialize;
@property BOOL hasLockedCamera; // @synthesize hasLockedCamera=_hasLockedCamera;
@property id delegate; // @synthesize delegate=_delegate;
@property(readonly) LoadingLayer *loadingLayer; // @synthesize loadingLayer=_loadingLayer;
@property(readonly) VideoLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly) MovieLayer *movieLayer; // @synthesize movieLayer=_movieLayer;
@property(readonly) CALayer *stillLayer; // @synthesize stillLayer=_stillLayer;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)onZoomedOut:(id)arg1;
- (void)onZoomedIn:(id)arg1;
- (void)_updateSlider;
- (void)_autoHideSlider:(id)arg1;
- (void)_hideSlider:(BOOL)arg1;
- (void)_takeValueFrom:(id)arg1;
- (void)_initSliderView;
- (void)swipeWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)_toolbarHit:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)sendPBEvent:(id)arg1;
- (void)goToPreviousNextEffectPage:(BOOL)arg1;
- (id)layerForEvent:(id)arg1;
- (void)disableKeyboardAndMouseControl:(id)arg1;
- (void)enableKeyboardAndMouseControl:(id)arg1;
- (BOOL)allowKeyboardAndMouseControl;
- (void)endFourUpReveal;
- (void)checkInsert:(id)arg1;
- (void)_continueFourUpReveal:(id)arg1;
- (void)beginFourUpReveal:(id)arg1;
- (void)lockCamera:(BOOL)arg1;
- (void)videoLayer:(id)arg1 effectChanged:(id)arg2;
- (void)videoLayer:(id)arg1 pageChanged:(long long)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(readonly) long long pageCount;
@property long long pageIndex;
@property(readonly) BOOL viewModeWantsVideo;
@property int viewMode;
- (void)toggleTrimMode:(id)arg1;
- (void)setViewMode:(int)arg1 animate:(BOOL)arg2;
- (void)_updateLayersFromViewMode:(int)arg1 toMode:(int)arg2 animate:(BOOL)arg3;
- (void)_updateLayerMembershipForMode:(int)arg1 fromMode:(int)arg2;
- (void)_effectsFinishedLoading;
@property(retain) NSURL *movieURL;
- (BOOL)transitioning;
- (id)snapshotWithOriginal:(BOOL)arg1;
- (void)saveTALState;
- (void)setImage:(id)arg1 forIndex:(long long)arg2;
@property(retain) NSImage *stillImage;
@property(retain) FXLayer *effectLayer;
@property(retain) NSString *videoPrompt;
- (BOOL)effectsLoaded;
- (BOOL)finishedLaunchLoading;
- (BOOL)finishedLaunchCameraSetup;
- (void)launchLoadEffects;
- (void)launchAddCameras;
- (void)showTray:(BOOL)arg1;
- (BOOL)isShowingTray;
- (double)trayHeight;
- (void)resetEffect:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateBackdropsCapture;
- (void)_cameraVideoWillStart;
- (void)startBackdropsCapture;
- (void)_backdropsCaptureTimedout;
- (void)_cameraVideoWillStop;
- (void)cancelBackdropsCapture;
- (void)_backdropsCaptureCompleted;
- (void)_backdropsWillStop;
- (void)_backdropsDidStart;
- (void)_clearVideoPrompt;
- (void)_receiveSleepNote:(id)arg1;
- (void)startFlyingAnimationForImage:(id)arg1 duration:(double)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)windowDidChangeScreenProfile:(id)arg1;
- (void)_updateVideoCapture;
@property int cameraStatus;
- (void)cameraControllerCameraChanged:(id)arg1;
@property BOOL videoPaused;
@property BOOL videoRunning;
- (long long)fourUpZoomedIndex;
- (BOOL)zoomedInOnFourUp;
@property(readonly) __weak FourUpLayer *fourUpLayer;
- (void)dealloc;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (void)_rendererPostedFrame;
- (void)awakeFromNib;
- (void)resetFourUpLayer;
- (void)setTransitioning:(BOOL)arg1;
- (void)viewDidChangeBackingProperties;
- (void)_initLayers;
- (void)_setupVideoPrompt;
- (void)setFrame:(struct CGRect)arg1;
- (void)fauxUIElementPerformAction:(id)arg1 action:(id)arg2;
- (struct CGSize)fauxUIElementSize:(id)arg1;
- (struct CGPoint)fauxUIElementPosition:(id)arg1;
- (void)fauxUIElement:(id)arg1 setFocus:(id)arg2;
- (BOOL)isFauxUIElementFocusable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_startDrag;

@end

