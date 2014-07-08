//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPreferencesModule.h"

#import "MailTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSWindowDelegate.h"
#import "SoundPopUpButtonDelegate.h"

@class AppleScriptPopUpButton, CriteriaUIHelper, MFMessageRule, MUIAddressField, MailTableView, MailboxesChooser, NSButton, NSMenu, NSMutableArray, NSPanel, NSPopUpButton, NSScrollView, NSString, NSTextField, NSTextView, NSView, SoundPopUpButton;

@interface RulesPreferences : NSPreferencesModule <NSTableViewDataSource, MailTableViewDelegate, NSWindowDelegate, SoundPopUpButtonDelegate>
{
    NSMutableArray *_actionViews;
    BOOL _colorPanelShouldBeHidden;
    BOOL _isDuplicatingRule;
    BOOL _hasPendingChanges;
    MUIAddressField *_forwardRecipientsField;
    MUIAddressField *_redirectRecipientsField;
    MailTableView *_rulesTable;
    NSButton *_editButton;
    NSButton *_duplicateButton;
    NSButton *_removeButton;
    NSPanel *_ruleDetailPanel;
    NSTextField *_ruleNameField;
    NSButton *_ruleHelpButton;
    NSMenu *_actionMenu;
    NSScrollView *_actionContainer;
    NSView *_soundActionView;
    NSView *_colorActionView;
    NSView *_transferActionView;
    NSView *_makeCopyActionView;
    NSView *_autoReplyActionView;
    NSView *_autoForwardActionView;
    NSView *_autoRedirectActionView;
    NSView *_markDeletedActionView;
    NSView *_markAsReadActionView;
    NSView *_markAsFlaggedActionView;
    NSView *_stopEvaluatingRulesActionView;
    NSView *_runAppleScriptActionView;
    NSView *_notifyUserActionView;
    NSView *_sendNotificationActionView;
    NSPopUpButton *_colorPopup;
    NSPopUpButton *_colorStylePopup;
    NSPopUpButton *_flagColorPopup;
    SoundPopUpButton *_soundPopup;
    AppleScriptPopUpButton *_appleScriptPopup;
    NSPanel *_responseMessageTextPanel;
    NSTextView *_responseMessageTextView;
    CriteriaUIHelper *_criteriaUIHelper;
    MailboxesChooser *_destinationChooser;
    MailboxesChooser *_makeCopyDestinationChooser;
    long long _currentlySelectedRow;
    MFMessageRule *_ruleBeingValidated;
    MFMessageRule *_ruleBeingEdited;
}

@property(nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(nonatomic) BOOL isDuplicatingRule; // @synthesize isDuplicatingRule=_isDuplicatingRule;
@property(retain, nonatomic) MFMessageRule *ruleBeingEdited; // @synthesize ruleBeingEdited=_ruleBeingEdited;
@property(retain, nonatomic) MFMessageRule *ruleBeingValidated; // @synthesize ruleBeingValidated=_ruleBeingValidated;
@property(nonatomic) long long currentlySelectedRow; // @synthesize currentlySelectedRow=_currentlySelectedRow;
@property(nonatomic) BOOL colorPanelShouldBeHidden; // @synthesize colorPanelShouldBeHidden=_colorPanelShouldBeHidden;
@property(retain, nonatomic) MailboxesChooser *makeCopyDestinationChooser; // @synthesize makeCopyDestinationChooser=_makeCopyDestinationChooser;
@property(retain, nonatomic) MailboxesChooser *destinationChooser; // @synthesize destinationChooser=_destinationChooser;
@property(retain, nonatomic) CriteriaUIHelper *criteriaUIHelper; // @synthesize criteriaUIHelper=_criteriaUIHelper;
@property(nonatomic) NSTextView *responseMessageTextView; // @synthesize responseMessageTextView=_responseMessageTextView;
@property(retain, nonatomic) NSPanel *responseMessageTextPanel; // @synthesize responseMessageTextPanel=_responseMessageTextPanel;
@property(nonatomic) __weak AppleScriptPopUpButton *appleScriptPopup; // @synthesize appleScriptPopup=_appleScriptPopup;
@property(nonatomic) __weak SoundPopUpButton *soundPopup; // @synthesize soundPopup=_soundPopup;
@property(nonatomic) __weak NSPopUpButton *flagColorPopup; // @synthesize flagColorPopup=_flagColorPopup;
@property(nonatomic) __weak NSPopUpButton *colorStylePopup; // @synthesize colorStylePopup=_colorStylePopup;
@property(nonatomic) __weak NSPopUpButton *colorPopup; // @synthesize colorPopup=_colorPopup;
@property(retain, nonatomic) NSView *sendNotificationActionView; // @synthesize sendNotificationActionView=_sendNotificationActionView;
@property(retain, nonatomic) NSView *notifyUserActionView; // @synthesize notifyUserActionView=_notifyUserActionView;
@property(retain, nonatomic) NSView *runAppleScriptActionView; // @synthesize runAppleScriptActionView=_runAppleScriptActionView;
@property(retain, nonatomic) NSView *stopEvaluatingRulesActionView; // @synthesize stopEvaluatingRulesActionView=_stopEvaluatingRulesActionView;
@property(retain, nonatomic) NSView *markAsFlaggedActionView; // @synthesize markAsFlaggedActionView=_markAsFlaggedActionView;
@property(retain, nonatomic) NSView *markAsReadActionView; // @synthesize markAsReadActionView=_markAsReadActionView;
@property(retain, nonatomic) NSView *markDeletedActionView; // @synthesize markDeletedActionView=_markDeletedActionView;
@property(retain, nonatomic) NSView *autoRedirectActionView; // @synthesize autoRedirectActionView=_autoRedirectActionView;
@property(retain, nonatomic) NSView *autoForwardActionView; // @synthesize autoForwardActionView=_autoForwardActionView;
@property(retain, nonatomic) NSView *autoReplyActionView; // @synthesize autoReplyActionView=_autoReplyActionView;
@property(retain, nonatomic) NSView *makeCopyActionView; // @synthesize makeCopyActionView=_makeCopyActionView;
@property(retain, nonatomic) NSView *transferActionView; // @synthesize transferActionView=_transferActionView;
@property(retain, nonatomic) NSView *colorActionView; // @synthesize colorActionView=_colorActionView;
@property(retain, nonatomic) NSView *soundActionView; // @synthesize soundActionView=_soundActionView;
@property(nonatomic) __weak NSScrollView *actionContainer; // @synthesize actionContainer=_actionContainer;
@property(retain, nonatomic) NSMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(nonatomic) __weak NSButton *ruleHelpButton; // @synthesize ruleHelpButton=_ruleHelpButton;
@property(nonatomic) __weak NSTextField *ruleNameField; // @synthesize ruleNameField=_ruleNameField;
@property(retain, nonatomic) NSPanel *ruleDetailPanel; // @synthesize ruleDetailPanel=_ruleDetailPanel;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSButton *duplicateButton; // @synthesize duplicateButton=_duplicateButton;
@property(nonatomic) __weak NSButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) __weak MailTableView *rulesTable; // @synthesize rulesTable=_rulesTable;
@property(nonatomic) __weak MUIAddressField *redirectRecipientsField; // @synthesize redirectRecipientsField=_redirectRecipientsField;
@property(nonatomic) __weak MUIAddressField *forwardRecipientsField; // @synthesize forwardRecipientsField=_forwardRecipientsField;
- (void).cxx_destruct;
- (void)_openAppleScriptDirectoryInFinder;
- (id)titleForSoundFile:(id)arg1;
- (void)_accountMailboxListingDidChange:(id)arg1;
- (void)actionPopupChanged:(id)arg1;
- (void)_actionPopupWillPopup:(id)arg1;
- (void)mailboxSelected:(id)arg1;
- (void)flagsToApplyChanged:(id)arg1;
- (void)responseMessageCancelClicked:(id)arg1;
- (void)responseMessageOKClicked:(id)arg1;
- (void)setResponseMessageClicked:(id)arg1;
- (void)colorStyleChanged:(id)arg1;
- (void)colorPicked:(id)arg1;
- (void)colorChanged:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)runRuleDetailPanelForRule:(id)arg1 inWindow:(id)arg2 withHelpButtonTag:(long long)arg3;
- (void)_validateActionMenuItem:(id)arg1 currentTag:(long long)arg2;
- (void)addAction:(id)arg1;
- (void)_configureActionsForRule:(id)arg1;
- (void)_configureFlagColorPopup;
- (void)_configureColorPopupForColorStyle:(long long)arg1;
- (void)_addActionForTag:(long long)arg1 atIndex:(unsigned long long)arg2;
- (id)_actionViewForTag:(long long)arg1;
- (void)removeAction:(id)arg1;
- (void)_setOtherColor:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)_validateDrag:(id)arg1 proposedRow:(long long)arg2 dragOperation:(unsigned long long)arg3;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (int)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)editRule:(id)arg1;
- (void)duplicateRule:(id)arg1;
- (void)createRule:(id)arg1;
- (void)saveChanges;
- (void)initializeFromDefaults;
- (void)_validateButtonState;
- (id)imageForPreferenceNamed:(id)arg1;
- (id)preferencesNibName;
- (id)viewForPreferenceNamed:(id)arg1;
- (void)awakeFromNib;
- (id)windowTitle;
- (id)titleForIdentifier:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

