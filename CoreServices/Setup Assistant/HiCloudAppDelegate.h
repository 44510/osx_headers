//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class FrankenBuddyManager, HiCloudController, HiCloudWindowController, NSDate, NSDictionary, NSString, NSWindow;

@interface HiCloudAppDelegate : NSObject <NSApplicationDelegate>
{
    NSWindow *window;
    FrankenBuddyManager *macBuddyManager;
    HiCloudController *hcc;
    HiCloudWindowController *hcwc;
    BOOL _userConfirmedQuit;
    NSDate *_endOfPhase1Date;
    NSDictionary *_firstLoginParameters;
    struct __CFMachPort *_eventTap;
    BOOL isMiniBuddy;
    BOOL isFirstLoginBuddy;
    BOOL isMigrationBuddy;
    BOOL isResumeBuddy;
    BOOL isKeychainSyncRejoinBuddy;
    BOOL didFirstLoginPhaseTransition;
    BOOL shouldExitBehindScreenlock;
    NSString *firstLoginContext;
}

@property NSWindow *window; // @synthesize window;
- (void)showSwitchControl:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)showErrorWithDictionary:(id)arg1;
- (void)_reestablishFrontmostness:(id)arg1;
- (void)disableGestures:(id)arg1;
- (void)doFirstLoginTransition:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
