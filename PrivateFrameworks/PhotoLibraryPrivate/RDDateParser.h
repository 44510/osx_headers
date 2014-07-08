//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCalendar, NSDateComponents, NSMutableCharacterSet, NSNumber, NSScanner, NSString, NSTimeZone;

@interface RDDateParser : NSObject
{
    NSString *m_parseString;
    NSScanner *m_dateScanner;
    int m_parseStatus;
    NSDateComponents *m_dateComponents;
    NSNumber *m_amPmIndicator;
    NSTimeZone *m_timeZone;
    NSCalendar *m_gregorianCal;
    NSArray *m_monthNames;
    NSArray *m_monthAbbrNames;
    NSArray *m_amPmNames;
    NSMutableCharacterSet *m_dateSeperatorCharSet;
    NSMutableCharacterSet *m_timeSeperatorCharSet;
    unsigned long long m_currentYear;
    unsigned long long m_currentCentury;
}

+ (void)testParsing;
- (void).cxx_destruct;
- (id)highestDateUsingTimeZone:(id)arg1;
- (id)highestDate;
- (id)lowestDateUsingTimeZone:(id)arg1;
- (id)lowestDate;
- (BOOL)isDateRange;
- (id)timeZone;
- (id)amPmIndicator;
- (id)second;
- (id)minute;
- (id)hour;
- (id)day;
- (id)month;
- (id)year;
- (id)dateComponents;
- (int)largestComponent;
- (int)status;
- (id)parseString;
- (int)parseTimeString:(id)arg1;
- (int)parseDateString:(id)arg1;
- (int)parseTimestampString:(id)arg1;
- (void)parseTimeStamp;
- (void)parseTime;
- (void)parseDate;
- (void)parseTimeZone;
- (id)scanForAmPmIndicator;
- (BOOL)scanMonthName;
- (void)resetTimeComponents;
- (void)resetDateComponents;
- (void)resetToParseString:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (id)init;

@end
