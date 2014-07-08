//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (CalUIDateAdditions)
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;
- (BOOL)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;
- (BOOL)isBeforeDate:(id)arg1;
- (BOOL)isAfterDate:(id)arg1;
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;
- (long long)secondInCalendar:(id)arg1;
- (long long)minuteInCalendar:(id)arg1;
- (long long)hourInCalendar:(id)arg1;
- (long long)weekdayInCalendar:(id)arg1;
- (long long)dayInCalendar:(id)arg1;
- (long long)weekInCalendar:(id)arg1;
- (long long)monthInCalendar:(id)arg1;
- (long long)yearInCalendar:(id)arg1;
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;
- (id)timeOnlyComponentsInCalendar:(id)arg1;
- (id)dateOnlyComponentsInCalendar:(id)arg1;
- (id)allComponentsInCalendar:(id)arg1;
@end
