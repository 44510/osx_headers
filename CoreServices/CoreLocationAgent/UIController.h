//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LocationAlertDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface UIController : NSObject <LocationAlertDelegate>
{
    NSObject<OS_dispatch_source> *_locationPort;
    NSMutableArray *_locationAlerts;
    int _jobs;
}

- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)awakeFromNib;
- (void)showAlertForPID:(int)arg1 message:(int)arg2 bundlePath:(id)arg3;
- (void)locationRequest:(id)arg1 forPid:(int)arg2 message:(int)arg3 response:(int)arg4;
- (void)decrementJobs;
- (void)incrementJobs;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

