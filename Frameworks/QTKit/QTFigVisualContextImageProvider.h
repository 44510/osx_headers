//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QTFigVisualContextImageProviderInternal;

__attribute__((visibility("hidden")))
@interface QTFigVisualContextImageProvider : NSObject
{
    QTFigVisualContextImageProviderInternal *_internal;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setImageConsumer:(id)arg1;
- (id)imageConsumer;
- (void)setTimebase:(struct OpaqueCMTimebase *)arg1;
- (struct OpaqueCMTimebase *)timebase;
- (struct OpaqueFigVisualContext *)visualContext;
- (void)finalize;
- (void)dealloc;
- (void)invalidate;
- (id)initWithVisualContext:(struct OpaqueFigVisualContext *)arg1;
- (id)init;
- (void)_updateLatencyFromAttributes:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_testAndResetNeedToFlushOnNextFrame;
- (void)_markNeedToFlushOnNextFrameNoLock;
- (id)_data;

@end

