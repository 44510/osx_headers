//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIResizingTextField.h>

#import "NSAccessibilityButton.h"

@class NSString;

@interface EKUISummaryTextButton : EKUIResizingTextField <NSAccessibilityButton>
{
    id <EKUISummary> _gadget;
}

@property __weak id <EKUISummary> gadget; // @synthesize gadget=_gadget;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

