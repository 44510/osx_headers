//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSButton, NSProgressIndicator, NSStepper, NSString, NSTextField, NSWindow, SFAutoLockTextValue;

__attribute__((visibility("hidden")))
@interface SFKeychainSettingsPanel_ivars : NSObject
{
    NSTextField *_panelMessage;
    SFAutoLockTextValue *_autoLockValue;
    NSStepper *_autoLockStepper;
    NSButton *_autoLockCtrl;
    NSButton *_lockOnSleepCtrl;
    NSButton *_cancelButton;
    NSButton *_saveButton;
    NSWindow *_panel;
    NSButton *_dotMacButton;
    NSButton *_syncDotMacCtrl;
    NSTextField *_syncStateMessage;
    NSProgressIndicator *_progressCtrl;
    NSString *_keychainNameStr;
    NSWindow *_parentWindowForSheet;
    SEL _clientDidEndSelector;
    id _clientDelegate;
    void *_clientContextInfo;
    unsigned long long _lockIntervalVal;
    struct OpaqueSecKeychainRef *_keychainRef;
    BOOL _lockOnSleepVal;
    BOOL _syncVal;
    struct SecKeychainSettings _settings;
    BOOL _runAsSheet;
}

- (void)dealloc;

@end

