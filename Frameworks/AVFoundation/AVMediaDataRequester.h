//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVMediaDataRequester : NSObject
{
    id <AVMediaDataRequesterConsumer> _mediaDataConsumer;
    struct dispatch_queue_s *_requestQueue;
    CDUnknownBlockType _requestBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, nonatomic) struct dispatch_queue_s *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)_requestMediaDataIfReady;
- (void)invalidate;
- (void)startRequestingMediaData;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(struct dispatch_queue_s *)arg2 requestBlock:(CDUnknownBlockType)arg3;

@end

