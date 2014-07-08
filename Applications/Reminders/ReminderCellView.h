//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DelayedHoverButtonTableCellView.h"

#import "ResizeableEditingFieldDelegate.h"

@class CardContentViewController, EKReminder, NSButton, NSImageView, NSMutableArray, NSString, RemindersShadowTextField, ShadowTextField;

@interface ReminderCellView : DelayedHoverButtonTableCellView <ResizeableEditingFieldDelegate>
{
    BOOL _willBeInspected;
    int _beganEditingMethod;
    EKReminder *_reminder;
    CardContentViewController *_controller;
    RemindersShadowTextField *_titleField;
    ShadowTextField *_listAndDateField;
    ShadowTextField *_locationField;
    ShadowTextField *_notesField;
    NSButton *_checkbox;
    NSImageView *_locationGlyph;
    NSMutableArray *_priorityExclamationPoints;
}

+ (id)priorityImageTemplate;
+ (id)checkboxImageForColor:(id)arg1 checked:(BOOL)arg2;
+ (long long)numberOfDetailFieldsForReminder:(id)arg1 cardContentViewController:(id)arg2;
+ (BOOL)showsNotesForReminder:(id)arg1 cardContentViewController:(id)arg2;
+ (BOOL)showsLocationForReminder:(id)arg1 cardContentViewController:(id)arg2;
+ (BOOL)showsDateForReminder:(id)arg1 cardContentViewController:(id)arg2;
+ (BOOL)showsListNameForReminder:(id)arg1 cardContentViewController:(id)arg2;
+ (long long)heightOfCellViewForReminder:(id)arg1 cardContentController:(id)arg2;
+ (id)locationImage;
+ (id)infoImage;
@property int beganEditingMethod; // @synthesize beganEditingMethod=_beganEditingMethod;
@property BOOL willBeInspected; // @synthesize willBeInspected=_willBeInspected;
@property(retain) NSMutableArray *priorityExclamationPoints; // @synthesize priorityExclamationPoints=_priorityExclamationPoints;
@property(retain) NSImageView *locationGlyph; // @synthesize locationGlyph=_locationGlyph;
@property(retain) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(retain) ShadowTextField *notesField; // @synthesize notesField=_notesField;
@property(retain) ShadowTextField *locationField; // @synthesize locationField=_locationField;
@property(retain) ShadowTextField *listAndDateField; // @synthesize listAndDateField=_listAndDateField;
@property(retain) RemindersShadowTextField *titleField; // @synthesize titleField=_titleField;
@property __weak CardContentViewController *controller; // @synthesize controller=_controller;
@property(retain) EKReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescription;
- (void)paste:(id)arg1;
- (id)dragImage;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (const char *)messageTracerSignatureForReminderCreationMethod:(int)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)isInspected;
- (void)save;
- (void)inspect;
- (void)infoButtonPressed;
- (void)checkboxToggled;
- (void)beginEditingWithCreationMethod:(int)arg1;
- (void)beginEditing;
- (void)viewDidMoveToWindow;
- (double)maxWidthForTextField;
- (void)formatField:(id)arg1 withTitle:(id)arg2 overdueRange:(struct _NSRange)arg3;
- (BOOL)refreshNotesField;
- (BOOL)refreshLocationField;
- (BOOL)refreshListAndDateField;
- (unsigned long long)numberOfExclamationPoints;
- (void)refreshPriorityIndicators;
- (id)priorityImage;
- (BOOL)refreshTitleField;
- (void)updateCheckbox:(BOOL)arg1 overdue:(BOOL)arg2;
- (void)updateWithReminder:(id)arg1;
- (void)refreshFromReminder;
- (BOOL)showsNotes;
- (BOOL)showsLocation;
- (BOOL)showsDate;
- (BOOL)showsListName;
- (long long)height;
- (BOOL)buttonShouldNeverBeShown;
- (BOOL)buttonShouldAlwaysBeShown;
- (BOOL)buttonStateIsLocked;
- (void)resetCursorRects;
- (void)viewDidMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 reminder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

