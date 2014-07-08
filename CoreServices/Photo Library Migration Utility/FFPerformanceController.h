//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMenuItem, NSString;

@interface FFPerformanceController : NSObject
{
    NSMenuItem *m_performanceMenuItem;
    BOOL m_dumpAFETimes;
    BOOL m_dumpAllEventTimes;
    BOOL m_dumpEngineTimes;
    BOOL m_dumpPlaybackTimes;
    BOOL m_dumpPeaksManagerTimes;
    BOOL m_dumpSaveTimes;
    NSString *m_eventDescription;
    int m_watcherState;
    NSDate *m_watcherStartTime;
    BOOL m_simulatingClick;
    BOOL m_clickHorizontal;
}

+ (id)sharedPerformanceController;
+ (BOOL)performanceMonitoringEnabled;
- (BOOL)dumpSaveTimes;
- (BOOL)dumpPeaksManagerTimes;
- (BOOL)dumpPlaybackTimes;
- (BOOL)dumpEngineTimes;
- (BOOL)dumpAllEventTimes;
- (BOOL)dumpAFETimes;
- (void)performance_recordDropFrames:(id)arg1;
- (void)performance_recordRAMUsage:(id)arg1;
- (void)createBogusLogEntry:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)logItemKey:(id)arg1 value:(id)arg2;
- (void)logItemKey:(id)arg1 doubleValue:(double)arg2;
- (void)logItemKey:(id)arg1 SInt64Value:(long long)arg2;
- (void *)PMRinstrument;
- (void)_setCurrentEventDescription:(id)arg1;
- (void)timeEvent:(id)arg1;
- (void)installPerformanceMenu;
- (void)dealloc;
- (id)init;

@end

