//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import "CNAutocompleteFetchDelegate.h"
#import "IDSBatchIDQueryControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class IDSBatchIDQueryController, IMAccount, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSTableColumn, NSTextField, NSTimer, SOCompletionResult, SOCompletionTableView, SOCompletionWindow;

@interface SOAddRecipientFieldViewController : SOChatViewController <CNAutocompleteFetchDelegate, IDSBatchIDQueryControllerDelegate, NSTextFieldDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    long long _selectedRow;
    NSString *_searchString;
    unsigned int _skipCompletionRebuilding:1;
    NSMutableArray *_autoCompleteResults;
    _Bool _canShowCompletionResults;
    NSTimer *_showCompletionResultsTimer;
    IDSBatchIDQueryController *_batchIDQueryController;
    NSMutableDictionary *_validatedIDQueryResults;
    NSMutableSet *_idsIDsToValidate;
    BOOL _completionWindowVisible;
    BOOL _isSearchingServer;
    BOOL _foundResults;
    NSMutableOrderedSet *_searchResults;
    SOCompletionWindow *_completionWindow;
    SOCompletionTableView *_completionTableView;
    long long _completionWindowLevel;
    NSTableColumn *_accountTableColumn;
    id <CNCancelable> _currentSearchRequest;
    id _showingMenuForRepresentedObject;
}

+ (id)_stringForAutocompleteResultSourceType:(unsigned long long)arg1;
@property(retain) id showingMenuForRepresentedObject; // @synthesize showingMenuForRepresentedObject=_showingMenuForRepresentedObject;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property BOOL foundResults; // @synthesize foundResults=_foundResults;
@property BOOL isSearchingServer; // @synthesize isSearchingServer=_isSearchingServer;
@property(retain) NSTableColumn *accountTableColumn; // @synthesize accountTableColumn=_accountTableColumn;
@property long long completionWindowLevel; // @synthesize completionWindowLevel=_completionWindowLevel;
@property(retain) SOCompletionTableView *completionTableView; // @synthesize completionTableView=_completionTableView;
@property(retain) SOCompletionWindow *completionWindow; // @synthesize completionWindow=_completionWindow;
@property(readonly, getter=isCompletionWindowVisible) BOOL completionWindowVisible; // @synthesize completionWindowVisible=_completionWindowVisible;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidChange:(id)arg1;
- (void)_invalidateShowCompletionResultsTimer;
- (BOOL)_searchStringMatchesWithHandleID:(id)arg1;
- (id)_searchStringMatchForAlternativeCombinationsOfFirstName:(id)arg1 lastName:(id)arg2;
- (void)_addSearchResult:(id)arg1;
- (void)_updateAutoCompleteUI;
- (id)_evaluateCompletionResultForName:(id)arg1 iMessageID:(id)arg2 personID:(id)arg3;
- (void)showCompletionsAndSelectCompletionResult:(id)arg1;
- (id)_sharedCompletionWindow;
- (id)_sharedCompletionTableView;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)_showCompletionResultsTimerFired:(id)arg1;
- (void)_startAutocompletionWithServer:(BOOL)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)_imHandleFromCompletionResult:(id)arg1;
- (void)dismissCompletionUI;
- (long long)_knownIMessageIDStatusForIDSID:(id)arg1;
- (void)_cleanupBatchIDQueryResults;
- (void)_queryIDSIMessageDestinations;
- (void)_addIMHandleIDToDanglingHandlesForHandleGUID:(id)arg1 typedString:(id)arg2;
- (id)_additionalSearchAccountsToHandleIDs;
- (void)_sortSearchResults;
- (void)_commonAddRecipientFieldViewControllerInit;
- (struct _NSRange)rangeForUserCompletion;
- (void)addRecipient:(id)arg1;
@property BOOL showsAccountTableColumn; // @dynamic showsAccountTableColumn;
@property(readonly) IMAccount *autocompleteAccount; // @dynamic autocompleteAccount;
@property(readonly) SOCompletionResult *selectedCompletionResult; // @dynamic selectedCompletionResult;
- (void)setSearchString:(id)arg1;
@property(readonly) NSMutableOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly) NSTextField *addRecipientField; // @dynamic addRecipientField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

