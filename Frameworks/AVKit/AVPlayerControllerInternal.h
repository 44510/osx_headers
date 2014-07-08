//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVKit/AVPlayerController.h>

@class AVFragmentedMovieMinder, AVPlayer, AVValueTiming, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVPlayerControllerInternal : AVPlayerController
{
    unsigned int _jKeyDown:1;
    unsigned int _kKeyDown:1;
    unsigned int _lKeyDown:1;
    id _timeObserverToken;
    id _playerItemTimeJumpedObserver;
    id _playerItemDidPlayToEndTimeObserver;
    id _systemWillSleepObserver;
    BOOL _looping;
    long long _actionAtItemEnd;
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _isSeeking;
    BOOL _pendingSeek;
    CDStruct_1b6d18a9 _seekToTime;
    CDStruct_1b6d18a9 _toleranceBefore;
    CDStruct_1b6d18a9 _toleranceAfter;
    BOOL _isScanningForward;
    BOOL _isScanningBackward;
    unsigned long long _scanningCount;
    double _preScanningRate;
    AVFragmentedMovieMinder *_fragmentedMovieMinder;
    BOOL _isSettingRateWithThrottling;
    double _rateBeforeSetRateWithThrottlingBegan;
    NSObject<OS_dispatch_queue> *_setRateWithThrottlingQueue;
    BOOL _isActuallySettingRateWithThrottling;
    BOOL _pendingSetRateWithThrottling;
    double _setToRate;
    BOOL _ignoreBackwardAndForwardScans;
    unsigned int _shouldPlayWhenLikelyToKeepUp:1;
    BOOL _scrubbing;
    BOOL _composable;
    BOOL _hasProtectedContent;
    BOOL _preventingIdleSystemSleep;
    BOOL _preventingIdleDisplaySleep;
    BOOL _disablingAutomaticTermination;
    AVPlayer *_player;
    AVValueTiming *_timing;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
}

+ (id)keyPathsForValuesAffectingShouldDisableAutomaticTermination;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingShouldPreventIdleSystemSleep;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
@property(getter=isDisablingAutomaticTermination) BOOL disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(getter=isPreventingIdleDisplaySleep) BOOL preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(getter=isPreventingIdleSystemSleep) BOOL preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(retain) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property BOOL hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(getter=isComposable) BOOL composable; // @synthesize composable=_composable;
@property(retain) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property(getter=isScrubbing) BOOL scrubbing; // @synthesize scrubbing=_scrubbing;
@property(retain) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)shouldDisableAutomaticTermination;
- (BOOL)shouldPreventIdleDisplaySleep;
- (BOOL)shouldPreventIdleSystemSleep;
- (BOOL)preventsIdleSleep;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)scanningDelays;
- (float)preferredRate;
- (void)updateTiming;
- (void)seekChapterBackward:(id)arg1;
- (BOOL)canSeekChapterBackward;
- (void)seekChapterForward:(id)arg1;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (BOOL)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (BOOL)canSeekFrameForward;
- (void)seekToEnd:(id)arg1;
- (BOOL)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (BOOL)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)_updateScanningBackwardRate;
- (void)beginScanningBackward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)_updateScanningForwardRate;
- (void)beginScanningForward:(id)arg1;
- (void)scanForward:(id)arg1;
- (BOOL)canScanForward;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)actuallySeekToTime;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)seekToTime:(double)arg1;
- (BOOL)isSeeking;
- (BOOL)canSeek;
- (BOOL)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (BOOL)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasContentChapters;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (id)loadedTimeRanges;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (struct CGSize)contentDimensions;
- (double)contentDuration;
- (BOOL)hasContent;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setLooping:(BOOL)arg1;
- (BOOL)isLooping;
- (void)togglePlayback:(id)arg1;
- (BOOL)canTogglePlayback;
- (void)pause:(id)arg1;
- (BOOL)canPause;
- (void)autoplay:(id)arg1;
- (void)play:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (void)actuallySetRateWithThrottling;
- (void)setRateWithThrottling:(double)arg1;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)seekableTimeRanges;
- (id)error;
- (long long)status;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (id)_playableMediaSelectionOptionsForMediaCharacteristic:(id)arg1;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (id)_extendedLanguageTagsForOptions:(id)arg1;
- (id)_pushSystemLanguageToTop:(id)arg1;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (id)_legibleAuxillaryOptions;
- (id)_auxillaryClosedCaptionOptions;
- (id)_auxillarySDHOptions;
- (id)_auxillarySubtitleOptions;
- (id)_easyToReadClosedCaptionOptions;
- (id)_easyToReadSDHOptions;
- (id)_easyToReadSubtitleOptions;
- (id)_legibleEasyToReadOptions;
- (id)_closedCaptionOptions;
- (id)_SDHOptions;
- (id)_subtitleOptions;
- (id)_auxillaryAudioOptions;
- (id)_DVSAudioOptions;
- (id)_mainAudioOptions;
- (id)_languageCodesForOptions:(id)arg1;
- (id)_mediaSelectionOptionForLanguageCode:(id)arg1 options:(id)arg2;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)currentLegibleMediaSelectionOption;
- (id)legibleMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (id)currentAudioMediaSelectionOption;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)audioMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (BOOL)_shouldHandleSwipeWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (BOOL)_shouldHandleBeginGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (BOOL)_shouldHandleScrollWheelWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (long long)_handleJKLWithEvent:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;

@end

