//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@interface ITTextFormatter : NSFormatter
{
    long long _maxUTF8Length;
    long long _maxLength;
    BOOL _isInteger;
    BOOL _isTime;
}

+ (id)formatter;
@property(nonatomic) BOOL isTime; // @synthesize isTime=_isTime;
@property(nonatomic) BOOL isInteger; // @synthesize isInteger=_isInteger;
@property(nonatomic) long long maxUTF8Length; // @synthesize maxUTF8Length=_maxUTF8Length;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (BOOL)isValidTimeString:(id)arg1;
- (BOOL)isValidIntegerString:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)isLengthChecked;
- (BOOL)isLengthValidForString:(id)arg1;

@end

