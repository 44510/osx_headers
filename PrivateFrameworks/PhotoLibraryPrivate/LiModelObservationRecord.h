//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface LiModelObservationRecord : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activityByThread;
    NSMutableArray *_activityOfInterest;
    unsigned long long _readThread;
    unsigned long long _writeThread;
}

@property(readonly) unsigned long long writeThread; // @synthesize writeThread=_writeThread;
@property(readonly) unsigned long long readThread; // @synthesize readThread=_readThread;
- (void).cxx_destruct;
- (id)signature;
- (id)description;
- (void)collectHeader:(id)arg1 byLocation:(id)arg2 in:(id)arg3;
- (void)appendHeadersByLocation:(id)arg1 to:(id)arg2;
- (void)addActivityOfInterest:(id)arg1 threadId:(unsigned long long)arg2;
- (void)recordSetLocalProperties:(unsigned long long)arg1;
- (void)recordWrite:(id)arg1 threadId:(unsigned long long)arg2;
- (void)recordRead:(id)arg1 threadId:(unsigned long long)arg2;
- (id)init;

@end

