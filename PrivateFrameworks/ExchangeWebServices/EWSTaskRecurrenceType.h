//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSRecurrenceRangeBaseType, EWSTaskRecurrencePatternBaseType;

@interface EWSTaskRecurrenceType : NSObject
{
    EWSTaskRecurrencePatternBaseType *_RecurrencePattern;
    EWSRecurrenceRangeBaseType *_RecurrenceRange;
}

+ (id)definition;
@property(retain, nonatomic) EWSRecurrenceRangeBaseType *RecurrenceRange; // @synthesize RecurrenceRange=_RecurrenceRange;
@property(retain, nonatomic) EWSTaskRecurrencePatternBaseType *RecurrencePattern; // @synthesize RecurrencePattern=_RecurrencePattern;
- (void)dealloc;
- (id)description;

@end

