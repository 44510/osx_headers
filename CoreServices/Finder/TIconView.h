//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TImageBrowserView.h"

#import "NSScrollViewDelegate.h"
#import "NSUserInterfaceItemIdentification.h"
#import "TDragImageProtocol.h"
#import "TShrinkToFitDelegateProtocol.h"

@class NSString, TIconViewController, TShrinkToFitController;

@interface TIconView : TImageBrowserView <TShrinkToFitDelegateProtocol, TDragImageProtocol, NSUserInterfaceItemIdentification, NSScrollViewDelegate>
{
    TIconViewController *_controller;
    _Bool _isDoubleBufferedView;
    TShrinkToFitController *_stfController;
    _Bool _viewIsReloadingData;
    _Bool _isDrawingInDragImage;
    _Bool _mouseDownInMoreButton;
    _Bool _singleClickOpensNode;
    _Bool _clearBackBufferOnDraw;
    _Bool _trackingCancel;
    long long _currentDropIndex;
    unsigned long long _editedCellIndex;
    unsigned long long _selectionCountBeforeReloadingData;
    unsigned long long _disabledTrackingIndex;
    struct unordered_map<TFENode, TNSRef<TInlineProgressHostLayer *>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<TInlineProgressHostLayer *>>>> _nodeToInlineProgressLayerMap;
    struct TFENode _alwaysVisibleNode;
    struct TFENode _mouseDownNode;
    struct CGPoint _lastMouseDraggedLocation;
    struct TNSRef<NSDate *> _dateOfLastMouseDraggedEvent;
}

@property(nonatomic) unsigned long long disabledTrackingIndex; // @synthesize disabledTrackingIndex=_disabledTrackingIndex;
@property(nonatomic) _Bool drawingInDragImage; // @synthesize drawingInDragImage=_isDrawingInDragImage;
@property(nonatomic) _Bool singleClickOpensNode; // @synthesize singleClickOpensNode=_singleClickOpensNode;
@property(retain, nonatomic) TIconViewController *controller; // @synthesize controller=_controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleAXSelectionChange;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)axSelectedChildren;
- (id)axChildren;
- (id)draggedImageWithEvent:(id)arg1 countBadge:(int)arg2 hotPoint:(struct CGPoint *)arg3;
- (BOOL)hasFocus;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (_Bool)editCellTitleAtIndex:(unsigned long long)arg1 withEvent:(id)arg2 select:(_Bool)arg3;
- (id)stfEditorFontForCellAtIndex:(unsigned long long)arg1;
- (unsigned long long)stfEditorTextAlignmentForCellAtIndex:(unsigned long long)arg1;
- (struct CGRect)maxSTFEditorFrameForCellAtIndex:(unsigned long long)arg1;
- (long long)finderGroupIndexAtCellIndex:(long long)arg1;
- (unsigned long long)editingIndex;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (int)nextIndexInGridLayoutWithDirectionKey:(unsigned short)arg1 currentIndex:(long long)arg2;
- (_Bool)isDragImageOpaque;
- (int)defaultHeightOfInfoSpaceWithCurrentViewOptions;
- (void)keyDown:(id)arg1;
- (id)inputContext;
- (_Bool)_typeSelectInterpretKeyEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (double)timeSinceLastMouseMoved;
- (void)rightMouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)invalidateBackBuffer;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)shouldDrawCell:(id)arg1;
- (BOOL)shouldAnimateAppearingAndDisappearingDatasourceItems;
- (id)newCellForRepresentedItem:(id)arg1;
- (Class)iconViewClassForCellClass:(Class)arg1;
- (id)findOrCreateProgressLayerForCell:(id)arg1;
- (id)findOrCreateBadgeLayerForCell:(id)arg1;
- (void)setAlwaysVisibleNode:(const struct TFENode *)arg1;
- (struct TFENode)alwaysVisibleNode;
- (void)ensureAlwaysVisibleNodeInView;
- (void)scrollAlwaysVisibleNodeToVisible;
- (void)scrollAlwaysVisibleNodeToVisibleUsingCenterPoint:(_Bool)arg1;
- (struct CGRect)alwaysVisibleNodeIconFrameForScrolling;
- (void)updateScrollerForAlwaysVisibleNode;
- (id)newCellForRepresentedItem:(id)arg1 useSubClass:(_Bool)arg2;
- (void)quickLookWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (long long)indexOfItemAtPoint:(struct CGPoint)arg1;
- (void)browserDidScroll;
- (void)scrollWheel:(id)arg1;
- (void)updateSTFEditorLocation;
- (void)scrollSTFEditorIntoView;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setDropIndex:(long long)arg1 dropOperation:(int)arg2;
- (void)updateLastMouseDraggedDateAtLocation:(struct CGPoint)arg1;
- (long long)currentDropIndex;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned long long)selectionCountBeforeReloadingData;
- (_Bool)isReloadingData;
- (void)reloadData;
- (BOOL)shouldPreserveVisibleRangeWhileZooming;
- (id)_viewIdentifier;
- (id)viewIdentifierPrefix;
- (void)setTextSize:(double)arg1;
- (void)setLabelsOnRight:(BOOL)arg1;
- (void)setShowItemInfo:(BOOL)arg1;
- (void)setGridSpacing:(double)arg1;
- (void)setSelectedSortSegment:(long long)arg1;
- (void)flushGLContext;
- (_Bool)usingFinderFlavor;
- (void)setDelegate:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

