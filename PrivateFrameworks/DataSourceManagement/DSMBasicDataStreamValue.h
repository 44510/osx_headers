//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataSourceManagement/DSMBasicDataStreamEvent.h>

#import "NSCoding.h"

@interface DSMBasicDataStreamValue : DSMBasicDataStreamEvent <NSCoding>
{
    double _value;
}

@property(readonly) double value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)dataType;
- (id)initWithMachAbsoluteTimestampInNs:(unsigned long long)arg1 andWallclockTime:(struct timeval *)arg2 andMetaDataArray:(id)arg3 andValue:(double)arg4;

@end

