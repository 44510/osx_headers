//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RestartShutdownAuthRefMgr : NSObject
{
    struct AuthorizationOpaqueRef *mAuthRef;
    BOOL mHideSwitchUser;
    long long mNumberOfConsoleUsers;
    long long mNumberOfAFPConnections;
    long long mMinimunNumberOfUsers;
}

+ (id)sharedRestartShutdownAuthRefMgr;
- (void)askForRestartRights:(long long)arg1 AFPConnectionCount:(long long)arg2 atLoginwindow:(BOOL)arg3 hideSwitchUser:(BOOL)arg4;
- (void)askForShutDownRights:(long long)arg1 AFPConnectionCount:(long long)arg2 atLoginwindow:(BOOL)arg3 hideSwitchUser:(BOOL)arg4;
- (void)askForRestartAuthOnThread:(id)arg1;
- (void)askForShutdownAuthOnThread:(id)arg1;
- (int)alertUserOfConectedAfpUsers:(long long)arg1;
- (int)askForShutDownRights;
- (int)askForRestartRights;
- (void)dealloc;
- (id)init;

@end

