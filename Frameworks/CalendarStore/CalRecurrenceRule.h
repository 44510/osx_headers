//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class CalRecurrenceEnd, NSArray;

@interface CalRecurrenceRule : NSObject <NSCopying>
{
    id _objectID;
    void *_reserved;
    NSArray *_monthsOfTheYear;
    NSArray *_nthWeekDaysOfTheMonth;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheWeek;
    unsigned long long _firstDayOfTheWeek;
    unsigned long long _recurrenceInterval;
    int _recurrenceType;
    CalRecurrenceEnd *_recurrenceEnd;
}

+ (id)recurrenceRuleWithString:(id)arg1;
+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned long long)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
@property(readonly) CalRecurrenceEnd *recurrenceEnd; // @synthesize recurrenceEnd=_recurrenceEnd;
@property(readonly) int recurrenceType; // @synthesize recurrenceType=_recurrenceType;
@property(readonly) unsigned long long recurrenceInterval; // @synthesize recurrenceInterval=_recurrenceInterval;
@property(readonly) unsigned long long firstDayOfTheWeek; // @synthesize firstDayOfTheWeek=_firstDayOfTheWeek;
@property(readonly) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(readonly) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(readonly) NSArray *nthWeekDaysOfTheMonth; // @synthesize nthWeekDaysOfTheMonth=_nthWeekDaysOfTheMonth;
@property(readonly) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 forDayOfTheWeek:(unsigned long long)arg2 forWeekOfTheMonth:(long long)arg3 forMonthsOfTheYear:(id)arg4 end:(id)arg5;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 forMonthsOfTheYear:(id)arg2 end:(id)arg3;
- (id)initYearlyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 forDayOfTheWeek:(unsigned long long)arg2 forWeekOfTheMonth:(long long)arg3 end:(id)arg4;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 forDaysOfTheMonth:(id)arg2 end:(id)arg3;
- (id)initMonthlyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)arg1 forDaysOfTheWeek:(id)arg2 end:(id)arg3;
- (id)initWeeklyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2;
- (id)initDailyRecurrenceWithInterval:(unsigned long long)arg1 end:(id)arg2;
- (id)initRecurrenceWithType:(int)arg1 interval:(unsigned long long)arg2 forDaysOfTheWeek:(id)arg3 forDaysOfTheMonth:(id)arg4 forNthWeekDaysOfTheMonth:(id)arg5 forMonthsOfTheYear:(id)arg6 end:(id)arg7;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (void)setRecurrenceEnd:(id)arg1;

@end

