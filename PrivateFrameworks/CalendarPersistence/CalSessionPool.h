//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalSessionPool : NSObject
{
}

+ (void)synchronizeAllWithFlags:(long long)arg1;
+ (void)synchronizeAll;
+ (void)timerFiredWithInfo:(id)arg1;
+ (void)processChangeRequests;
+ (id)sessions;
+ (void)removeSessionForSessionID:(id)arg1;
+ (BOOL)addSession:(id)arg1;
+ (id)sessionsOfType:(Class)arg1;
+ (id)sessionForSessionID:(id)arg1;
+ (id)sessionForObjectID:(id)arg1;

@end

