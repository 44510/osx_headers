//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PAStackshotTask;

@interface PAStackshotThread : NSObject
{
    struct thread_snapshot *thread_snap;
    PAStackshotTask *_task;
    const void *_kernelFrames;
    const void *_userFrames;
    unsigned long long _kernelFrameSize;
    unsigned long long _userFrameSize;
    unsigned long long _bytesUsed;
}

- (unsigned int)powerstatsFlags;
- (BOOL)isDarwinBG;
- (void)_calculateOffsets;
- (unsigned long long)bytesUsedInBuffer;
- (void)iterateFrames:(CDUnknownBlockType)arg1;
- (BOOL)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (id)initWithTask:(id)arg1;
- (id)frameIterator;
- (const void *)firstFrame;
- (unsigned long long)userFramesOffsetFromHeaderStart;
- (unsigned long long)kernelFramesOffsetFromHeaderStart;
@property(readonly) BOOL isFromMicrostackshot;
- (unsigned long long)dispatchQueueId;
- (BOOL)hasDispatchQueue;
- (BOOL)hasKernelContinuation;
- (unsigned long long)userFrameSize;
- (unsigned long long)kernelFrameSize;
- (unsigned long long)_frameSize:(BOOL)arg1;

@end

