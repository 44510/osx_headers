//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class CalUIOccurrenceListView, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSScrollView, NSString, NSTextField;

@interface CalUIOccurrenceListController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _showEmptyToday;
    BOOL _isReloadingTable;
    id <CalUIOccurrenceListDelegate> _delegate;
    CalUIOccurrenceListView *_occurrenceList;
    NSScrollView *_scrollView;
    NSIndexSet *_selectedRowIndexes;
    NSTextField *_noEventsLabel;
    NSMutableArray *_listContents;
    NSMutableDictionary *_occurrenceIndexes;
    NSMutableDictionary *_dateIndexes;
    NSMutableIndexSet *_expandedRows;
}

@property BOOL isReloadingTable; // @synthesize isReloadingTable=_isReloadingTable;
@property(retain) NSMutableIndexSet *expandedRows; // @synthesize expandedRows=_expandedRows;
@property(retain) NSMutableDictionary *dateIndexes; // @synthesize dateIndexes=_dateIndexes;
@property(retain) NSMutableDictionary *occurrenceIndexes; // @synthesize occurrenceIndexes=_occurrenceIndexes;
@property(retain) NSMutableArray *listContents; // @synthesize listContents=_listContents;
@property __weak NSTextField *noEventsLabel; // @synthesize noEventsLabel=_noEventsLabel;
@property(copy) NSIndexSet *selectedRowIndexes; // @synthesize selectedRowIndexes=_selectedRowIndexes;
@property(readonly) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain) CalUIOccurrenceListView *occurrenceList; // @synthesize occurrenceList=_occurrenceList;
@property BOOL showEmptyToday; // @synthesize showEmptyToday=_showEmptyToday;
@property(nonatomic) __weak id <CalUIOccurrenceListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pulseSelectedOccurrence;
- (void)showInlineInspectorForSelectedOccurrence;
- (void)_changeSelectedRowExpansion:(int)arg1;
- (BOOL)_handleKeyDownEvent:(id)arg1;
- (void)tableViewScrolled:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isDashedRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateExpandedRowsToRowIndexes:(id)arg1;
- (long long)rowForOccurrenceID:(id)arg1 date:(id)arg2;
- (long long)rowForOccurrenceID:(id)arg1;
- (void)scrollDateToTopOfList:(id)arg1 animate:(BOOL)arg2;
- (BOOL)_scrollRowFlushToTop:(long long)arg1 animate:(BOOL)arg2;
- (void)scrollRowToVisible:(long long)arg1;
- (id)dateForFirstVisibleRow;
- (id)dateForRow:(long long)arg1;
- (long long)previousNonGroupRowFromRow:(long long)arg1;
- (void)selectFirstOccurrenceForDate:(id)arg1;
- (long long)nextNonGroupRowFromRow:(long long)arg1;
- (long long)_groupRowForRow:(long long)arg1;
- (void)selectOccurrence:(id)arg1 forDate:(id)arg2;
- (void)selectRow:(long long)arg1;
- (id)_listObjectAtIndex:(long long)arg1;
- (BOOL)showsDateRows;
- (long long)numberOfRows;
- (void)reloadData;
- (id)occurrenceIndex;
- (id)calendar;
- (id)selectedEvents;
- (id)lastSelectedOccurrence;
- (void)deactivate;
- (void)activate;
- (void)awakeFromNib;
- (id)nibName;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;
- (id)initWithSuperView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

