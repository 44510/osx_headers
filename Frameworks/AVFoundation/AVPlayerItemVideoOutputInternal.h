//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference;

@interface AVPlayerItemVideoOutputInternal : NSObject
{
    struct OpaqueCMTimebase *timebase;
    double currentRate;
    struct OpaqueFigVisualContext *vc;
    AVWeakReference *playerItemWeakReference;
    struct OpaqueVTPixelBufferConformer *pixelBufferConformer;
    id <AVPlayerItemOutputPullDelegate> delegate;
    struct dispatch_queue_s *stateQueue;
    struct dispatch_queue_s *delegateQueue;
    struct dispatch_source_s *delegateWakeupSource;
    double advanceWakeUpInterval;
    BOOL advanceWakeUpIntervalIsValid;
    CDStruct_1b6d18a9 wakeUpImageTime;
    BOOL suppressesPlayerRendering;
    BOOL shouldTagBuffersWithInfo;
}

@end
