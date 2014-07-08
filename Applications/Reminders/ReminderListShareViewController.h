//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUICalendarInfoViewController.h"

#import "CalUICalendarInfoViewDataSource.h"
#import "CalUICalendarInfoViewDelegate.h"
#import "NSPopoverDelegate.h"

@class ListCellView, NSPopover, NSString;

@interface ReminderListShareViewController : CalUICalendarInfoViewController <CalUICalendarInfoViewDataSource, CalUICalendarInfoViewDelegate, NSPopoverDelegate>
{
    NSPopover *_popover;
    NSString *_publicURLString;
    ListCellView *_currentlyInspectedListView;
}

@property(retain) ListCellView *currentlyInspectedListView; // @synthesize currentlyInspectedListView=_currentlyInspectedListView;
@property(retain) NSString *publicURLString; // @synthesize publicURLString=_publicURLString;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)reinviteSharee:(id)arg1 forInfoView:(id)arg2;
- (BOOL)infoViewShouldSupportShareeAccessChange:(id)arg1;
- (BOOL)popoverIsShown;
- (void)popoverWillClose:(id)arg1;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)saveChangesToSharees;
- (BOOL)unsavedShareeChangesMade;
- (void)infoViewDismissedByUser:(id)arg1;
- (void)infoViewCancelledByUser:(id)arg1;
- (void)infoView:(id)arg1 updatedMinimumSize:(struct CGSize)arg2;
- (id)infoViewInformativeText:(id)arg1;
- (BOOL)infoViewShouldDisplayiCloudStatus:(id)arg1;
- (void)infoView:(id)arg1 publicCalendarToggledOn:(BOOL)arg2;
- (BOOL)infoViewCalendarSupportsPublishing:(id)arg1;
- (BOOL)infoViewCalendarIsSharedToMe:(id)arg1;
- (BOOL)infoViewCalendarIsPublicallyShared:(id)arg1;
- (BOOL)infoViewCalendarIsAPublishedCalendar:(id)arg1;
- (BOOL)infoViewCalendarIsASubcribedCalendar:(id)arg1;
- (BOOL)infoViewCalendarSupportsSharing:(id)arg1;
- (id)infoViewPublicURLString:(id)arg1;
- (id)infoViewCalendarOwnerEmailAddress:(id)arg1;
- (id)infoViewCalendarSharees:(id)arg1;
- (id)infoViewCalendarTitle:(id)arg1;
- (id)currentlyInspectedList;
- (void)showShareViewForListCellView:(id)arg1;
- (BOOL)infoViewCalendarIsFamilyCalendar;
- (BOOL)infoViewCalendarIsMarkedImmutableSharees;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

