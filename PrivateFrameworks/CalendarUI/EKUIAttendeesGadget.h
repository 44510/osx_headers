//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

#import "CalAutoCompleteDelegate.h"
#import "EKUIAttendeesViewController.h"

@class CalAutoCompleteOperation, EKUIAttendeeFieldDelegate, EKUIAttendeesControlContainer, EKUIAttendeesEditingField, EKUIAttendeesTokenField, EKUIPlusButton, NSArray, NSButton, NSDictionary, NSProgressIndicator, NSString, NSView;

@interface EKUIAttendeesGadget : EKUISingleViewGadget <EKUIAttendeesViewController, CalAutoCompleteDelegate>
{
    BOOL _sortAttendeeTokensOnNextUpdate;
    BOOL _canShowAvailabilityButton;
    EKUIAttendeeFieldDelegate *_attendeeFieldDelegate;
    EKUIAttendeesControlContainer *_controlContainer;
    EKUIAttendeesTokenField *_attendeesField;
    EKUIAttendeesEditingField *_editingField;
    NSProgressIndicator *_progressIndicator;
    EKUIPlusButton *_plusButton;
    NSButton *_linkButton;
    NSView *_separator;
    NSDictionary *_viewMetrics;
    CalAutoCompleteOperation *_acOperation;
    NSString *_lastEventID;
    NSArray *_attendeeConstraints;
}

+ (id)interestedChangeKeys;
@property BOOL canShowAvailabilityButton; // @synthesize canShowAvailabilityButton=_canShowAvailabilityButton;
@property(retain) NSArray *attendeeConstraints; // @synthesize attendeeConstraints=_attendeeConstraints;
@property BOOL sortAttendeeTokensOnNextUpdate; // @synthesize sortAttendeeTokensOnNextUpdate=_sortAttendeeTokensOnNextUpdate;
@property(retain) NSString *lastEventID; // @synthesize lastEventID=_lastEventID;
@property(retain) CalAutoCompleteOperation *acOperation; // @synthesize acOperation=_acOperation;
@property(retain) NSDictionary *viewMetrics; // @synthesize viewMetrics=_viewMetrics;
@property(retain) NSView *separator; // @synthesize separator=_separator;
@property(retain) NSButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain) EKUIPlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) EKUIAttendeesEditingField *editingField; // @synthesize editingField=_editingField;
@property(retain) EKUIAttendeesTokenField *attendeesField; // @synthesize attendeesField=_attendeesField;
@property(retain) EKUIAttendeesControlContainer *controlContainer; // @synthesize controlContainer=_controlContainer;
@property(retain) EKUIAttendeeFieldDelegate *attendeeFieldDelegate; // @synthesize attendeeFieldDelegate=_attendeeFieldDelegate;
- (void).cxx_destruct;
- (void)finishedAutoComplete:(id)arg1;
- (void)startedAutoComplete:(id)arg1;
- (void)linkButtonClicked:(id)arg1;
- (BOOL)_shouldShowAvailabilityLink;
- (BOOL)_shouldShowPlusButton;
- (BOOL)_shouldShowEditingField;
- (BOOL)_hasAttendeesToDisplay;
- (id)_sortedAttendeesPreservingCurrentOrderFromAttendees:(id)arg1;
- (id)_attendeesToDisplayForEvent:(id)arg1;
- (void)_stopProgressIndicator;
- (void)_startProgressIndicator;
- (void)_startProgressIndicatorWithTimeout;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)userDidDismissFromEditingField;
- (void)cancelSearch;
- (void)updateAttendeesWithAttendeestoAdd:(id)arg1 attendeesToRemove:(id)arg2;
- (id)displayedAttendees;
- (id)matchWithPrefix:(id)arg1;
- (void)attendeesFieldDidEndGroupExpansion;
- (void)attendeesFieldDidBeginGroupExpansion;
- (void)attendeesFieldDidEndEditing;
- (BOOL)isFreeBusySupported;
- (BOOL)updateAttendeesFromPasteboard:(id)arg1;
- (id)representedObjectsFromPasteboard:(id)arg1;
- (id)textField;
- (void)relayout;
- (id)claimedPboardTypes;
- (id)control;
- (double)horizontalPadding;
- (double)horizontalInset;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (BOOL)isEditable;
- (void)updateConstraints;
- (void)setEvent:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (void)sessionStatusChanged:(id)arg1;
- (BOOL)needsExpansion;
- (void)selectEditingField;
- (void)_setupLinkButton;
- (void)_setupPlusButton;
- (double)maxHeight;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

