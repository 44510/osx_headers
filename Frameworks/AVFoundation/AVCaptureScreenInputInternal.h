//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureInputPort, MediaIOGraphNodeDescription, NSArray, NSDictionary;

@interface AVCaptureScreenInputInternal : NSObject
{
    MediaIOGraphNodeDescription *inputUnitNodeDescription;
    AVCaptureInputPort *videoPort;
    CDStruct_1b6d18a9 minFrameDuration;
    unsigned int displayID;
    struct CGRect cropRect;
    double scaleFactor;
    BOOL scaleFactorIsSetByClient;
    BOOL capturesMouseClicks;
    BOOL capturesCursor;
    int captureTimeScale;
    BOOL removesDuplicateFrames;
    int graphicsSubsystemErrorStatus;
    NSDictionary *pixelBufferAttributesFromSession;
    NSArray *outputCodecTypesFromSession;
    CDStruct_1b6d18a9 minFrameDurationFromSession;
    struct OpaqueCMClock *clock;
}

@end

