//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenuExtra.h"

#import "NSMachPortDelegate.h"
#import "NSMenuDelegate.h"

@class CLKClockExtraPreferences, CLKParentalControls, NSMachPort, NSMenuItem, NSString, NSTimer;

@interface AppleClockExtra : NSMenuExtra <NSMachPortDelegate, NSMenuDelegate>
{
    CLKClockExtraPreferences *preferences;
    CLKParentalControls *parentalControls;
    NSMachPort *calendarChangedReceiveMachPort;
    NSTimer *systemDateChangedTimer;
    NSTimer *updateOpenMenuTimer;
    NSMenuItem *fullClockMenuItem;
    NSMenuItem *parentalControlsTitleMenuItem;
    NSMenuItem *parentalControlsTimeLimitMenuItem;
    NSMenuItem *parentalControlsSeparatorMenuItem;
    NSMenuItem *switchToAnalogMenuItem;
    NSMenuItem *switchToDigitalMenuItem;
}

- (void)runSelfTest:(unsigned int)arg1 duration:(double)arg2;
- (void)_runSelfTest:(unsigned int)arg1 duration:(double)arg2 iteration:(int)arg3 pauseBetweenTests:(double)arg4;
- (void)_testDigitalClockFormatByShowingSeconds:(BOOL)arg1 showAMPM:(BOOL)arg2 showDayOfTheWeek:(BOOL)arg3 showDayOfTheMonth:(BOOL)arg4 showMonth:(BOOL)arg5 use24Hours:(BOOL)arg6 flashDateSeparators:(BOOL)arg7 iteration:(int)arg8;
- (void)_testSwitchToAnalog:(BOOL)arg1 expectedViewClass:(Class)arg2 iteration:(int)arg3;
- (void)_testSleep:(double)arg1;
- (BOOL)convertedForNewUI;
- (id)AXDescription;
- (id)AXValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupClockExtraByDeferringViewSwap:(BOOL)arg1;
- (void)_setup;
- (void)_forceToUpdateSuperviews;
- (void)willUnload;
- (void)_bindView:(id)arg1;
- (void)_unbindAndInvalidateView;
- (void)dealloc;
- (void)finalize;
- (id)initWithBundle:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)_stopUpdateOpenMenuTimer;
- (void)_startUpdateOpenMenuTimer;
- (void)_updateOpenMenuTimer:(id)arg1;
- (void)_menuActionOpenPrefPane:(id)arg1;
- (void)_menuActionSwitchToDigital:(id)arg1;
- (void)_menuActionSwitchToAnalog:(id)arg1;
- (id)menu;
- (void)_updateParentalControlsMenuItems;
- (void)_updateFullClockMenuItem;
- (id)_dateFormatterForMenu;
- (id)_buildMenu;
- (void)_unregisterForSystemAwakeNotification;
- (void)_registerForSystemAwakeNotification;
- (void)_systemAwakeNotification:(id)arg1;
- (void)_unregisterForSystemDateNotifications;
- (void)_registerForSystemDateNotifications;
- (void)_systemDateNotificationHandler:(id)arg1;
- (void)_unregisterForLegacyClockNotification;
- (void)_registerForLegacyClockNotification;
- (void)_legacyClockNotificationHandler:(id)arg1;
- (void)_clockSettingsDidChange:(id)arg1;
- (void)_startSystemDateChangedTimer;
- (void)_stopSystemDateChangedTimer;
- (void)_systemDateChangedTimerCallback:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

