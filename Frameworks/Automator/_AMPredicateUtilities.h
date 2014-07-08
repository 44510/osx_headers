//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCalendar, NSDate;

@interface _AMPredicateUtilities : NSObject
{
    NSCalendar *_calendar;
    NSDate *_currentDate;
}

+ (id)byteCountForPredicate:(id)arg1;
+ (unsigned long long)byteUnitForPredicate:(id)arg1;
+ (unsigned long long)calendarUnitForPredicate:(id)arg1;
+ (id)valueForPredicate:(id)arg1;
+ (unsigned long long)countForPredicate:(id)arg1;
+ (id)keyPathForPredicate:(id)arg1;
+ (unsigned long long)typeForPredicate:(id)arg1;
+ (unsigned long long)_typeByInspectionForPredicate:(id)arg1;
+ (id)predicateUtilities;
@property(retain) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)predicateForBytesWithKeyPath:(id)arg1 type:(unsigned long long)arg2 count:(unsigned long long)arg3 unit:(unsigned long long)arg4;
- (id)predicateForTimeIntervalWithKeyPath:(id)arg1 type:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)predicateWithKeyPath:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;
- (id)isThisWeekPredicateWithKeyPath:(id)arg1;
- (id)isTodayPredicateWithKeyPath:(id)arg1;
- (id)predicateWithKeyPath:(id)arg1 isBeforeDate:(id)arg2;
- (id)predicateWithKeyPath:(id)arg1 isAfterDate:(id)arg2;
- (id)predicateWithKeyPath:(id)arg1 isOnDate:(id)arg2;
- (id)predicateWithKeyPath:(id)arg1 isNotWithinCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(BOOL)arg4;
- (id)predicateWithKeyPath:(id)arg1 isWithinCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(BOOL)arg4;
- (id)predicateWithKeyPath:(id)arg1 isOnDayOffsetByCount:(unsigned long long)arg2 calendarUnits:(unsigned long long)arg3 isForPastDate:(BOOL)arg4;
- (id)convertPredicateToScriptingBridgeCompatiblePredicate:(id)arg1;
- (id)convertPredicateToYearlessSearchElement:(id)arg1 withProperty:(id)arg2 withLabel:(id)arg3 withKey:(id)arg4;
- (BOOL)_getDatesForPredicate:(id)arg1 startDate:(id *)arg2 endDate:(id *)arg3;
- (id)_getDateAtMidnightBeginningTheDayForPredicate:(id)arg1;
- (long long)searchComparisonForPredicate:(id)arg1;
- (void)dealloc;

@end

