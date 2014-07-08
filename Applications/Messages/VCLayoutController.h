//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSTimer, OpenGLImageLayer, OpenGLLayerModel, VideoConferenceLayerView;

@interface VCLayoutController : NSObject
{
    VideoConferenceLayerView *_container;
    OpenGLLayerModel *_layerModel;
    BOOL _isPreview;
    BOOL _isFullScreen;
    BOOL _hasPIP;
    BOOL _theatricalLayout;
    BOOL _PIPHiddenByUser;
    BOOL _didMoveLocalLayerBelowBanner;
    BOOL _forceDisablePreviewLabel;
    NSDate *_transitionStartTime;
    NSDate *_AOLFadeOutStartTime;
    NSTimer *_timer;
    NSTimer *_AOLFadeOutTimer;
    NSMutableDictionary *_flipTimers;
    float _PIPScale;
    struct _RectPosition _PIPPosition;
    float _windowStartWidth;
    float _windowEndWidth;
    float _transitionProgress;
    struct CGRect _startPIPFrame;
    struct CGRect _endPIPFrame;
    long long _trackingRectTag;
    long long _vcLayerHit;
    BOOL _mouseInCloseButton;
    BOOL _mouseIsHidden;
    OpenGLImageLayer *_recordingDot;
}

+ (void)showCameraOff:(BOOL)arg1 inLayer:(id)arg2;
+ (void)_showMute:(BOOL)arg1 pause:(BOOL)arg2 off:(BOOL)arg3 stalled:(BOOL)arg4 large:(BOOL)arg5 blackOpacity:(double)arg6 inLayer:(id)arg7;
+ (id)_badgeImage:(id)arg1 atSize:(struct CGSize)arg2 inImageOfSize:(struct CGSize)arg3 atPoint:(struct CGPoint)arg4;
+ (void)_createTextLabel:(id)arg1 layerName:(id)arg2 inLayer:(id)arg3;
+ (struct CGRect)constrainedWindow:(id)arg1 frame:(struct CGRect)arg2 screen:(id)arg3 withContainerSize:(struct CGSize)arg4;
+ (void)_constrainWindow:(id)arg1 frame:(struct CGRect *)arg2 screen:(id)arg3 andContainerSize:(struct CGSize *)arg4;
+ (void)initialize;
- (void)_didHideParticipantStatus:(id)arg1;
- (void)_didShowParticipantStatus:(id)arg1;
- (void)setShowsRecordingDot:(BOOL)arg1 on:(BOOL)arg2;
- (void)scrollWheel:(id)arg1 at:(struct CGPoint)arg2;
- (void)mouseDraggedAt:(struct CGPoint)arg1;
- (void)mouseMovedAt:(struct CGPoint)arg1;
- (void)mouseUpAt:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1 at:(struct CGPoint)arg2;
- (BOOL)_trackMouseDown:(id)arg1 inCloseButtonAt:(struct CGPoint)arg2;
- (void)_movePIPWithStartFrame:(struct CGRect)arg1 baseOffset:(struct CGSize)arg2 useFistCursor:(BOOL)arg3;
- (void)_animatePIPFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)_animateLayer:(id)arg1 from:(struct CGRect)arg2 to:(struct CGRect)arg3;
- (void)_backgroundThreadAnimateLayerFromDictionary:(id)arg1;
- (void)_performMainThreadAnimateLayer:(id)arg1 frame:(struct CGRect)arg2;
- (void)_mainThreadPerformAnimateLayerFromDictionary:(id)arg1;
- (void)_resizePIPWithOriginalSize:(struct CGSize)arg1;
- (void)_updateBannerHitTesting;
- (void)_doBannerHitTest:(struct CGPoint)arg1;
- (void)_setMouseInLayer:(long long)arg1 inCloseButton:(BOOL)arg2;
- (void)_showCloseButton:(BOOL)arg1 rollover:(BOOL)arg2 inLayer:(id)arg3;
- (void)_showOverlay;
- (void)_hideOverlayAndCursorAfterDelay;
- (void)_dontHideOverlay;
- (void)_hideOverlayAndCursor;
- (void)_hideOverlay;
- (void)_addPIPBorder;
- (void)resetCursorRects;
- (struct CGRect)_resizeCornerRect;
- (unsigned int)_autoresizingMask;
- (void)showRemoteParty:(id)arg1 mute:(BOOL)arg2 pause:(BOOL)arg3 stalled:(BOOL)arg4;
- (void)showLocalMute:(BOOL)arg1 pause:(BOOL)arg2 off:(BOOL)arg3 stalled:(BOOL)arg4;
- (BOOL)isPIPHidden;
- (void)setPIPHidden:(BOOL)arg1;
- (void)setPIPHidden:(BOOL)arg1 byUser:(BOOL)arg2;
- (BOOL)canShowHidePIP;
- (void)showRemoteConnectionDoctorLabel:(id)arg1;
- (void)showLocalConnectionDoctorLabel;
- (void)_showConnectionDoctorLabelInLayer:(id)arg1;
- (void)disableBackdropsUpdates;
- (void)removeAllBanners;
- (void)showPreviewLabel:(BOOL)arg1;
- (void)forceDisablePreviewLabel:(BOOL)arg1;
- (void)_changeAOLLabelSize;
- (void)createAOLBadge;
- (void)_createAOLLabel;
- (id)createLayerWithLabel:(id)arg1 fontSize:(double)arg2 name:(id)arg3 margin:(double)arg4 bgSize:(struct CGSize)arg5;
- (void)createWhitePreviewLayerForLocalParticipant:(id)arg1;
- (void)removeCloseButtonForParticipant:(id)arg1;
- (void)createCloseButtonForAuxVideo:(id)arg1;
- (void)createCloseButtonForParticipant:(id)arg1;
- (void)_createCloseButtonForLayer:(id)arg1;
- (void)removeBannerForParticipant:(id)arg1;
- (void)repositionBannerForParticipant:(id)arg1;
- (id)bannerForParticipant:(id)arg1;
- (id)createBannerForParticipant:(id)arg1;
- (id)createLayerForParticipant:(id)arg1 appearance:(int)arg2 atIndex:(unsigned long long)arg3 isAuxVideo:(BOOL)arg4 isReplacement:(BOOL)arg5;
- (id)_createVCLayerNamed:(id)arg1 vcPartyID:(id)arg2 resizes:(BOOL)arg3 appearance:(int)arg4 atIndex:(unsigned long long)arg5 isLocal:(BOOL)arg6 isAuxVideo:(BOOL)arg7 isReplacement:(BOOL)arg8;
- (BOOL)startRemoteLayerFlip:(int)arg1;
- (BOOL)startLocalLayerFlip;
- (BOOL)_startLayerFlip:(id)arg1;
- (void)_stepLayerFlip:(id)arg1;
- (void)removeRemoteVCLayer:(id)arg1 fullScreenAnimationTime:(double)arg2;
- (void)removeRemoteVCLayer:(id)arg1 fullScreenAnimationTime:(double)arg2 willResultInOneWayChat:(BOOL)arg3;
- (void)animateAdditionOfRemoteLayerAtIndex:(unsigned long long)arg1 resizeTime:(double)arg2;
- (void)_runTheatricalTransition:(unsigned int)arg1 snapToVideo:(BOOL)arg2 auxVideoMode:(int)arg3 fullScreenAnimationTime:(double)arg4;
- (void)_runTheatricalTransition:(unsigned int)arg1 snapToVideo:(BOOL)arg2 auxVideoMode:(int)arg3 fullScreenAnimationTime:(double)arg4 sizePIPToWindow:(BOOL)arg5;
- (void)_updateCursorTracking;
- (void)_getAspectTransitionForLayers:(int)arg1 ofWidth:(double)arg2 auxVideoMode:(int)arg3 containerStart:(struct CGSize *)arg4 end:(struct CGSize *)arg5 windowStart:(struct CGRect *)arg6 end:(struct CGRect *)arg7;
- (void)_fadeOutAOLBadge;
- (void)containerDidEndLiveResize;
- (void)updateLayout;
- (struct CGRect)_banner:(id)arg1 frameInVCLayer:(id)arg2;
- (struct CGRect)_theoreticalPIPFrameForLayers:(int)arg1 inBounds:(struct CGRect)arg2 auxVideoMode:(int)arg3;
- (struct CGRect)_PIPFrameForBounds:(struct CGRect)arg1;
- (void)_containerDidResize:(id)arg1;
- (void)shouldFullscreenPillarbox:(char *)arg1 letterbox:(char *)arg2 aspect:(double *)arg3 forSize:(struct CGSize)arg4;
- (void)_windowBackingPropertiesChanged:(id)arg1;
- (struct CGSize)standardWindowSize;
- (void)fitWindowToLocalBannerHorizOnly:(BOOL)arg1;
- (void)freezeFrame;
- (BOOL)isFullScreen;
- (void)setNotFullScreen:(double)arg1;
- (void)setFullScreen;
- (void)_setFullScreen:(BOOL)arg1 layerWidth:(double)arg2;
- (void)setHasPIP;
- (void)setPreview:(BOOL)arg1 snapToVideo:(BOOL)arg2;
- (struct CGSize)_windowSizeForRemoteLayers:(int)arg1 ofWidth:(double)arg2;
- (double)_transitionProgressReverse:(BOOL)arg1;
- (BOOL)isPreview;
- (double)_videoWidthToSnapWithMin:(double)arg1;
- (double)currentLayerWidth;
- (struct _RectPosition)PIPPosition;
- (double)PIPScale;
- (id)container;
- (void)dealloc;
- (void)clearContainer;
- (void)stopAOLBadgeFadeOut;
- (void)stopPreviewTransition;
- (void)setLayerModel:(id)arg1;
- (id)layerModel;
- (id)initWithContainer:(id)arg1 videoOut:(BOOL)arg2 videoIn:(BOOL)arg3;
- (void)_syncScalePrefRead:(BOOL)arg1;
- (void)_syncPositionPrefsRead:(BOOL)arg1;

@end

