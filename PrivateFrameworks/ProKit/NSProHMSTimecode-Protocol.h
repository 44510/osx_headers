//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol NSProHMSTimecode
- (void)subtractHMSHours:(long long)arg1 minutes:(long long)arg2 seconds:(double)arg3;
- (void)addHMSHours:(long long)arg1 minutes:(long long)arg2 seconds:(double)arg3;
- (void)setHMSSeconds:(double)arg1;
- (void)setHMSMinutes:(long long)arg1;
- (void)setHMSHours:(long long)arg1;
- (void)getHMSHours:(long long *)arg1 minutes:(long long *)arg2 seconds:(double *)arg3;
@end

