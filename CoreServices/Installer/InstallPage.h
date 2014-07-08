//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InstallerPane.h"

#import "IFDInstallDelegate.h"

@class IAAutoSizedTextView, NSButton, NSPanel, NSProgressIndicator, NSString, NSTextField, NSTimer, OSIChecksumController;

@interface InstallPage : InstallerPane <IFDInstallDelegate>
{
    IAAutoSizedTextView *uiInstallPhaseText;
    IAAutoSizedTextView *uiInstallStatusText;
    NSProgressIndicator *uiInstallProgressBar;
    IAAutoSizedTextView *uiTimeRemainingText;
    NSPanel *uiMediaRequestPanel;
    NSTextField *uiMediaRequestPanelTitle;
    NSTextField *uiMediaRequestPanelMessage;
    NSButton *uiCancelMediaRequestButton;
    OSIChecksumController *_checksumController;
    NSString *_nameOfOriginalMedia;
    NSString *_nameOfPreviousMedia;
    BOOL _originalMediaIsAvailable;
    BOOL _needToRequestMediaFromUser;
    BOOL _skippableAction;
    NSTimer *_keepAlertTimer;
    BOOL _allowSleep;
    id _statusPluginObject;
}

- (void)_startPostLogoutInstallWithDocument:(id)arg1;
- (BOOL)_shouldDoPostLogoutInstallForDocument:(id)arg1;
- (void)spaceAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setNextEnabledWithNSNumber:(id)arg1;
- (void)iaCancelMediaRequest:(id)arg1;
- (void)cancelWarningDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)shouldExitPane:(long long)arg1;
- (void)didExitPane:(long long)arg1;
- (void)didEnterPane:(long long)arg1;
- (void)awakeFromNib;
- (id)title;
- (void)dealloc;
- (id)installFoundMultipleLocationsAtPaths:(id)arg1 forInstallDocument:(id)arg2;
- (void)installRequestedMediaAccepted:(BOOL)arg1 forInstallDocument:(id)arg2;
- (void)installRequestMedia:(id)arg1 forInstallDocument:(id)arg2;
- (void)installError:(id)arg1 forInstallDocument:(id)arg2;
- (void)installTimeRemaining:(id)arg1 forInstallDocument:(id)arg2;
- (void)installPercentageComplete:(double)arg1 forInstallDocument:(id)arg2;
- (void)installPhase:(id)arg1 forInstallDocument:(id)arg2;
- (void)installStatus:(id)arg1 forInstallDocument:(id)arg2;
- (void)installFinishedForInstallDocument:(id)arg1;
- (void)installStartedForInstallDocument:(id)arg1;
- (void)_loadSpecializedPlugins;
- (void)invalidateProgressNotificationObject;
- (void)requestOriginalMedia;
- (BOOL)originalMediaIsAvailable;
- (void)_volumeAppeared:(id)arg1;
- (void)_mediaFound;
- (void)_ejectLastMedia;
- (void)_keepSystemAwake:(id)arg1;

@end

