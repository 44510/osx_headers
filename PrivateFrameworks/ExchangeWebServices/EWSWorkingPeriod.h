//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface EWSWorkingPeriod : NSObject
{
    NSIndexSet *_DayOfWeek;
    long long _StartTimeInMinutes;
    long long _EndTimeInMinutes;
}

+ (id)definition;
@property(nonatomic) long long EndTimeInMinutes; // @synthesize EndTimeInMinutes=_EndTimeInMinutes;
@property(nonatomic) long long StartTimeInMinutes; // @synthesize StartTimeInMinutes=_StartTimeInMinutes;
@property(copy, nonatomic) NSIndexSet *DayOfWeek; // @synthesize DayOfWeek=_DayOfWeek;
- (void)dealloc;

@end

