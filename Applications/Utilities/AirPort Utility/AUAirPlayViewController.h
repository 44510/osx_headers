//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AUControlFocusProtocol.h"
#import "AUSettingsViewControllerProtocol.h"

@class AUAirPlayModel, NSButton, NSSecureTextField, NSString, NSTextField;

@interface AUAirPlayViewController : NSViewController <AUSettingsViewControllerProtocol, AUControlFocusProtocol>
{
    AUAirPlayModel *dataModel;
    NSButton *enableAirPlay;
    NSTextField *airPlaySpeakerName;
    NSSecureTextField *airPlaySpeakerPassword;
    NSSecureTextField *airPlaySpeakerPasswordVerify;
    NSButton *airPlaySpeakerPasswordRememberInKeychain;
    NSButton *enableAirPlayOverWAN;
}

@property(retain, nonatomic) AUAirPlayModel *dataModel; // @synthesize dataModel;
@property NSButton *enableAirPlayOverWAN; // @synthesize enableAirPlayOverWAN;
@property NSButton *airPlaySpeakerPasswordRememberInKeychain; // @synthesize airPlaySpeakerPasswordRememberInKeychain;
@property NSSecureTextField *airPlaySpeakerPasswordVerify; // @synthesize airPlaySpeakerPasswordVerify;
@property NSSecureTextField *airPlaySpeakerPassword; // @synthesize airPlaySpeakerPassword;
@property NSTextField *airPlaySpeakerName; // @synthesize airPlaySpeakerName;
@property NSButton *enableAirPlay; // @synthesize enableAirPlay;
- (void)focusOnControlForSetting:(id)arg1;
- (id)_controlForSetting:(id)arg1;
- (id)settingsErrors;
- (BOOL)settingsValid;
- (void)saveSettings;
- (void)refreshSpeakerNamePlaceholder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *title;
- (void)dealloc;
- (void)cleanUpObservers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

