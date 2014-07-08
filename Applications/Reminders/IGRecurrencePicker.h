//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGExpandingField.h"

@class IGEndRecurrencePicker, IGRecurrencePickerView;

@interface IGRecurrencePicker : IGExpandingField
{
    IGEndRecurrencePicker *_endRecurrencePicker;
}

@property(retain) IGEndRecurrencePicker *endRecurrencePicker; // @synthesize endRecurrencePicker=_endRecurrencePicker;
- (void).cxx_destruct;
- (void)recurrenceSummaryClicked;
- (struct CGPoint)labelOffset;
- (void)sizeToFit;
- (BOOL)usesFullWidth;
- (id)relatedGadgets;
- (void)recurrenceSelected;
- (void)recurrenceRuleChanged;
- (BOOL)isVisible;
- (void)updateFromReminder;
- (int)frequencyEnumForReminder:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) IGRecurrencePickerView *view;

@end

