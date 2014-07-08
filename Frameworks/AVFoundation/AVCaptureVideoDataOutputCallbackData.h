//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCaptureConnection, AVCaptureVideoDataOutput;

@interface AVCaptureVideoDataOutputCallbackData : NSObject
{
    AVCaptureVideoDataOutput *_output;
    AVCaptureConnection *_connection;
    struct opaqueCMBufferQueue *_bufferQueue;
}

+ (id)callbackDataWithOutput:(id)arg1 connection:(id)arg2;
- (id)connection;
- (id)output;
- (struct opaqueCMBufferQueue *)bufferQueue;
- (void)finalize;
- (void)dealloc;
- (id)initWithOutput:(id)arg1 connection:(id)arg2;

@end

