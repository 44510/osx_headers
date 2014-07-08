//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SessionAgentNotificationCenter : NSObject
{
    NSDictionary *_sancNotificationDictionary;
    int _shieldShowingToken;
    int _screenLockedToken;
    int _lockUIShowingToken;
}

+ (id)sharedSessionAgentNotificationCenter;
- (void)sendNotificationOf:(id)arg1 forUser:(unsigned int)arg2;
- (void)doSpecialNotificationHandling:(int)arg1;
- (void)sendSystemBSDNotification:(id)arg1 forUserID:(id)arg2;
- (void)sendBSDNotification:(id)arg1 forUserID:(id)arg2;
- (void)sendDistributedNotification:(id)arg1 forUserID:(id)arg2;
- (void)clearSessionAgentNotifySpaceForSession;
- (void)setupSessionAgentNotifySharedSpaceForSession;
- (void)setupInitialUserID:(unsigned int)arg1;
- (void)setNotifySharedSpace:(int)arg1 key:(id)arg2 toValue:(unsigned long long)arg3;
- (int)tokenForType:(int)arg1 forKey:(id)arg2;
- (void)buildNotificationDictionary;

@end

