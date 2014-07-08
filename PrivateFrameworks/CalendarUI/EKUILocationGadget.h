//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIGadget.h>

#import "CalUIControlResponder.h"
#import "EKUIAttendeesViewController.h"

@class CalUILocationDelegate, CalUILocationFieldContainer, EKUIAttendeeFieldDelegate, NSMutableDictionary, NSString;

@interface EKUILocationGadget : EKUIGadget <EKUIAttendeesViewController, CalUIControlResponder>
{
    BOOL _forceUpdate;
    BOOL _isSaving;
    NSMutableDictionary *_searchResults;
    NSMutableDictionary *_addressToSearchResults;
    CalUILocationDelegate *_locationDelegate;
    CalUILocationFieldContainer *_locationFieldContainer;
    EKUIAttendeeFieldDelegate *_fieldDelegate;
    id _lastEventID;
}

+ (id)interestedChangeKeys;
@property BOOL isSaving; // @synthesize isSaving=_isSaving;
@property(retain) id lastEventID; // @synthesize lastEventID=_lastEventID;
@property BOOL forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain) EKUIAttendeeFieldDelegate *fieldDelegate; // @synthesize fieldDelegate=_fieldDelegate;
@property(retain) CalUILocationFieldContainer *locationFieldContainer; // @synthesize locationFieldContainer=_locationFieldContainer;
@property(retain) CalUILocationDelegate *locationDelegate; // @synthesize locationDelegate=_locationDelegate;
@property(retain) NSMutableDictionary *addressToSearchResults; // @synthesize addressToSearchResults=_addressToSearchResults;
@property(retain) NSMutableDictionary *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (void)locationDidGeocode:(id)arg1 error:(id)arg2;
- (id)calAddressWrapperForLocation:(id)arg1;
- (id)iconForCalAddressWrapper:(id)arg1 selected:(BOOL)arg2;
- (id)iconForCalAutocompleteAttendee:(id)arg1 selected:(BOOL)arg2;
- (id)iconForLocationSelection:(id)arg1 selected:(BOOL)arg2;
- (id)iconForLocationSuggestion:(id)arg1 selected:(BOOL)arg2;
- (void)controlDidReceiveServerResults:(id)arg1;
- (void)userDidDismissFromLocationField;
- (void)controlDidDeleteLocationObject:(id)arg1;
- (void)controlDidSelectLocationObject:(id)arg1;
- (BOOL)isFreeBusySupported;
- (void)updateFreeBusyTo:(int)arg1 forItemWithCUAddress:(id)arg2;
- (id)representedObjectsFromPasteboard:(id)arg1;
- (BOOL)updateAttendeesFromPasteboard:(id)arg1;
- (id)textField;
- (BOOL)performDragOperation:(id)arg1;
- (void)_saveCompleteChangeIfNotSaving;
- (void)_saveLocationAsStructuredLocation:(id)arg1;
- (void)_saveLocationAsParticipant:(id)arg1;
- (void)_saveStructuredLocation;
- (id)claimedPboardTypes;
- (BOOL)hasContent;
- (void)updateWithChanges:(id)arg1;
- (double)horizontalInset;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (double)maxHeight;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

