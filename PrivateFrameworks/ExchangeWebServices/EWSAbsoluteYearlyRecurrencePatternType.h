//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

@interface EWSAbsoluteYearlyRecurrencePatternType : EWSRecurrencePatternBaseType
{
    long long _DayOfMonth;
    int _Month;
}

+ (id)definition;
@property(nonatomic) int Month; // @synthesize Month=_Month;
@property(nonatomic) long long DayOfMonth; // @synthesize DayOfMonth=_DayOfMonth;
- (id)description;

@end
