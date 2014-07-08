//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MKJunction : NSObject
{
    CDStruct_e02beb0c *_elements;
    unsigned long long _count;
    int _type;
    struct *_snapped[8];
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)getRoundaboutArrowPath:(id *)arg1 intersectionBackgroundPath:(id *)arg2 strokePath:(id *)arg3 withSize:(struct CGSize)arg4 metrics:(CDStruct_07415270)arg5 drivingSide:(int)arg6;
- (id)roundaboutArrowWithSize:(struct CGSize)arg1 metrics:(CDStruct_07415270)arg2 outerRadius:(double)arg3 endAngle:(double)arg4 pivot:(struct CGPoint *)arg5;
- (void)getArrowPath:(id *)arg1 arrowStrokePath:(id *)arg2 pivot:(struct CGPoint *)arg3 withSize:(struct CGSize)arg4 metrics:(CDStruct_07415270)arg5;
- (void)getArrowPath:(id *)arg1 arrowStrokePath:(id *)arg2 intersectionBackgroundPath:(id *)arg3 strokePath:(id *)arg4 withSize:(struct CGSize)arg5 metrics:(CDStruct_07415270)arg6 drivingSide:(int)arg7;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1 maneuver:(int)arg2 drivingSide:(int)arg3 elements:(CDStruct_e02beb0c *)arg4 count:(unsigned long long)arg5;

@end

