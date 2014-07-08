//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QTImageConsumer.h"

@class NSString, QTImageBufferQueue;

__attribute__((visibility("hidden")))
@interface QTMovieVideoProviderImageConsumer : NSObject <QTImageConsumer>
{
    struct __CFRunLoopSource *_timer;
    QTImageBufferQueue *_queue;
    int _mutex;
    unsigned long long _nextTime;
}

+ (void)initialize;
- (void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
- (void)setImageBuffer:(struct __CVBuffer *)arg1 forHostTime:(unsigned long long)arg2;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (struct __CVBuffer *)copyCurrentImageBuffer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

