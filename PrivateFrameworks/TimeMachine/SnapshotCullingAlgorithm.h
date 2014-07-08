//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SnapshotCullingAlgorithm : NSObject
{
    double _hourlyInterval;
    double _dailyInterval;
    double _weeklyInterval;
    double _timeBlur;
}

@property double timeBlur; // @synthesize timeBlur=_timeBlur;
@property double weeklyInterval; // @synthesize weeklyInterval=_weeklyInterval;
@property double dailyInterval; // @synthesize dailyInterval=_dailyInterval;
@property double hourlyInterval; // @synthesize hourlyInterval=_hourlyInterval;
- (id)computeSortedDatesToCull:(id)arg1;
- (BOOL)isAtLeastOneWeekApart:(id)arg1 and:(id)arg2;
- (BOOL)isAtLeastOneDayApart:(id)arg1 and:(id)arg2;
- (BOOL)agedPastWeeklyInterval:(id)arg1 and:(id)arg2;
- (BOOL)agedPastDailyInterval:(id)arg1 and:(id)arg2;
- (BOOL)agedPastHourlyInterval:(id)arg1 and:(id)arg2;
- (id)initWithIntervalsHourly:(double)arg1 daily:(double)arg2 weekly:(double)arg3;

@end

