//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface Scheduler : NSObject
{
    NSTimer *_nextFireTimer;
    struct __CFMachPort *_serverPort;
    BOOL _schedulerPaused;
    unsigned int _loggedInUserID;
    unsigned int _loggedInGroupID;
}

+ (id)sharedScheduler;
- (void)setLoggedInUserID:(unsigned int)arg1 groupID:(unsigned int)arg2;
- (void)launchLatestSchedulesAndSetTimer:(BOOL)arg1;
- (void)pauseScheduler;
- (void)startServer;
- (void)dealloc;
- (id)init;
- (void)systemClockDidChange:(id)arg1;
- (void)dateOrTimeLocaleDidChange:(id)arg1;
- (void)timeZoneDidChange:(id)arg1;
- (id)sortedArrayForAllSchedules:(BOOL)arg1;
- (void)scheduleItem:(id)arg1;
- (BOOL)fireScheduledItem:(id)arg1;
- (void)updateSchedules:(id)arg1;
- (void)fireNext:(id)arg1;
- (void)launchURL:(struct __CFURL *)arg1;
- (void)launchApplication:(struct __CFURL *)arg1;
- (void)removeFromPreferences:(id)arg1;
- (void)addToPreferences:(id)arg1;
- (void)resetTimerAndRelaunch;
- (void)startServerWithBootstrapPort:(unsigned int)arg1;
- (void)computerDidWakeFromSleep:(id)arg1;

@end
