//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOHours : PBCodable <NSCopying>
{
    CDStruct_95bda58d _days;
    NSMutableArray *_timeRanges;
}

@property(retain, nonatomic) NSMutableArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeRangesCount;
- (void)addTimeRange:(id)arg1;
- (void)clearTimeRanges;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)addDay:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;
- (id)initWithPlaceDataHours:(id)arg1;

@end

