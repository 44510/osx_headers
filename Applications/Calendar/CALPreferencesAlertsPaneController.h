//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSButton, NSCalendar, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSString, NSTextField, NSView;

@interface CALPreferencesAlertsPaneController : NSObject
{
    NSView *_alertsView;
    NSView *_controlContainer;
    NSView *_backgroundView;
    NSView *_separator;
    NSTextField *_accountLabel;
    NSPopUpButton *_accountList;
    NSButton *_keepSettingsLocalCheckbox;
    NSPopUpButton *_birthdayTrigger;
    NSPopUpButton *_alldayTrigger;
    NSPopUpButton *_eventTrigger;
    NSMutableDictionary *_triggerMap;
    NSArray *_localCalendars;
    NSArray *_birthdayCalendars;
    NSCalendar *_calendar;
    NSMutableArray *_accounts;
    NSString *_localAccountString;
    id _accountBeingEdited;
    id _accountCurrentlySelected;
    BOOL _unsavedChanges;
}

@property(retain) NSArray *birthdayCalendars; // @synthesize birthdayCalendars=_birthdayCalendars;
@property(retain) NSArray *localCalendars; // @synthesize localCalendars=_localCalendars;
- (void).cxx_destruct;
- (void)switchSharedCalendarNotificationPreference:(id)arg1;
- (void)switchInvitationNotificationPreference:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)refreshDefaultAlarmSets;
- (void)preferencesDidChange:(id)arg1;
- (void)groupsChangedExternallyOnMainThread:(id)arg1;
- (void)groupsChangedExternally:(id)arg1;
- (void)contextDidSaveOnMainThread:(id)arg1;
- (void)contextDidSave:(id)arg1;
- (void)saveContext;
- (void)principalsDidChange:(id)arg1;
- (void)handlePrincipalsDidChange:(id)arg1;
- (id)possiblyRemovedAccountWithID:(id)arg1;
- (void)resetEditedAccount:(id)arg1;
- (void)reselectAccount:(id)arg1;
- (id)accountBeingEditedID;
- (id)currentlySelectedAccountID;
- (void)setupAccounts:(id)arg1;
- (void)viewWillBeHidden:(id)arg1;
- (void)viewWillBeDisplayed:(id)arg1;
- (void)disableControlsIfNeededWithIgnoringSupportsDefaultAlarms:(BOOL)arg1;
- (void)disableControlsIfNeeded;
- (void)hidePopupButton;
- (void)updateCustomTriggerForButton:(id)arg1 customTrigger:(id)arg2;
- (id)existingTitleForAccount:(id)arg1;
- (id)titleForAccount:(id)arg1;
- (void)reloadPopupButton;
- (void)updateViewsWithAlarm:(id)arg1 andTag:(int)arg2;
- (void)updateViewsForDefaultAlarms:(id)arg1 withTag:(int)arg2;
- (id)remoteDefaultAlarmsForTag:(int)arg1;
- (id)localDefaultAlarmsForTag:(int)arg1;
- (id)defaultAlarmsForTag:(int)arg1;
- (void)showDefaults;
- (void)saveBirthdayAlarms;
- (void)saveLocalAccountPreferences;
- (void)savePrincipalBeingEdited:(id)arg1;
- (void)saveAccount;
- (id)createAlarmInContext:(id)arg1 withTag:(int)arg2;
- (id)selectedItem;
- (id)chosenTrigger:(id)arg1;
- (void)optionKeyUp:(id)arg1;
- (void)optionKeyDown:(id)arg1;
- (void)showGeneralHelp:(id)arg1;
- (void)triggerButtonPressed:(id)arg1;
- (void)shareSettingsChanged:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)addTriggersForButton:(id)arg1;
- (void)initTriggerMap;
- (void)awakeFromNib;

@end

