//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplicationDelegate.h"

@class LSUserActivity, NSApplication, NSArray, NSCoder, NSString;

@protocol NSActivityApplicationDelegate <NSApplicationDelegate>

@optional
- (void)application:(NSApplication *)arg1 didRestoreActivity:(LSUserActivity *)arg2 windows:(NSArray *)arg3;
- (BOOL)application:(NSApplication *)arg1 willSaveActivity:(LSUserActivity *)arg2;
- (void)application:(NSApplication *)arg1 restoreWindowForActivity:(LSUserActivity *)arg2 identifier:(NSString *)arg3 coder:(NSCoder *)arg4 completionHandler:(void (^)(NSWindow *, NSError *))arg5;
- (BOOL)application:(NSApplication *)arg1 openActivity:(LSUserActivity *)arg2;
@end
