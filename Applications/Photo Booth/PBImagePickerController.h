//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, PBCountdownView, PBMainWindow, PBTabViewWithGradientBackground, PBTrayView, PBView;

@interface PBImagePickerController : NSObject
{
    PBView *ibPBView;
    PBMainWindow *ibMainWindow;
    PBCountdownView *ibCountdownView;
    id ibEffectsButtonController;
    NSButton *ibSnapshotButton;
    PBTabViewWithGradientBackground *ibControllerTabView;
    PBTrayView *ibTrayView;
    id _delegate;
    id _sliderWindow;
    BOOL _userActionDuringPhotoDevelopment;
}

- (void).cxx_destruct;
- (BOOL)canTakeSnapshot;
- (BOOL)canShowLastEffect;
- (BOOL)canShowEffects;
- (BOOL)canShowPicture;
- (BOOL)cameraStatus;
- (BOOL)effectsLoaded;
- (void)_userActionDuringDevelopmentNotification:(id)arg1;
- (void)resetEffect:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)stillImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)sendPBEvent:(id)arg1;
- (void)handlePictureDeveloped;
- (void)handlePictureDidRecord:(id)arg1;
- (void)redisplayFourUpIfNeeded;
- (void)flip;
- (void)showAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)pictureIsLive;
- (BOOL)isViewingMosaic;
- (void)startLiveVideo;
- (id)effectsButtonController;
- (void)dealloc;
- (void)awakeFromNib;
- (void)resetBackground:(id)arg1;
- (void)switchToMosaic;
@property(readonly) long long pageCount;
@property long long mosaicPage;
- (void)goToPreviousNextEffectPage:(BOOL)arg1;
- (void)switchToLastEffect;
- (void)switchToVideo;
- (void)switchToStillView;
- (float)effectsButtonAnimationDuration;
- (void)setEffectsButtonAnimationDuration:(float)arg1;
- (void)pbview:(id)arg1 compositionChanged:(id)arg2;
- (void)pbview:(id)arg1 pageChanged:(long long)arg2;
- (void)pbview:(id)arg1 viewModeChanged:(int)arg2;
- (void)pbview:(id)arg1 playbackChanged:(BOOL)arg2;
- (void)_updateEffectsButton;
- (void)_forceDeactivationOfEffectsButton;
- (void)_performRequestCanceller;
- (void)cameraStatusDidChange:(int)arg1;

@end
