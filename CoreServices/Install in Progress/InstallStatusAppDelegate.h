//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class NSAlert, NSObject<OS_dispatch_queue>, NSString, NSView, PKInstallClient;

@interface InstallStatusAppDelegate : NSObject <NSApplicationDelegate>
{
    PKInstallClient *_installClient;
    NSAlert *_alert;
    NSString *_actionType;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _shouldOfferAction;
    int _notifyToken;
    NSView *_progressView;
    NSString *_installStatus;
    double _installProgress;
}

@property double installProgress; // @synthesize installProgress=_installProgress;
@property(copy) NSString *installStatus; // @synthesize installStatus=_installStatus;
@property NSView *progressView; // @synthesize progressView=_progressView;
- (void)installClientDidFinish:(id)arg1;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClientDidBegin:(id)arg1;
- (void)cancel:(id)arg1;
- (void)performAction:(id)arg1;
- (BOOL)_sendAEToLoginWindow:(unsigned int)arg1;
- (void)_displayAlert;
- (BOOL)_connect;
- (void)_setUpXPCEvents;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

