//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArrayController.h"

#import "NSTableViewDataSource.h"

@class FolderListTreeController, FolderTreeNode, NSArray, NSString, NoteListTableView;

@interface NoteListArrayController : NSArrayController <NSTableViewDataSource>
{
    BOOL _animatesChanges;
    FolderListTreeController *_folderController;
    NoteListTableView *_tableView;
    NSArray *_oldArrangedObjects;
    FolderTreeNode *_oldSelectedTreeNode;
}

@property(retain, nonatomic) FolderTreeNode *oldSelectedTreeNode; // @synthesize oldSelectedTreeNode=_oldSelectedTreeNode;
@property(copy, nonatomic) NSArray *oldArrangedObjects; // @synthesize oldArrangedObjects=_oldArrangedObjects;
@property(nonatomic) BOOL animatesChanges; // @synthesize animatesChanges=_animatesChanges;
@property(nonatomic) __weak NoteListTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak FolderListTreeController *folderController; // @synthesize folderController=_folderController;
- (void).cxx_destruct;
- (void)setContent:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_translateArrangedObjectsChangeIntoTableViewAnimations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)_tableViewDoubleClicked:(id)arg1;
- (void)setSelectedObjectsUsingPersistentIdentifiers:(id)arg1;
- (void)_scrollTableViewToSelection;
- (void)_configureSortOrder;
- (void)sortByTagOfSender:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)delete:(id)arg1;
- (void)remove:(id)arg1;
- (BOOL)canRemove;
- (id)newObject;
- (void)add:(id)arg1;
- (BOOL)canAdd;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_notesArrayControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
