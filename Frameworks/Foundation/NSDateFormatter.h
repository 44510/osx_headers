//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSArray, NSCalendar, NSDate, NSLocale, NSMutableDictionary, NSString, NSTimeZone;

@interface NSDateFormatter : NSFormatter
{
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter *_formatter;
    unsigned long long _counter;
    struct dispatch_semaphore_s *_lock;
    unsigned long long _behavior;
}

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (void)initialize;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;
+ (unsigned long long)defaultFormatterBehavior;
- (void)_setUsesCharacterDirection:(BOOL)arg1;
- (BOOL)_usesCharacterDirection;
@property BOOL doesRelativeDateFormatting;
@property long long formattingContext;
@property(copy) NSDate *gregorianStartDate;
@property(copy) NSArray *shortStandaloneQuarterSymbols;
@property(copy) NSArray *standaloneQuarterSymbols;
@property(copy) NSArray *shortQuarterSymbols;
@property(copy) NSArray *quarterSymbols;
@property(copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property(copy) NSArray *shortStandaloneWeekdaySymbols;
@property(copy) NSArray *standaloneWeekdaySymbols;
@property(copy) NSArray *veryShortWeekdaySymbols;
@property(copy) NSArray *veryShortStandaloneMonthSymbols;
@property(copy) NSArray *shortStandaloneMonthSymbols;
@property(copy) NSArray *standaloneMonthSymbols;
@property(copy) NSArray *veryShortMonthSymbols;
@property(copy) NSArray *longEraSymbols;
@property(copy) NSString *PMSymbol;
@property(copy) NSString *AMSymbol;
@property(copy) NSArray *shortWeekdaySymbols;
@property(copy) NSArray *weekdaySymbols;
@property(copy) NSArray *shortMonthSymbols;
@property(copy) NSArray *monthSymbols;
@property(copy) NSArray *eraSymbols;
@property(copy) NSDate *defaultDate;
@property(copy) NSDate *twoDigitStartDate;
@property(getter=isLenient) BOOL lenient;
@property(copy) NSCalendar *calendar;
@property(copy) NSTimeZone *timeZone;
- (void)_setIsLenient:(BOOL)arg1;
- (void)_setDateFormat:(id)arg1;
- (id)_dateFormat;
@property(copy) NSString *dateFormat;
@property unsigned long long formatterBehavior;
@property BOOL generatesCalendarDates;
@property(copy) NSLocale *locale;
@property unsigned long long timeStyle;
@property unsigned long long dateStyle;
- (id)dateFromString:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 range:(inout struct _NSRange *)arg3 error:(out id *)arg4;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)_locale_forOldMethods;
- (id)_timeZone_forOldMethods;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_reset;
- (id)init;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_clearFormatter;
- (BOOL)allowsNaturalLanguage;
- (id)initWithDateFormat:(id)arg1 allowNaturalLanguage:(BOOL)arg2;

@end
