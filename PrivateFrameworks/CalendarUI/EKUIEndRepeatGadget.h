//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIDateTimeGadget.h>

#import "NSTextFieldDelegate.h"

@class CalUIResizingTextField, EKUIPopUpButton, NSArray, NSNumber, NSString, NSTextField, NSView;

@interface EKUIEndRepeatGadget : EKUIDateTimeGadget <NSTextFieldDelegate>
{
    NSView *_endRepeatContainerView;
    EKUIPopUpButton *_endRepeatTypePicker;
    CalUIResizingTextField *_numberOfTimesField;
    NSTextField *_numberOfTimesLabel;
    NSArray *_endConstraints;
    NSNumber *_selectedWidth;
}

+ (id)interestedChangeKeys;
@property(retain) NSNumber *selectedWidth; // @synthesize selectedWidth=_selectedWidth;
@property(retain) NSArray *endConstraints; // @synthesize endConstraints=_endConstraints;
@property(retain) NSTextField *numberOfTimesLabel; // @synthesize numberOfTimesLabel=_numberOfTimesLabel;
@property(retain) CalUIResizingTextField *numberOfTimesField; // @synthesize numberOfTimesField=_numberOfTimesField;
@property(retain) EKUIPopUpButton *endRepeatTypePicker; // @synthesize endRepeatTypePicker=_endRepeatTypePicker;
@property(retain) NSView *endRepeatContainerView; // @synthesize endRepeatContainerView=_endRepeatContainerView;
- (void).cxx_destruct;
- (double)pixelsBetweenLabelAndControl;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)datePickerChangedToDate:(id)arg1;
- (void)removeRecurrenceEnd;
- (void)updateRecurrenceEndForAfterNumberOfOccurrences:(unsigned long long)arg1;
- (void)updateRecurrenceEndWithDate:(id)arg1;
- (void)endTypeChanged:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (id)control;
- (id)labelString;
- (void)addNewMenuItemForEndType:(unsigned long long)arg1 withTitle:(id)arg2;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (BOOL)shouldDisplayWhenNotEditable;
- (double)baselineOffset;
- (id)viewForBaselineAlignment;
- (void)updateConstraints;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

