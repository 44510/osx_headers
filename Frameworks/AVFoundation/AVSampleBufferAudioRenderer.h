//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVMediaDataRequesterConsumer.h"
#import "AVQueuedSampleBufferRendering.h"
#import "AVQueuedSampleBufferRenderingInternal.h"

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>
{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

+ (id)sampleBufferAudioRenderer;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (BOOL)setRenderSynchronizer:(id)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (BOOL)isMuted;
- (void)setMuted:(BOOL)arg1;
- (id)scheduledAudioParameters;
- (void)setScheduledAudioParameters:(id)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_triggerMediaRequestCallback;
- (int)_initializeTimebase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

