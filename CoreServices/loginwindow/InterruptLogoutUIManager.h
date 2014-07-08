//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSButton, NSImageView, NSMutableDictionary, NSPanel, NSString, NSTextField, NSWindow;

@interface InterruptLogoutUIManager : NSObject <NSWindowDelegate>
{
    NSWindow *_interruptLogOutWindow;
    NSTextField *_interruptMainMessageField;
    NSTextField *_interruptInfoTextField;
    NSImageView *_interruptAlertImageView;
    NSButton *_cancelButton;
    NSButton *_defaultButton;
    NSPanel *_confirmationPanel;
    NSImageView *_confirmationIconView;
    NSTextField *_confirmationMessageTextField;
    NSTextField *_confirmationInfoTextField;
    NSButton *_forceQuitButton;
    NSButton *_cancelConfirmationButton;
    BOOL _okToLogOut;
    int _interruptReason;
    unsigned int _interruptAlertRegistrationID;
    int _mainLogoutType;
    NSMutableDictionary *_interruptingApplicationDict;
}

+ (id)sharedInterruptLogoutUIManager;
@property(retain) NSMutableDictionary *interruptingApplicationDict; // @synthesize interruptingApplicationDict=_interruptingApplicationDict;
@property(readonly) int mainLogoutType; // @synthesize mainLogoutType=_mainLogoutType;
@property(readonly) unsigned int interruptAlertRegistrationID; // @synthesize interruptAlertRegistrationID=_interruptAlertRegistrationID;
@property(readonly) int interruptReason; // @synthesize interruptReason=_interruptReason;
- (void)serverOptionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showForceQuitConfirmation;
- (void)closeInterruptWindowAndReset;
- (BOOL)okToLogOut;
- (BOOL)loadInterruptNibAndFormatStringForLogoutType:(int)arg1 reason:(int)arg2 interruptionApplication:(id)arg3;
- (id)humanReadableInterruptReason:(int)arg1;
- (void)sheetCancelButtonClicked:(id)arg1;
- (void)sheetForceQuitButtonClicked:(id)arg1;
- (void)defaultClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)resetInterruptedLogoutUIIfShowing;
- (void)interruptLogout:(int)arg1 reason:(int)arg2 interruptionLSASN:(struct __LSASN *)arg3 override:(BOOL)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

