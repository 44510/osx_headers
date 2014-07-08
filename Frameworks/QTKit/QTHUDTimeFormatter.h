//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@interface QTHUDTimeFormatter : NSFormatter
{
    struct QTHUDTimeFormatterAuxStorage *_aux;
}

+ (void)initialize;
- (void)setNegativeSuffix:(id)arg1;
- (id)negativeSuffix;
- (void)setNegativePrefix:(id)arg1;
- (id)negativePrefix;
- (void)setPositiveSuffix:(id)arg1;
- (id)positiveSuffix;
- (void)setPositivePrefix:(id)arg1;
- (id)positivePrefix;
- (void)setNonfiniteSymbol:(id)arg1;
- (id)nonfiniteSymbol;
- (void)setDecimalSeparator:(id)arg1;
- (id)decimalSeparator;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (unsigned long long)maximumFractionDigits;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (unsigned long long)minimumFractionDigits;
- (void)setMaximumIntegerDigits:(unsigned long long)arg1;
- (unsigned long long)maximumIntegerDigits;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (unsigned long long)minimumIntegerDigits;
- (void)setOptionalComponents:(id)arg1;
- (id)optionalComponents;
- (void)setRequiredComponents:(id)arg1;
- (id)requiredComponents;
- (void)setDigitGroupingSeparator:(id)arg1;
- (id)digitGroupingSeparator;
- (void)setUsesDigitGroupingSeparator:(BOOL)arg1;
- (BOOL)usesDigitGroupingSeparator;
- (void)setComponentOrder:(unsigned long long)arg1;
- (unsigned long long)componentOrder;
- (void)setComponentSeparator:(id)arg1;
- (id)componentSeparator;
- (void)setShowsSignInAllComponents:(BOOL)arg1;
- (BOOL)showsSignInAllComponents;
- (void)setMaximum:(id)arg1;
- (id)maximum;
- (void)setMinimum:(id)arg1;
- (id)minimum;
- (void)setLocale:(id)arg1;
- (id)locale;
- (double)timeIntervalFromString:(id)arg1;
- (CDStruct_900afa40)QTTimeFromString:(id)arg1;
- (CDStruct_1b6d18a9)CMTimeFromString:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)stringFromQTTime:(CDStruct_900afa40)arg1;
- (id)stringFromCMTime:(CDStruct_1b6d18a9)arg1;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (struct __QTTimeFormatter *)_QTTimeFormatter;

@end

