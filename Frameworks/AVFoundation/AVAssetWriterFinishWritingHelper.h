//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterHelper.h>

@class AVWeakReference;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper
{
    id <AVAssetWriterFinishWritingHelperDelegate> _delegate;
    struct OpaqueFigAssetWriter *_figAssetWriter;
    struct dispatch_queue_s *_figAssetWriterAccessQueue;
    AVWeakReference *_weakReferenceToSelf;
}

- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (long long)status;
- (void)cancelWriting;
- (void)finishOperationCompletedSuccessfully:(BOOL)arg1 withError:(id)arg2;
- (void)performFinishOperation;
- (void)finalize;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 figAssetWriter:(struct OpaqueFigAssetWriter *)arg2 delegate:(id)arg3;

@end

