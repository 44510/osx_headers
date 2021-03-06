//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRAssetPlayer.h>

#import "AVPlayerItemOutputPullDelegate.h"
#import "MRAssetPlayerTimeSupport.h"
#import "MRAudioPlayer.h"

@class AVAssetReader, AVAssetReaderTrackOutput, NSObject<OS_dispatch_semaphore>, NSString;

@interface MRAssetPlayerMovieForExport : MRAssetPlayer <MRAssetPlayerTimeSupport, MRAudioPlayer, AVPlayerItemOutputPullDelegate>
{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    double _timeLimitForCurrentImage;
    struct opaqueCMSampleBuffer *_nextSampleBuffer;
    double _nextSampleBufferTimestamp;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    unsigned char _orientation;
    BOOL _isLoaded;
    BOOL _isPlaying;
    BOOL _isMuted;
    double _startTime;
    double _duration;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _volume;
}

@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)_posterImage:(BOOL)arg1;
- (id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(CDStruct_489f4f2f)arg2;
- (void)loadForTime:(double)arg1;
@property(nonatomic) double time;
- (void)dealloc;
- (id)initWithPath:(id)arg1 size:(struct CGSize)arg2 master:(id)arg3 andOptions:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

