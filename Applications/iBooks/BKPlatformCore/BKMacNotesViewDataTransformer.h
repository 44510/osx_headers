//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKMacNotesDataSourceObserver.h"
#import "BKMacNotesViewDataSource.h"

@class BKMacMutableTreeNode, BKMacNotesViewController, NSIndexSet, NSString;

@interface BKMacNotesViewDataTransformer : NSObject <BKMacNotesViewDataSource, BKMacNotesDataSourceObserver>
{
    id <BKMacNotesDataSourceObserver> notesDataSourceObserver;
    BKMacNotesViewController *_notesVC;
    id <BKMacNotesViewDataSource> _dataSource;
    BKMacMutableTreeNode *_vendedTree;
    id <AEAnnotationFilter> _annotationFilter;
    NSIndexSet *_filteredChapterIndexes;
}

@property(retain, nonatomic) NSIndexSet *filteredChapterIndexes; // @synthesize filteredChapterIndexes=_filteredChapterIndexes;
@property(retain, nonatomic) id <AEAnnotationFilter> annotationFilter; // @synthesize annotationFilter=_annotationFilter;
@property(retain, nonatomic) BKMacMutableTreeNode *vendedTree; // @synthesize vendedTree=_vendedTree;
@property(retain, nonatomic) id <BKMacNotesViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BKMacNotesViewController *notesVC; // @synthesize notesVC=_notesVC;
@property(nonatomic) id <BKMacNotesDataSourceObserver> notesDataSourceObserver; // @synthesize notesDataSourceObserver;
- (void).cxx_destruct;
- (void)loadSection:(id)arg1 waitWithTimeout:(double)arg2 performBlockWhenLoaded:(CDUnknownBlockType)arg3;
- (void)loadChapter:(id)arg1 waitWithTimeout:(double)arg2 performBlockWhenLoaded:(CDUnknownBlockType)arg3;
- (id)chapterContainingItem:(id)arg1;
- (id)annotationsUpdatedForSharing:(id)arg1;
- (id)annotationPaginationDataSource;
- (CDUnknownBlockType)activityItemPropertySource;
- (BOOL)canEditAnnotation:(id)arg1;
- (void)setNoteText:(id)arg1 forAnnotation:(id)arg2;
- (id)colorForAnnotation:(id)arg1;
- (id)displayPageNumberStringForAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (id)itemForAnnotation:(id)arg1;
- (id)p_itemForAnnotation:(id)arg1 inSubtree:(id)arg2;
- (id)annotationFromItem:(id)arg1;
- (BOOL)isAnnotation:(id)arg1;
- (BOOL)isAnnotationContainer:(id)arg1;
- (unsigned long long)childCountForSection:(id)arg1;
- (BOOL)isSection:(id)arg1;
- (id)childOfChapter:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)childCountForChapter:(id)arg1;
- (BOOL)isChapter:(id)arg1;
- (unsigned long long)annotationCountForItem:(id)arg1;
- (id)headerForItem:(id)arg1;
- (id)childOfItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)childCountForItem:(id)arg1;
@property(readonly, nonatomic) BOOL writable;
- (CDUnknownBlockType)p_itemPrintBlock;
- (id)p_printItem:(id)arg1;
- (id)p_nodeWithItem:(id)arg1 inNodeArray:(id)arg2;
- (id)p_itemsInNodes:(id)arg1;
- (void)p_transformVendedTreeAnnotationsWithVendedParentNode:(id)arg1 sourceParentNode:(id)arg2 vendedChapterNode:(id)arg3 sourceChapterNode:(id)arg4;
- (void)p_transformVendedTreeAnnotationsWithSourceTree:(id)arg1;
- (void)p_transformVendedTreeSectionsWithSourceTree:(id)arg1;
- (void)p_transformVendedTreeChaptersWithSourceTree:(id)arg1;
- (void)p_transformVendedTreeWithSourceTree:(id)arg1;
- (void)p_reconcileVendedTreeWithSourceTree:(id)arg1;
- (unsigned long long)p_annotationCountForNode:(id)arg1;
- (id)p_filterNodeInPlace:(id)arg1 withAnnotationFilter:(id)arg2 outIndexSet:(id *)arg3;
- (void)p_rescanSourceTreeAtNode:(id)arg1;
- (id)p_rescanSourceTree;
- (void)p_reprocessSourceData;
- (void)notesDataSource:(id)arg1 invalidateAtDataItem:(id)arg2;
- (unsigned long long)unfilterdNumberOfNotes;
- (unsigned long long)filteredListIndexFromBookChapterIndex:(unsigned long long)arg1 mustSatisfyFilter:(BOOL)arg2;
- (void)updateFilter:(id)arg1;
- (void)sourceDataInvalidatedAtItem:(id)arg1;
- (void)dealloc;
- (id)initWithNotesViewController:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

