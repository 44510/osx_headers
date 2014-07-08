//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface RelativeDate : NSObject <NSCopying>
{
    long long relativeValue;
    int dateUnits;
}

@property(readonly, nonatomic) long long relativeValue; // @synthesize relativeValue;
@property(readonly, nonatomic) int dateUnits; // @synthesize dateUnits;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValue:(long long)arg1 units:(int)arg2;

@end

