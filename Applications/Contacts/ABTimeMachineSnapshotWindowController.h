//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABTimeMachineAddressBookCache, ABTimeMachineRestoreSource, ABZeroingWeakReference;

@interface ABTimeMachineSnapshotWindowController : NSObject
{
    ABZeroingWeakReference *_session;
    id <ABTimeMachineWindowController> _interactionViewer;
    id <ABTimeMachineWindowController> _snapshotViewer;
    ABTimeMachineAddressBookCache *_addressBookCache;
    ABTimeMachineRestoreSource *_restoreSource;
    id <CNCancelable> _windowAppearanceCancelable;
    BOOL _snapshotInvalidationDisabled;
}

@property(getter=isSnapshotInvalidationDisabled) BOOL snapshotInvalidationDisabled; // @synthesize snapshotInvalidationDisabled=_snapshotInvalidationDisabled;
@property(retain) ABTimeMachineRestoreSource *restoreSource; // @synthesize restoreSource=_restoreSource;
- (void)runWithSnapshotInvalidationDisabled:(CDUnknownBlockType)arg1;
- (void)delayedInvalidateSnapshots;
- (void)invalidateSnapshots;
- (void)windowAppearanceDidChange:(id)arg1;
- (id)makeSmartGroupWithName:(id)arg1 inAddressBook:(id)arg2;
- (id)smartGroupMatchingName:(id)arg1 inAddressBook:(id)arg2;
- (id)equivalentOfSmartGroup:(id)arg1 inAddressBook:(id)arg2;
- (void)updateEquivalentSmartGroup:(id)arg1 inAddressBook:(id)arg2;
- (id)makeGroupWithName:(id)arg1 inAddressBook:(id)arg2 account:(id)arg3;
- (id)groupsMatchingName:(id)arg1 inAddressBook:(id)arg2 account:(id)arg3;
- (id)groupMatchingName:(id)arg1 inAddressBook:(id)arg2 account:(id)arg3;
- (id)equivalentOfGroup:(id)arg1 inAddressBook:(id)arg2 account:(id)arg3;
- (id)equivalentOfAccount:(id)arg1 inAddressBook:(id)arg2;
- (void)restoreRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)restoreSelectedRecordsForSnapshotPath:(id)arg1;
- (void)prepareViewer:(id)arg1 forSnapshotPath:(id)arg2;
- (void)prepareAppWindowForSnapshotPathAndMakeKey:(id)arg1;
- (id)prepareAppWindowForSnapshotPath:(id)arg1;
- (id)prepareSnapshotWindowForSnapshotPath:(id)arg1;
- (id)interactionViewer;
- (void)viewSnapshotAtPath:(id)arg1;
- (void)updateSnapshotSearchTerm;
- (void)updateWindowSelection;
- (void)updateSnapshotSelection;
- (void)updateWindowSources;
- (void)updateSnapshotViewMode;
- (void)setAppWindowReadonlyOverride:(BOOL)arg1;
- (id)snapshotWindow;
- (void)cleanUpAfter;
- (id)session;
- (void)setUpBefore;
- (id)appWindow;
- (void)dealloc;
- (id)initWithSession:(id)arg1 interactionViewer:(id)arg2;
- (id)initWithSession:(id)arg1;

@end

