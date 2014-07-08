//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PASampleTimeSeriesDataStore;

@interface PAPerfLoggingOperation : NSObject <NSCoding>
{
    NSString *_operationName;
    NSString *_operationCategory;
    NSString *_processName;
    int _pid;
    NSMutableArray *_intervalList;
    NSMutableDictionary *_dictionaryOfIntervalTypesEventArrays;
    NSMutableArray *_intervalTypesSeenOrder;
    double _startTimeInSec;
    double _endTimeInSec;
    unsigned long long _serialNumber;
    NSDictionary *_intervalDataDictionary;
    NSMutableDictionary *_contextProcessingConfigurationsForAllIntervalTypes;
    PASampleTimeSeriesDataStore *_sampleTimeSeriesDataStore;
    NSDictionary *_fsDSMResults;
}

+ (id)keyForProcessName:(id)arg1 operationCategory:(id)arg2 andOperationName:(id)arg3;
+ (unsigned long long)_nextSerialNumber;
@property(retain) NSDictionary *fsDSMResults; // @synthesize fsDSMResults=_fsDSMResults;
@property(readonly) PASampleTimeSeriesDataStore *sampleTimeSeriesDataStore; // @synthesize sampleTimeSeriesDataStore=_sampleTimeSeriesDataStore;
@property(readonly) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly) double endTimeInSec; // @synthesize endTimeInSec=_endTimeInSec;
@property(readonly) double startTimeInSec; // @synthesize startTimeInSec=_startTimeInSec;
@property(copy, nonatomic) NSString *operationCategory; // @synthesize operationCategory=_operationCategory;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addFSDataStreamForOperationDuration:(id)arg1;
- (void)sampleNow;
- (void)addProcessNameToSample:(id)arg1;
- (void)disableSampling;
- (void)enableSampling;
- (BOOL)setContextProcessingConfiguration:(id)arg1 forIntervalType:(id)arg2;
- (id)stringForIntervalEventTimeline;
- (void)markIntervalTransition:(id)arg1 transitionType:(int)arg2 atCGSTimestampInSec:(double)arg3 withContext:(id)arg4;
- (id)operationKey;
- (void)logIntervalData:(BOOL)arg1;
- (id)getIntervalDataDictionary;
- (void)_addResultsForIntervalsToResultsDict:(id)arg1;
- (id)_processIntervalEventStream:(id)arg1 withContextProcessingConfiguration:(id)arg2;
- (void)dealloc;
- (id)initWithProcessName:(id)arg1 andOperationCategory:(id)arg2 andOperationName:(id)arg3 andPid:(int)arg4;
- (BOOL)markOperationEndTruncatedByDuration:(double)arg1;
- (BOOL)_markOperationStart;
- (double)operationDurationInMs;

@end

