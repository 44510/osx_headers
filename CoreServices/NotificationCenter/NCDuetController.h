//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDAttribute, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSSet, NSString;

@interface NCDuetController : NSObject
{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    CDAttribute *_duetAttr;
    NSSet *_predictedValues;
    NSObject<OS_dispatch_source> *_timer;
    double _startInterval;
    unsigned long long _updatesToday;
    unsigned long long _maximumUpdatesPerDay;
}

@property unsigned long long maximumUpdatesPerDay; // @synthesize maximumUpdatesPerDay=_maximumUpdatesPerDay;
- (void).cxx_destruct;
- (void)schedule;
- (unsigned long long)remainingUpdates;
@property(readonly) double endInterval;
- (void)occurredWithValue:(id)arg1;
- (void)stoppedWithValue:(id)arg1;
- (void)startedWithValue:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

