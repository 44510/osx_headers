//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTDockTileHelperDelegate.h"
#import "IMAVControllerDelegate.h"
#import "IMConnectionMonitorDelegate.h"
#import "IMReachabilityDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"
#import "SOURLFetcherDelegate.h"

@class FTDockTileHelper, FTPreferencesWindowController, IMConnectionMonitor, NSMenu, NSMenuItem, NSMutableArray, NSString, SOURLFetcher, TUCallServicesRecentsController;

@interface FaceTime : NSObject <NSApplicationDelegate, IMAVControllerDelegate, IMConnectionMonitorDelegate, IMReachabilityDelegate, SOURLFetcherDelegate, NSUserNotificationCenterDelegate, FTDockTileHelperDelegate>
{
    NSMutableArray *_aeQueue;
    NSMenuItem *_toggleFaceTimeMenuItem;
    NSMenu *_videoMenu;
    NSMenuItem *_avSeparator;
    NSMenuItem *_revealLogs;
    NSMenuItem *_revealLogsSeparator;
    unsigned int _connectedToDaemon:1;
    unsigned int _finishedLaunching:1;
    unsigned int _terminating:1;
    unsigned int _launchedToShowInvite:1;
    IMConnectionMonitor *_configurationMonitor;
    SOURLFetcher *_configurationFetcher;
    double _appStartTime;
    BOOL _hasSetupAV;
    FTPreferencesWindowController *_prefsWindowController;
    TUCallServicesRecentsController *_recentsController;
    FTDockTileHelper *_dockMenuHelper;
}

+ (id)learnMoreURL;
+ (void)_checkAudioRecordingWarning;
+ (void)showCouldNotConnectDialog;
+ (id)sharedInstance;
+ (BOOL)showPhoneCallUI;
@property(retain, nonatomic) FTDockTileHelper *dockMenuHelper; // @synthesize dockMenuHelper=_dockMenuHelper;
@property(retain, nonatomic) TUCallServicesRecentsController *recentsController; // @synthesize recentsController=_recentsController;
@property BOOL hasSetupAV; // @synthesize hasSetupAV=_hasSetupAV;
@property(retain, nonatomic) FTPreferencesWindowController *prefsWindowController; // @synthesize prefsWindowController=_prefsWindowController;
- (void).cxx_destruct;
- (BOOL)isAccountActive;
- (void)reachabilityDidChange:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)urlFetcher:(id)arg1 fetchFailedWithError:(id)arg2;
- (void)urlFetcher:(id)arg1 fetchedResult:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (BOOL)isAppTerminating;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_installURLHandlers;
- (void)_accountEnabledStateChanged:(id)arg1;
- (void)_flushAEQueue;
- (void)_handleAppleEvent:(id)arg1 reply:(id)arg2;
- (void)_handleGURLAppleEvent:(id)arg1 reply:(id)arg2;
- (void)_deferredApplicationDidFinishLaunching;
- (void)inviteFailedFromIMHandle:(id)arg1 reason:(long long)arg2;
- (void)invitedToIMAVChat:(id)arg1;
- (void)_tuCallCenterCallStatusChanged:(id)arg1;
- (void)_daemonConnected:(id)arg1;
- (BOOL)connectedToDaemon;
- (void)_connectAndAutoLogin;
- (oneway void)setupComplete;
- (BOOL)connectToDaemon;
- (void)daemonConnectionLost;
- (void)setLaunchedToShowInvite:(BOOL)arg1;
- (BOOL)launchedToShowInvite;
- (void)changeMicrophone:(id)arg1;
- (void)changeCamera:(id)arg1;
- (void)_avMenuChanged:(id)arg1;
- (void)setupAV;
- (void)_registerDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)revealLogs:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateMenus;
- (void)showFaceTimeWindow:(id)arg1;
- (void)showPrefs:(id)arg1;
- (void)toggleFaceTime:(id)arg1;
- (void)signOut:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

