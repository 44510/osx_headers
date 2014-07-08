//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "NSUserInterfaceValidations.h"

@class AVPlayer, NSError;

@interface AVPlayerController : NSResponder <NSUserInterfaceValidations>
{
    AVPlayer *_player;
    long long _status;
    NSError *_error;
}

+ (void)initialize;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long status; // @synthesize status=_status;
@property(readonly) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)currentLegibleMediaSelectionOption;
- (id)legibleMediaSelectionOptions;
- (BOOL)hasLegibleMediaSelectionOptions;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)currentAudioMediaSelectionOption;
- (id)audioMediaSelectionOptions;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasMediaSelectionOptions;
- (id)timing;
- (void)seekChapterBackward:(id)arg1;
- (BOOL)canSeekChapterBackward;
- (void)seekChapterForward:(id)arg1;
- (BOOL)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (id)contentChapters;
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
- (void)beginScanningBackward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (BOOL)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)scanForward:(id)arg1;
- (BOOL)canScanForward;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (BOOL)isSeeking;
- (BOOL)canSeek;
- (id)metadata;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasContentChapters;
- (BOOL)hasEnabledVideo;
- (BOOL)hasEnabledAudio;
- (id)seekableTimeRanges;
- (id)loadedTimeRanges;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (struct CGSize)contentDimensions;
- (void)setContentDuration:(double)arg1;
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
- (void)setCanPause:(BOOL)arg1;
- (BOOL)canPause;
- (void)autoplay:(id)arg1;
- (void)play:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (void)setRateWithThrottling:(double)arg1;
- (void)setRate:(double)arg1;
- (double)rate;
- (id)initWithPlayer:(id)arg1;

@end

