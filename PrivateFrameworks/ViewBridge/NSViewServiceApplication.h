//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@class NSMutableArray;

@interface NSViewServiceApplication : NSApplication
{
    NSMutableArray *_exceptionQueue;
    unsigned int _didReceiveReopenWindows:1;
}

+ (BOOL)hasBootstrapKind:(int)arg1;
+ (int)bootstrapKind;
+ (BOOL)commonNamedFaults;
+ (void)commonBootstrap;
+ (void)learnRemotePID;
+ (void)registerStandardUserDefaults;
+ (void)ensureNSApp;
+ (id)bootstrapSharedServiceListener;
+ (void)obviateWindowAnimations;
+ (void)cacheMainBundleAsServiceBundle;
+ (void)validateXpcBundleInfoDictionary:(id)arg1;
+ (void)bootstrapLogging;
+ (struct __sFILE *)redirectFILE:(struct __sFILE *)arg1 toTempFileWithNameHint:(const char *)arg2 inMode:(const char *)arg3;
+ (void)doctorServiceBundleInfoDictionary;
+ (id)bundleForClass;
+ (void)stoleKeyFocus:(id)arg1;
+ (id)realKeyEventInProgress;
+ (BOOL)anyRemoteEverTrustedOurKeyEvents;
+ (void)viewTrustsServiceKeyEvents;
+ (void)cacheFakeEvent:(id)arg1;
+ (BOOL)isFakeEvent:(id)arg1;
- (void)endModalSession:(struct _NSModalSession *)arg1;
- (void)endLocalModalSession:(struct _NSModalSession *)arg1 withWindow:(id)arg2;
- (void)endRemoteModalSession:(struct _NSModalSession *)arg1 withWindow:(id)arg2;
- (struct _NSModalSession *)beginModalSessionForWindow:(id)arg1;
- (struct _NSModalSession *)beginLocalModalSessionForWindow:(id)arg1;
- (void)beginRemoteModalSessionForWindow:(id)arg1;
- (id)beginRemoteModalSession:(id)arg1 forWindow:(id)arg2 withSize:(struct CGSize)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)endSheet:(id)arg1;
- (void)endSheet:(id)arg1 returnCode:(long long)arg2;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)event:(id)arg1 wouldActivateWindow:(id)arg2;
- (void)onFirstEvent;
- (void)_modalSession:(struct _NSModalSession *)arg1 sendEvent:(id)arg2;
- (BOOL)_modalSession:(struct _NSModalSession *)arg1 wouldBeepGivenFakeEvent:(id)arg2;
- (void)sendEvent:(id)arg1 withForwarding:(BOOL)arg2;
- (void)sendEvent:(id)arg1;
- (void)sendEventWithoutCatch:(id)arg1 withForwarding:(BOOL)arg2;
- (void)raiseIfDeferredException:(id)arg1;
- (void)enqueueException:(id)arg1;
- (void)dealloc;
- (BOOL)_handleKeyEquivalent:(id)arg1;
- (void)forwardEventToRemoteApp:(id)arg1;
- (int)_releaseKeyFocus;
- (int)_stealKeyFocusWithOptions:(unsigned int)arg1;
- (BOOL)_shouldLoadMainNibNamed:(id)arg1;
- (void)_cycleWindowsReversed:(BOOL)arg1;
- (void)_reopenWindowsAsNecessaryIncludingRestorableState:(BOOL)arg1 registeringAsReady:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeWindow:(id)arg1;
- (void)_addWindow:(id)arg1;
- (void)_configureWindow:(id)arg1;
- (void)finishLaunching;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)schedulePermittedFrontNotifications;
- (void)permittedFrontAppsChanged:(id)arg1;
- (void)_registerRequiredAEHandlers;

@end

