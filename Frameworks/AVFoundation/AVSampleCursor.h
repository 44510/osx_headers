//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying>
{
    AVSampleCursorInternal *_sampleCursor;
}

+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg1;
+ (void)initialize;
- (CDStruct_43f4b5b8)currentSampleStorageRange;
- (long long)currentSampleIndexInChunk;
- (CDStruct_0ea41ea9)currentChunkInfo;
- (CDStruct_43f4b5b8)currentChunkStorageRange;
- (id)currentChunkStorageURL;
- (CDStruct_53793daa)currentSampleDependencyInfo;
- (CDStruct_550fdc95)currentSampleSyncInfo;
- (struct opaqueCMFormatDescription *)copyCurrentSampleFormatDescription;
- (CDStruct_1b6d18a9)currentSampleDuration;
- (struct opaqueCMSampleBuffer *)createSampleBufferFromCurrentSampleToEndCursor:(id)arg1 error:(id *)arg2;
- (struct opaqueCMSampleBuffer *)createSampleBufferForCurrentSampleReturningError:(id *)arg1;
- (BOOL)canProvideSampleBuffers;
- (BOOL)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)arg1;
- (BOOL)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)arg1;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)arg1;
- (CDStruct_1b6d18a9)decodeTimeStamp;
- (CDStruct_1b6d18a9)presentationTimeStamp;
- (CDStruct_1b6d18a9)stepByPresentationTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)stepByPresentationTime:(CDStruct_1b6d18a9)arg1 wasPinned:(char *)arg2;
- (CDStruct_1b6d18a9)stepByDecodeTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)stepByDecodeTime:(CDStruct_1b6d18a9)arg1 wasPinned:(char *)arg2;
- (long long)stepInPresentationOrderByCount:(long long)arg1;
- (long long)stepInDecodeOrderByCount:(long long)arg1;
- (struct OpaqueFigSampleCursor *)_figSampleCursor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg1;
- (id)init;

@end

