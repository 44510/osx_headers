//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DUVFSEventHandler : NSObject
{
}

+ (void)setupHFSNotifications;
- (void)checkDisksForChange;
- (unsigned long long)vfsevent_wait:(long long)arg1 withTimeout:(long long)arg2;
- (long long)vfsevent_init;
- (void)runVFSNotificationHandler;

@end

