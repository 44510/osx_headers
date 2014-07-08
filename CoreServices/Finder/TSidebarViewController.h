//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

#import "ISpawnOriginDelegateProtocol.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "QLSeamlessCloserDelegate.h"
#import "TSpringDelegate.h"

@class NSString, TBrowserContainerController, TSidebarView, TSpringController;

@interface TSidebarViewController : TViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSMenuDelegate, TSpringDelegate, ISpawnOriginDelegateProtocol, QLSeamlessCloserDelegate>
{
    TSidebarView *_sidebarView;
    TBrowserContainerController *_containerController;
    TSpringController *_springController;
    struct TSidebarViewContainer *_container;
    struct TNSRef<NSMutableArray *> _zones;
    _Bool _repopulating;
    _Bool _suppressSelectionUpdate;
    _Bool _selectionChangingProgramatically;
    _Bool _suspendRepopulation;
    _Bool _suspendedRepopulationPending;
    _Bool _restoringExpandedState;
    _Bool _drawForChasingArrowAnimationFrame;
    _Bool _animationsSuspended;
    long long _runningAnimationFrame;
    int _dragClickStartZone;
    struct TFENode _privateDragNode;
    _Bool _privateDrag;
    struct CGPoint _dragStartGlobalPoint;
    double _dragStartTime;
    struct TFENode _nodeToIncludeInDrop;
    _Bool _isCurrentDragARemove;
    struct TFENode _editedNode;
    double _optimalWidthCache;
    struct TFENodeVector _animatedCells;
    struct vector<TNSRef<NSWindow *>, std::__1::allocator<TNSRef<NSWindow *>>> _animatedCellViews;
    struct CGRect _currentlyAnimatingCellFrame;
    int _currentAnimationHighlightState;
    long long _currentAnimationFrameIndex;
    long long _rowSizeStyleForOptimalWidthCache;
    struct TFENode _nodeBeingClicked;
    struct TNSRef<NSMutableIndexSet *> _hiddenZones;
    struct TRef<dispatch_queue_s *, TRetainReleasePolicy<dispatch_queue_t>> _backupItemDimnessQueue;
    unsigned long long _validatorID;
}

+ (void)actionButtonCoreUIOrLegacyImage:(int)arg1 highlighted:(_Bool)arg2 mouseState:(int)arg3 coreUIName:(const struct __CFString **)arg4 appKitImageName:(id *)arg5 color:(struct TColor *)arg6 legacyImageID:(long long *)arg7 animate:(_Bool *)arg8 scaleFactor:(double)arg9;
+ (void)removeFromAnimationTimerQueue:(id)arg1;
+ (void)addToAnimationTimerQueue:(id)arg1;
+ (_Bool)nodeShouldAnimate:(const struct TFENode *)arg1;
+ (double)minimumSidebarWidth;
+ (double)defaultSidebarWidth;
+ (id)sidebarViewControllerWithFrame:(struct CGRect)arg1 container:(struct TSidebarViewContainer *)arg2;
+ (void)initialize;
@property(nonatomic) _Bool restoringExpandedState; // @synthesize restoringExpandedState=_restoringExpandedState;
@property(retain, nonatomic) TSpringController *springController; // @synthesize springController=_springController;
@property(readonly, nonatomic) TBrowserContainerController *containerController; // @synthesize containerController=_containerController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isZoneHidden:(int)arg1;
- (void)hideZone:(int)arg1;
- (void)showZone:(int)arg1;
- (void)selectNode:(const struct TFENode *)arg1;
- (struct TFENode)selectedNode;
- (void)rowHit:(long long)arg1;
- (_Bool)handleQuickLookWithEvent:(id)arg1;
- (void)removeNode:(struct TFENode)arg1;
- (id)cellForIndex:(unsigned long long)arg1 inZone:(int)arg2;
- (id)cellForNode:(const struct TFENode *)arg1;
- (long long)rowForNode:(const struct TFENode *)arg1 inZone:(int)arg2;
- (long long)rowForNode:(const struct TFENode *)arg1;
- (int)zoneKind:(id)arg1;
- (void)invalidateOptimalWidthCache;
- (struct CGSize)idealViewSize;
- (double)optimalWidth;
- (double)optimalWidthForZone:(int)arg1;
- (double)optionalScrollbarWidth;
- (double)optimalWidthNoScrollbar;
- (double)optimalHeight;
- (void)renamedTo:(id)arg1;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingWithNode:(const struct TFENode *)arg1;
- (void)setEditedNode:(const struct TFENode *)arg1;
- (const struct TFENode *)editedNode;
- (void)possibleSpringTargetNode:(const struct TFENode *)arg1;
- (void)springRefreshNode:(const struct TFENode *)arg1;
- (void)springNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;
- (long long)validatorID;
- (id)window;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (_Bool)shouldShowMenuForEvent:(id)arg1;
- (_Bool)privateDrag;
- (_Bool)scrollerIsVisible;
- (struct TFENode)sidebarNode:(const struct TFENode *)arg1;
- (_Bool)canTarget:(id)arg1;
- (_Bool)isDimmed:(id)arg1;
- (_Bool)quicklyCheckIfNode:(const struct TFENode *)arg1 isDimmed:(_Bool *)arg2;
- (_Bool)isBackupBrowser;
- (void)actionButtonPostAction:(id)arg1;
- (struct TFENode)nodeForClick;
- (void)startOrStopAnimations;
- (void)updateAnimationStateForCell:(id)arg1;
- (void)updateAnimationStateForCell:(id)arg1 startOnly:(_Bool)arg2;
- (void)startAnimating:(const struct TFENode *)arg1;
- (void)nextAnimationFrame;
- (long long)currentAnimationFrameIndex;
- (void)runAnimationFrame;
- (void)runAnimationFrameDetails;
- (_Bool)isSidebarCollapsed;
- (void)stopAllAnimations;
- (void)stopAnimating:(const struct TFENode *)arg1;
- (void)hideAnimationOverlayWindowForNode:(const struct TFENode *)arg1;
- (void)removeOverlayWindowAtIndex:(unsigned long long)arg1;
- (_Bool)nodeShouldAnimateIcon:(const struct TFENode *)arg1;
- (_Bool)shouldAnimateOverlay;
- (_Bool)shouldShowTagsColumn;
- (void)updateSelectionForCurrentTarget;
- (void)updateSelectionForTarget:(const struct TFENode *)arg1;
- (void)aboutToTearDown;
- (id)nibName;
- (void)removedFromWindow;
- (void)finalize;
- (void)dealloc;
- (void)commonDealloc;
- (id)initWithFrame:(struct CGRect)arg1 container:(struct TSidebarViewContainer *)arg2;
- (id)init:(id)arg1 frame:(struct CGRect)arg2;
- (void)initCommon;
- (_Bool)isStrictlyBackupBrowser;
- (id)sidebar;
- (struct CGRect)cellFrameForNode:(const struct TFENode *)arg1;
- (long long)indexInZoneHelper:(id)arg1 forNode:(const struct TFENode *)arg2 zoneOffset:(long long *)arg3;
- (void)repopulateReadZoneOrderFromPrefs:(_Bool)arg1;
- (void)unloadContents;
- (int)zoneIndex:(int)arg1;
- (void)loadContentsReadZoneOrderFromPrefs:(_Bool)arg1;
- (void)handleBackupAllZonesLoaded;
- (void)reloadZone:(int)arg1;
- (void)reloadOneZone:(const struct TFENodeVector *)arg1 zoneKind:(int)arg2;
- (void)handleBackupDimnessCheck:(const struct TFENodeVector *)arg1;
- (struct dispatch_queue_s *)backupItemDimnessQueue;
- (void)updateZoneExpandedState;
- (_Bool)globalDisclosedStateForZone:(int)arg1;
- (void)saveGlobalDisclosedState:(int)arg1;
- (int)preferenceKeyForZone:(int)arg1;
- (void)expandCollapseZoneKind:(int)arg1 expand:(_Bool)arg2;
- (void)expandCollapseZone:(id)arg1 expand:(_Bool)arg2;
- (_Bool)isZoneExpanded:(int)arg1;
- (_Bool)isZoneListExpanded:(id)arg1;
- (_Bool)isZoneCellExpanded:(id)arg1;
- (int)zoneForCell:(id)arg1;
- (id)zoneHeaderForKind:(int)arg1;
- (id)zoneHeaderForZone:(id)arg1;
- (id)zoneList:(int)arg1;
- (_Bool)itemIsZone:(id)arg1 zone:(int)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (_Bool)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (_Bool)outlineViewShouldSlideBackAfterDragFailed:(id)arg1;
- (void)outlineView:(id)arg1 draggingExited:(id)arg2;
- (void)outlineView:(id)arg1 draggingEntered:(id)arg2;
- (void)outlineView:(id)arg1 draggingEndedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 movedTo:(struct CGPoint)arg3;
- (void)updatePasteboardToMatchDragStateIfNeeded;
- (void)updateCursorToMatchDragPoofState;
- (_Bool)dragShouldRemove;
- (_Bool)draggingLongEnough;
- (_Bool)dragPastSidebarEdgeThresholdDistance:(struct CGPoint)arg1;
- (_Bool)dragPastRemovalThresholdDistance:(struct CGPoint)arg1;
- (_Bool)isDragOverDock;
- (_Bool)isDragOverMenuBar;
- (_Bool)isDragInsideView;
- (_Bool)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (_Bool)acceptDropDetails:(id)arg1 item:(id)arg2 childIndex:(long long)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (unsigned long long)validateDropCommon:(id)arg1 proposedItem:(id)arg2 proposedChildIndex:(long long)arg3;
- (struct TString)tagNameFromURL:(id)arg1;
- (id)tagURLForSingleTagOnPasteboard:(id)arg1;
- (unsigned long long)validateNoZoneDrop;
- (struct TFENode)draggedNode;
- (_Bool)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)updatePasteboardToMatchDragState:(id)arg1 dropNode:(const struct TFENode *)arg2 dragRemove:(_Bool)arg3;
- (_Bool)itemIsZoneHeader:(id)arg1;
- (_Bool)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (_Bool)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (_Bool)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)preferencesUpdated:(id)arg1;
- (void)didExitFullScreen:(id)arg1;
- (void)willExitFullScreen:(id)arg1;
- (void)didEnterFullScreen:(id)arg1;
- (void)willEnterFullScreen:(id)arg1;
- (void)windowZoomDidComplete:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)handleItemsChanged:(id)arg1;
- (void)handleItemsAddedRemovedReordered:(id)arg1;
- (void)handleSharedSectionVibilityChanged:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

