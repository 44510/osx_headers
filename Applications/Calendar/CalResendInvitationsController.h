//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "CoreDAVTaskGroupDelegate.h"
#import "NSTableViewDataSource.h"

@class CALMainController, CalManagedCalDAVCalendar, CalManagedCalendar, NSArray, NSButton, NSMutableSet, NSString, NSTableColumn, NSTableView;

@interface CalResendInvitationsController : NSWindowController <NSTableViewDataSource, CoreDAVTaskGroupDelegate>
{
    NSTableView *_invitationTable;
    NSButton *_okButton;
    NSTableColumn *_checkboxColumn;
    NSTableColumn *_emailColumn;
    CalManagedCalDAVCalendar *_calendar;
    NSMutableSet *_currentlyRunningTaskGroups;
    NSArray *_sharees;
    NSMutableSet *_indexesOfShareesToReinvite;
    CALMainController *_mainController;
}

@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property(retain) CalManagedCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain) NSMutableSet *indexesOfShareesToReinvite; // @synthesize indexesOfShareesToReinvite=_indexesOfShareesToReinvite;
@property(retain) NSArray *sharees; // @synthesize sharees=_sharees;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)openShareSettings:(id)arg1;
- (void)_sendInvitationsToCheckedUsers;
- (void)sendInvitations:(id)arg1;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancel:(id)arg1;
- (void)openInvitationPanelForCalendar:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

