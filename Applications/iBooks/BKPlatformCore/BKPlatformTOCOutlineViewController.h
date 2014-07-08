//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BKPlatformCore/BKPlatformTOCViewController.h>

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class BKPlatformTOCOutlineView, BKPlatformTOCOutlineViewParameters, NSString, NSTreeController;

@interface BKPlatformTOCOutlineViewController : BKPlatformTOCViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _programmaticallyChangingSelection;
    id <BKPlatformTOCNodeProtocol> _itemToSelectWhenLoaded;
    BKPlatformTOCOutlineView *_outlineView;
    NSTreeController *_treeController;
    BKPlatformTOCOutlineViewParameters *_outlineViewParameters;
}

+ (void)initialize;
@property(retain, nonatomic) BKPlatformTOCOutlineViewParameters *outlineViewParameters; // @synthesize outlineViewParameters=_outlineViewParameters;
@property(nonatomic) NSTreeController *treeController; // @synthesize treeController=_treeController;
@property(nonatomic) BKPlatformTOCOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) BOOL programmaticallyChangingSelection; // @synthesize programmaticallyChangingSelection=_programmaticallyChangingSelection;
@property(nonatomic) id <BKPlatformTOCNodeProtocol> itemToSelectWhenLoaded; // @synthesize itemToSelectWhenLoaded=_itemToSelectWhenLoaded;
- (void).cxx_destruct;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)p_isMouseInsideView:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)animateItemAndChildrenToVisible:(id)arg1;
- (void)scrollRowToVisibleAnimated:(long long)arg1;
- (BOOL)p_itemAndChildrenAreFullyVisible:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (id)cellIdentifierForItem:(id)arg1;
- (struct CGSize)p_sizeForString:(id)arg1 withFont:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (double)preferredHeight;
- (void)p_selectTreeNode:(id)arg1;
- (void)p_scrollRowToVisible:(unsigned long long)arg1;
- (id)p_treeNodeForTOCNode:(id)arg1;
- (id)p_treeNodeForObject:(id)arg1;
- (void)selectNode:(id)arg1;
- (void)p_selectAnObject:(id)arg1;
- (void)clearInitialSelection;
- (void)highlightCurrentNode;
- (void)loadView;
- (void)dealloc;
- (id)initWithRootNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
