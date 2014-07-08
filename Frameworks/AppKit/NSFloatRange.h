//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSFloatRange : NSObject
{
    double _location;
    double _length;
}

+ (id)rangeWithLocation:(double)arg1 length:(double)arg2;
@property(readonly, nonatomic) double length; // @synthesize length=_length;
@property(readonly, nonatomic) double location; // @synthesize location=_location;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)initWithLocation:(double)arg1 length:(double)arg2;

@end

