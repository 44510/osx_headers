//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AMPathPopUpButton, AMTokenField, AMVariablesEditorController, AMVariablesEditorDateFormatDelegate, CIColor, NSBox, NSButton, NSColor, NSObjectController, NSPopUpButton, NSTabView, NSTextField, NSTextView, NSTokenField, OSAScriptView;

@interface AMVariablesEditorView : NSView
{
    NSBox *_nameBox;
    NSBox *_buttonBox;
    NSBox *_customDateFormatBox;
    NSBox *_customTimeFormatBox;
    NSTextField *nameField;
    NSPopUpButton *typePopUp;
    NSObjectController *_variableController;
    NSTabView *_tabView;
    AMTokenField *valueField;
    NSPopUpButton *_dateFormatPopUp;
    NSPopUpButton *_timeFormatPopUp;
    AMPathPopUpButton *_pathPopUp;
    OSAScriptView *_scriptView;
    NSPopUpButton *_shellScriptShell;
    NSTextView *_shellScriptView;
    NSButton *_doneButton;
    NSButton *_cancelButton;
    NSTextField *_dayOfWeekText;
    NSTextField *_dayOfMonthText;
    NSTextField *_monthText;
    NSTextField *_yearText;
    NSTokenField *_customDateFormat;
    NSTokenField *_dayOfWeek;
    NSTokenField *_dayOfMonth;
    NSTokenField *_month;
    NSTokenField *_year;
    NSTokenField *_customTimeFormat;
    NSTokenField *_hour;
    NSTokenField *_minute;
    NSTokenField *_second;
    NSTokenField *_ampm;
    NSTokenField *_timezone;
    NSTokenField *_milliseconds;
    AMVariablesEditorDateFormatDelegate *_dateFormatDelegate;
    AMVariablesEditorController *_controller;
    BOOL _isLayingOutControls;
    BOOL _useCustomDateFormat;
    BOOL _useCustomTimeFormat;
    BOOL _didSwitchToCustomDateFormat;
    BOOL _didSwitchToDefinedDateFormat;
    BOOL _didSwitchToCustomTimeFormat;
    BOOL _didSwitchToDefinedTimeFormat;
    NSColor *titleTextColor;
    NSColor *titlebarTopLineColor;
    NSColor *titlebarBottomLineColor;
    CIColor *titlebarTopGradientColor;
    CIColor *titlebarBottomGradientColor;
    NSColor *viewAreaTopLineColor;
    NSColor *viewAreaBottomLineColor;
    CIColor *viewAreaTopGradientColor;
    CIColor *viewAreaBottomGradientColor;
    CIColor *windowBorderColor;
    struct CGRect viewFrame;
    struct CGRect titlebarFrame;
    struct CGPath *_windowClipPath;
    struct CGPath *_borderClipPath;
}

- (void)reLayout;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)updateWindowClipPath;
- (struct CGPath *)newTodoRoundedWindowPathForRect:(struct CGRect)arg1;
- (void)setViewAreaBottomGradientColor:(id)arg1;
- (void)setViewAreaTopGradientColor:(id)arg1;
- (void)setViewAreaBottomLineColor:(id)arg1;
- (void)setViewAreaTopLineColor:(id)arg1;
- (void)setTitlebarBottomGradientColor:(id)arg1;
- (void)setTitlebarTopGradientColor:(id)arg1;
- (void)setTitlebarBottomLineColor:(id)arg1;
- (void)setTitlebarTopLineColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setBorderClipPath:(struct CGPath *)arg1;
- (void)setWindowClipPath:(struct CGPath *)arg1;
- (struct CGPath *)windowClipPath;
- (void)awakeFromNib;
- (void)updateLayout;
- (void)setupShellScriptControls;
- (void)setCustomTimeFormatControlsAreHidden:(BOOL)arg1;
- (void)useCustomTimeFormat:(id)arg1;
- (void)useTimeFormat:(id)arg1;
- (void)setUseCustomTimeFormat:(BOOL)arg1;
- (BOOL)useCustomTimeFormat;
- (void)populateTimeFormatPopup;
- (void)setupTimeControls;
- (void)setCustomDateFormatControlsAreHidden:(BOOL)arg1;
- (void)useCustomDateFormat:(id)arg1;
- (void)useDateFormat:(id)arg1;
- (void)setUseCustomDateFormat:(BOOL)arg1;
- (BOOL)useCustomDateFormat;
- (void)populateDateFormatPopup;
- (void)setupDateControls;
- (double)customTimeFormatBoxHeight;
- (double)customDateFormatBoxHeight;
- (void)setDidSwitchToDefinedTimeFormat:(BOOL)arg1;
- (BOOL)didSwitchToDefinedTimeFormat;
- (void)setDidSwitchToCustomTimeFormat:(BOOL)arg1;
- (BOOL)didSwitchToCustomTimeFormat;
- (void)setDidSwitchToDefinedDateFormat:(BOOL)arg1;
- (BOOL)didSwitchToDefinedDateFormat;
- (void)setDidSwitchToCustomDateFormat:(BOOL)arg1;
- (BOOL)didSwitchToCustomDateFormat;
- (void)unSetupDateTimeControls;
- (void)setupDateTimeControlTokenField:(id)arg1;
- (void)setupButton:(id)arg1;
- (BOOL)isFlipped;
- (void)finishInitialLayout;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(long long)arg3;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)currentDateValues;
- (void)edit:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setController:(id)arg1;
- (id)controller;
- (id)variableController;
- (id)_shellScriptShell;
- (id)_customTimeFormat;
- (id)_customDateFormat;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

