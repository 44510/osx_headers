//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@interface RDProgress : NSProgress
{
    int _rdProgressLock;
}

+ (id)newProgressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)atomicIncrementCompletedUnitCountBy:(long long)arg1;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;

@end

