//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "IPScrollBounceAnimatorTarget.h"
#import "InlineEditProtocol.h"
#import "MultiPanePaneProtocol.h"
#import "NSFileManagerDelegate.h"
#import "NSScrollerImpPairDelegate.h"
#import "RKTerminationDelegateProtocol.h"

@class Album, CALayer, CAScrollHUDLayer, HgRidList, IPKScroller, IPMessageReceiver, IPScrollBounceAnimator, ImageDB, InlineEditController, NSColor, NSImage, NSMenu, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSOperationQueue, NSSet, NSTimer, NSTrackingArea, TypeAheadController;

@interface CAGridView : NSView <MultiPanePaneProtocol, InlineEditProtocol, IPScrollBounceAnimatorTarget, RKTerminationDelegateProtocol, NSScrollerImpPairDelegate, NSFileManagerDelegate>
{
    CALayer *_baseLayer;
    NSImage *_backgroundImage;
    NSColor *_backgroundPattern;
    BOOL _tileBackgroundImage;
    BOOL _scrollBackgroundImage;
    IPKScroller *_scroller;
    IPScrollBounceAnimator *_bounceAnimator;
    ImageDB *_currentDB;
    Album *_currentAlbum;
    HgRidList *_currentPhotoIdList;
    IPMessageReceiver *_DBMessageReceiver;
    BOOL _isActive;
    BOOL _isInstalled;
    BOOL _needHandleDoneWithChanges;
    double _lastClickTime;
    NSMenu *cellContextualMenu;
    NSMutableArray *_accessibilityChildren;
    NSMutableArray *_cellVector;
    struct map<unsigned long, long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, long>>> *_keyIndexMap;
    double _zoomFactor;
    NSMutableArray *_stickyCells;
    int _scrollType;
    BOOL _scrollByItem;
    long long _cellRows;
    long long _cellColumns;
    struct CGSize _viewSize;
    struct CGSize _cellSize;
    long long _zeroColumnOrRowOffset;
    long long _columnOrRowGap;
    long long _virtualHeightOrWidth;
    long long _oldVirtualScrollPosition;
    long long _virtualScrollPosition;
    BOOL _dontTileInSetFrame;
    BOOL _alignTiledBackgroundWithScroll;
    double _lastTiledBackgroundPhase;
    long long _lastTiledBackgroundPatternWidth;
    long long _lastTiledBackgroundPatternHeight;
    BOOL _overrideTiledBackgroundPhase;
    double _overrideTiledBackgroundXPhaseValue;
    double _overrideTiledBackgroundYPhaseValue;
    long long _guardHoverCellIndex;
    long long _lastHoverCellIndex;
    long long _beginUpdateCount;
    long long _zoomPinIndex;
    double _zoomPinPercentage;
    struct RenderCache *_renderCache;
    NSMutableSet *_usedCells;
    NSMutableSet *_availableCells;
    struct map<long, id, std::less<long>, std::allocator<std::pair<const long, id>>> *_cellIndexToCellLayerMap;
    TypeAheadController *_typeAheadController;
    InlineEditController *_inlineEditController;
    long long _selectionAnchor;
    NSMutableIndexSet *_selectedDragCellIndices;
    NSMutableIndexSet *_selectedCellIndices;
    NSMutableIndexSet *_matchedCellIndices;
    NSMutableIndexSet *_dirtyCellIndices;
    NSTrackingArea *_trackingArea;
    BOOL _wantsDragSelection;
    BOOL _singleSelection;
    BOOL _dragSelectActive;
    struct CGPoint _dragSelectionAnchor;
    struct CGRect _dragSelectionRect;
    CALayer *_dragSelectionVisualLayer;
    BOOL _wantQueueScroll;
    BOOL _queueScroll;
    long long _activeBatchCount;
    long long _queuedScrollPosition;
    BOOL _queuedScrollAnimate;
    long long _dragDropTargetIndex;
    long long _dragMoveTargetIndex;
    BOOL _dragMoveHoleAfterPreviousCell;
    BOOL _dragInProcess;
    BOOL _needsRepopulate;
    BOOL _needsResort;
    BOOL _needsSizeToFit;
    BOOL _needsBroadcastSelectionChange;
    BOOL _flipActive;
    BOOL _frameHasBeenSet;
    struct map<long, CGSize, std::less<long>, std::allocator<std::pair<const long, CGSize>>> *_displacementMap;
    map_2b37501f *_toolTipMap;
    double _scrollerVisibilityLoopPreventer;
    NSTimer *_overlayCloseTimer;
    CAScrollHUDLayer *_overlay;
    int _overlayLineOneSize;
    int _overlayLineTwoSize;
    double _overlayMaxRequestedStringWidth;
    BOOL _inThumbScroll;
    struct CGRect _lastTiledRect;
    double _lastZoomFactor;
    double _lastSmartZoomFactor;
    double mAccumRotate;
    long long mRotateInterlock;
    BOOL _inRotateGesture;
    BOOL _inMagnifyGesture;
    BOOL supportsRotation;
    BOOL _needsScrollRestore;
    NSColor *_tilePattern;
    long long _forceColumns;
    NSImage *mTiledBackgroundImage;
    BOOL _inFrameAnimation;
    BOOL _inSetFrame;
    long long _inSetFrameStartingColumns;
    BOOL mUseOperations;
    NSOperationQueue *mQueue;
    NSOperationQueue *_hiresQueue;
    BOOL mAsyncThumbnailLoadRunning;
    BOOL mAbortAsyncThumbnailLoad;
    long long _allowLowResThumbsCount;
    NSTimer *mRestartAsyncScrollTimer;
    NSTimer *mPostUpdateCellsTimer;
    struct CGRect mVirtualPrefetchRect;
    double mUpdatedCellsTimestamp;
    BOOL mAbortPostUpdateCells;
    double _lastKeyEventTimestamp;
    id _scrollerImpPair;
    NSMutableSet *_exportsInProgress;
    NSTimer *_reportMetricsBatchTimer;
    double _timeOfFirstEventBeforeScroll;
    double _sumOfEventToDrawDelta;
    double _maxOfEventToDrawDelta;
    long long _countOfScrollEvents;
    double _timeOfStartUpdateCells;
    double _sumDeltaOfLastUpdateCells;
    double _maxDeltaOfLastUpdateCells;
    long long _updateCellsWithDurationCount;
    double _timeOfLastUpdateCells;
    double _sumOfDrawDelta;
    double _maxOfDrawDelta;
    long long _sumOfAbsoluteScrollDistance;
    long long _maxScrollDistance;
    long long _sumOfNonTrivialScrollDistance;
    long long _countOfNonTrivialScrolls;
    long long _lastDrawnVirtualScrollPosition;
    BOOL _isScrolling;
}

+ (void)initialize;
@property(nonatomic) double overrideTiledBackgroundYPhaseValue; // @synthesize overrideTiledBackgroundYPhaseValue=_overrideTiledBackgroundYPhaseValue;
@property(nonatomic) double overrideTiledBackgroundXPhaseValue; // @synthesize overrideTiledBackgroundXPhaseValue=_overrideTiledBackgroundXPhaseValue;
@property(nonatomic) BOOL overrideTiledBackgroundPhase; // @synthesize overrideTiledBackgroundPhase=_overrideTiledBackgroundPhase;
@property(readonly, nonatomic) long long lastTiledBackgroundPatternHeight; // @synthesize lastTiledBackgroundPatternHeight=_lastTiledBackgroundPatternHeight;
@property(readonly, nonatomic) long long lastTiledBackgroundPatternWidth; // @synthesize lastTiledBackgroundPatternWidth=_lastTiledBackgroundPatternWidth;
@property(readonly, nonatomic) double lastTiledBackgroundPhase; // @synthesize lastTiledBackgroundPhase=_lastTiledBackgroundPhase;
@property(readonly, nonatomic) BOOL alignTiledBackgroundWithScroll; // @synthesize alignTiledBackgroundWithScroll=_alignTiledBackgroundWithScroll;
@property(nonatomic) BOOL needsScrollRestore; // @synthesize needsScrollRestore=_needsScrollRestore;
@property(readonly, nonatomic) long long cellColumns; // @synthesize cellColumns=_cellColumns;
@property(readonly, nonatomic) long long cellRows; // @synthesize cellRows=_cellRows;
@property(readonly, nonatomic) long long virtualScrollPosition; // @synthesize virtualScrollPosition=_virtualScrollPosition;
@property(nonatomic) BOOL supportsRotation; // @synthesize supportsRotation;
@property(nonatomic) BOOL singleSelection; // @synthesize singleSelection=_singleSelection;
@property(nonatomic) BOOL wantsDragSelection; // @synthesize wantsDragSelection=_wantsDragSelection;
@property(nonatomic) double overlayMaxRequestedStringWidth; // @synthesize overlayMaxRequestedStringWidth=_overlayMaxRequestedStringWidth;
@property(nonatomic) int overlayLineTwoSize; // @synthesize overlayLineTwoSize=_overlayLineTwoSize;
@property(nonatomic) int overlayLineOneSize; // @synthesize overlayLineOneSize=_overlayLineOneSize;
@property(nonatomic) BOOL flipActive; // @synthesize flipActive=_flipActive;
@property(nonatomic) BOOL needsSizeToFit; // @synthesize needsSizeToFit=_needsSizeToFit;
@property(nonatomic) BOOL needsRepopulate; // @synthesize needsRepopulate=_needsRepopulate;
@property(nonatomic) BOOL needsResort; // @synthesize needsResort=_needsResort;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(readonly) struct RenderCache *renderCache; // @synthesize renderCache=_renderCache;
@property(retain, nonatomic) IPKScroller *scroller; // @synthesize scroller=_scroller;
@property(nonatomic) BOOL needHandleDoneWithChanges; // @synthesize needHandleDoneWithChanges=_needHandleDoneWithChanges;
@property(nonatomic) BOOL isInstalled; // @synthesize isInstalled=_isInstalled;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) CALayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(readonly, nonatomic) NSSet *usedCells; // @synthesize usedCells=_usedCells;
- (id).cxx_construct;
- (void)_collectUpdateCellsEndMetrics;
- (void)_invalidateReportMetricsBatchTimer;
- (void)_collectUpdateCellsStartMetrics;
- (void)_collectScrollEventMetrics;
- (void)_reportMetricsBatch;
- (void)axUIElement:(id)arg1 performAction:(id)arg2;
- (id)axUIElementActions:(id)arg1;
- (id)axUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)axUIElementAttributeNames:(id)arg1;
- (id)axUIElementTitle:(id)arg1;
- (id)axUIElementHelp:(id)arg1;
- (id)axUIElementDescription:(id)arg1;
- (struct CGRect)axUIElementFrame:(id)arg1;
- (long long)axUIElementIndex:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)_accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityVisibleChildren;
- (id)accessibilitySelectedChildren;
- (void)createAccessibilityChildren;
- (void)flushAccessibilityChildren;
- (void)displayContextualMenuForIndex:(long long)arg1;
- (long long)numberOfRows;
- (long long)numberOfColumns;
- (struct CGRect)frameForIndex:(long long)arg1;
- (void)restoreState:(id)arg1 forMultiPane:(id)arg2;
- (id)archiveStateForMultiPane:(id)arg1;
- (void)refreshToolTips;
- (id)toolTipStringForCellAtIndex:(long long)arg1 toolTipIndex:(long long)arg2;
- (struct CGRect)toolTipRectForCellAtIndex:(long long)arg1 toolTipIndex:(long long)arg2;
- (long long)toolTipsPerCell;
- (BOOL)wantsToolTips;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)overlayCloser:(id)arg1;
- (void)updateOverlay:(BOOL)arg1;
- (id)overlayTextForCurrentScroll:(id *)arg1;
- (void)configureOverlay;
- (BOOL)wantsScrollOverlay;
- (void)cacheImageForCellKey:(unsigned long long)arg1 usingLayer:(id)arg2;
- (BOOL)haveCachedImageForCellAtIndex:(long long)arg1;
- (id)prefetchOperationForCellAtIndex:(long long)arg1 highRes:(BOOL)arg2 abortSelector:(SEL)arg3;
- (void)inlineEdit:(id)arg1 wantsCellAfterCellWithKey:(long long)arg2 fieldIndex:(long long)arg3 moveType:(int)arg4;
- (void)inlineEdit:(id)arg1 wantsCellBeforeCellWithKey:(long long)arg2 fieldIndex:(long long)arg3 moveType:(int)arg4;
- (BOOL)validateFieldValue:(id)arg1 forInlineEdit:(id)arg2 cellKey:(long long)arg3;
- (BOOL)setFieldValue:(id)arg1 forInlineEdit:(id)arg2 cellKey:(long long)arg3 fieldIndex:(long long)arg4;
- (id)fieldValueForInlineEdit:(id)arg1 cellKey:(long long)arg2 fieldIndex:(long long)arg3;
- (long long)fieldCountForInlineEdit:(id)arg1;
- (BOOL)isScrolling;
- (void)animateDropHoleAtIndex:(long long)arg1 afterPreviousCell:(BOOL)arg2 finalForDrop:(BOOL)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)findAnchorImage:(long long *)arg1 centerYPercentage:(double *)arg2;
- (double)centerYPercentageForIndex:(long long)arg1;
- (BOOL)scrollToAnchorImage:(long long)arg1 centerYPercentage:(double)arg2;
- (void)scrollCellWithKeyOnscreen:(unsigned long long)arg1;
- (void)scrollCellAtIndexOnscreen:(long long)arg1;
- (void)scrollCellAtIndexToTop:(long long)arg1 animate:(BOOL)arg2;
- (void)scrollSelectionOnscreen;
- (void)updateCellExtrasWithDuration:(double)arg1;
- (void)postUpdateCompleteOperationBody;
- (void)prefetchBoundaryCellsOperationBody:(id)arg1;
- (void)scheduleBoundaryImagePrefetchOperationBody;
- (void)fillInHighResImagesForCellIndexesOperationBody:(id)arg1;
- (id)abortPostUpdateCells;
- (void)postUpdateCellsTimerFired:(id)arg1;
- (void)stopPostUpdateCellsTimer;
- (void)stopPostUpdateCellsTimerClearingAllQueues:(BOOL)arg1;
- (void)startPostUpdateCellsTimer;
- (void)batchFetchRenderCellsComplete;
- (void)synchronousBatchFetchIndexes:(id)arg1;
- (id)boundaryCellIndexes;
- (void)updateCellsWithDuration:(double)arg1;
- (long long)locateStickyCellAtOrBeforeIndex:(long long)arg1;
- (void)locateStickyCellsInVirtualVisibleRectAtTop:(unsigned long long *)arg1 bottom:(unsigned long long *)arg2 smallestTopSpace:(double *)arg3 smallestBottomSpace:(double *)arg4;
- (void)updateFlagsOnLayer:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)pasteFromPasteboard:(id)arg1 fromSource:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)dragOperationForDragInfo:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (BOOL)allowMoveToCellIndex:(long long)arg1 afterPreviousCell:(BOOL)arg2 dragInfo:(id)arg3 newDragDropTargetIndex:(long long *)arg4 newDragMoveTargetIndex:(long long *)arg5;
- (BOOL)allowDropOnCellIndex:(long long *)arg1 dragInfo:(id)arg2 newDragDropTargetIndex:(long long *)arg3 newDragMoveTargetIndex:(long long *)arg4;
- (BOOL)wantsDropOrMoveTrackingForAvailableTypes:(id)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)dragSelection:(id)arg1 slideBack:(BOOL)arg2;
- (BOOL)willPromiseOnDrag;
- (id)createDragImageForCellIndex:(long long)arg1;
- (void)_drawBadgeImageForCount:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (struct CGSize)_badgeImageSizeForCount:(unsigned long long)arg1;
- (unsigned long long)applicationShouldTerminate;
- (void)_promiseExporterCompleted:(id)arg1;
- (void)_exportPromisedVersions:(id)arg1 destinationPath:(id)arg2;
- (id)promisableVersions;
- (BOOL)allowDragOfSelection;
- (void)registerAcceptedDragTypes;
- (void)populateGeneralPasteboard;
- (void)populateDragPasteboard;
- (void)populatePasteboard:(id)arg1 clearContents:(BOOL)arg2;
- (void)editImageInAlternateEditor:(id)arg1;
- (void)editImage:(id)arg1;
- (void)selectNone:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)trashAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_setZoomPosition:(double)arg1 andNotify:(BOOL)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)wantsTypeAhead;
- (BOOL)handleKeyDown:(id)arg1 key:(unsigned short)arg2 modifiers:(unsigned long long)arg3;
- (void)deleteSelectedItems:(id)arg1 forceMoveToTrash:(BOOL)arg2;
- (void)deleteSelectedItems:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)menuForEvent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_refreshSelectedCells;
- (void)updateFlipAnimation:(long long)arg1;
- (void)hideFlip;
- (void)showFlipForCell:(long long)arg1;
- (BOOL)isEdittingMetaData;
- (void)inlineEditCell:(long long)arg1 hitIndex:(long long)arg2 event:(id)arg3;
- (void)emptySpaceDoubleClickedWithEventModifiers:(unsigned long long)arg1;
- (void)cellDoubleClicked:(long long)arg1 eventModifiers:(unsigned long long)arg2;
- (BOOL)specialClick:(CDStruct_fb816f7b *)arg1 hitSomething:(BOOL)arg2 trackHit:(BOOL)arg3 event:(id)arg4;
- (BOOL)trackClick:(id)arg1 hitInfo:(CDStruct_fb816f7b *)arg2;
- (BOOL)layerHitTest:(struct CGPoint)arg1 clickCount:(long long)arg2 hitInfo:(CDStruct_fb816f7b *)arg3;
- (void)trackDragSelectForEvent:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)_smartZoom;
- (void)updateHoverCellLocation:(struct CGPoint)arg1;
- (void)setHoverCellIndex:(long long)arg1;
- (void)removeTracking;
- (void)addTracking;
- (void)scrollBounceAnimator:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)scrollBounceAnimatorCurrentContentOffset:(id)arg1;
- (struct CGPoint)scrollBounceAnimatorMaximumContentOffset:(id)arg1;
- (struct CGPoint)scrollBounceAnimatorMinimumContentOffset:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_turnOffScrollingFlag;
- (void)scrollRows:(long long)arg1;
- (void)gridScroll:(id)arg1;
- (void)thumbnailDataLoaded;
- (void)prefetchCellsAtIndexesDone;
- (void)prefetchCellsCompleteOperationBody;
- (void)thumbnailDataLoaded:(id)arg1;
- (id)abortAsyncThumbnailLoad;
- (BOOL)startAsyncThumbnailLoad:(id)arg1;
- (void)stopAsyncThumbnailLoad;
- (BOOL)isAsyncThumbnailLoadRunning;
- (BOOL)prefetchUsingThumbnailManager;
- (void)startAsyncScroll;
- (void)restartAsyncScrollTimerFired:(id)arg1;
- (void)waitForBackgroundTasksToComplete;
- (id)recordsByLayerClassForIndexes:(id)arg1;
- (BOOL)scrollToPosition:(long long)arg1 animate:(BOOL)arg2;
- (BOOL)_scrollToPosition:(long long)arg1 animate:(BOOL)arg2;
- (struct CGRect)keywordActionIndicatorLocation;
- (void)viewDidEndLiveResize;
@property(retain, nonatomic) Album *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
- (long long)stretchAmount;
- (long long)maximumScrollPosition;
- (long long)loadScrollPositionForCurrentAlbum;
- (void)saveScrollPositionForCurrentAlbum;
@property(retain) ImageDB *currentDB;
- (void)albumMessageHandler:(id)arg1;
- (void)handleDbMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (void)handleDoneWithChanges;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)sheetBeginning:(id)arg1;
- (void)modifiersChanged:(id)arg1;
- (void)preferencesChanged:(id)arg1;
- (void)selectTypeAheadMatches;
- (void)focusPrevTypeAheadMatch;
- (void)focusNextTypeAheadMatch;
- (void)updateTypeAheadMatches:(id)arg1;
- (id)indexSetOfUsedCells;
- (void)relinquishCellLayerForIndex:(long long)arg1;
- (id)cellLayerForIndex:(long long)arg1 create:(BOOL)arg2;
- (id)gridCellAvailablePoolForLayer:(id)arg1;
- (Class)gridCellLayerClassForIndex:(long long)arg1 availablePool:(id *)arg2;
- (void)drainCellCacheAndTile;
- (void)clearThumbnailCacheWithUpdate:(BOOL)arg1;
- (void)clearThumbnailCache;
- (void)uncachePhotosWithKeys:(id)arg1;
- (void)uncachePhotoWithKey:(unsigned long long)arg1;
- (void)dirtyCellsWithKeys:(id)arg1;
- (void)dirtyCellWithKey:(unsigned long long)arg1;
- (void)dirtyCellsAtIndices:(id)arg1;
- (void)dirtyCellAtIndex:(long long)arg1;
- (void)endUpdate;
- (void)endUpdateWithDuration:(double)arg1;
- (void)beginUpdate;
- (struct CGRect)virtualVisibleRect;
- (void)refreshScroller;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawTileGradientLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)useFullScreenGradientTile;
- (void)makeLayerHoster;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateUIForBackgroundColorChange;
- (int)_scrollerStyleForWhite:(double)arg1;
- (void)setBackgroundImage:(id)arg1 tiled:(BOOL)arg2 scrolling:(BOOL)arg3;
- (BOOL)inLiveResize;
- (void)scrollerImpPair:(id)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;
- (void)setScrollerStyle:(long long)arg1;
- (BOOL)scrollerImpPair:(id)arg1 isContentPointVisible:(struct CGPoint)arg2;
- (void)scrollerImpPair:(id)arg1 setContentAreaNeedsDisplayInRect:(struct CGRect)arg2;
- (struct CGPoint)scrollerImpPair:(id)arg1 convertContentPoint:(struct CGPoint)arg2 toScrollerImp:(id)arg3;
- (struct CGPoint)mouseLocationInContentAreaForScrollerImpPair:(id)arg1;
- (BOOL)inLiveResizeForScrollerImpPair:(id)arg1;
- (struct CGRect)contentAreaRectForScrollerImpPair:(id)arg1;
- (BOOL)isCellSelectableAtIndex:(long long)arg1;
- (void)moveSelection:(int)arg1 shiftKeyDown:(BOOL)arg2;
- (void)selectCellsInRect:(struct CGRect)arg1 selected:(BOOL)arg2 requireImageHit:(BOOL)arg3;
- (void)selectCellsWithKeys:(id)arg1 selected:(BOOL)arg2;
- (void)selectCellWithKey:(unsigned long long)arg1 selected:(BOOL)arg2;
- (void)selectCellAtIndex:(long long)arg1 selected:(BOOL)arg2;
- (void)selectCellsWithIndices:(id)arg1 selected:(BOOL)arg2;
- (void)setSelectionAnchorToCellIndex:(long long)arg1;
- (void)selectCellAtIndex:(long long)arg1 replacing:(BOOL)arg2 extending:(BOOL)arg3;
- (id)selectedCellKeys;
- (id)selectedCellIndicies;
- (BOOL)isCellSelectedWithKey:(unsigned long long)arg1;
- (BOOL)isCellSelectedWithIndex:(long long)arg1;
- (unsigned long long)selectionCount;
- (BOOL)hasSelection;
- (void)selectNone;
- (void)selectAll;
- (void)broadcastSelectionChanged;
- (id)selectableCellIndices:(id)arg1;
- (id)selectableCellIndex:(unsigned long long)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (void)emptyCellVector;
- (void)layoutCellVectorNoColumnChange;
- (void)layoutCellVector;
- (void)populateCellVector;
- (unsigned long long)cellCount;
- (void)tile;
- (void)tile:(double)arg1;
- (void)_recomputeColumnsAndRelayout;
- (BOOL)scrollerIsHidden;
- (void)relayout;
- (long long)computeRowCount;
- (double)zoomFactorForCellSize:(struct CGSize)arg1;
- (double)zoomFactorToPreserveColCount;
- (struct CGSize)cellSizeForZoomFactor:(double)arg1;
- (long long)renderCacheSizeForCurrentCellSize;
- (struct CGSize)imageSizeForCurrentCellSize;
- (struct CGSize)maxCellSize;
- (struct CGSize)minCellSize;
- (struct CGSize)viewSize;
- (BOOL)isCellSizeInitialized;
- (void)stopZoomTracking:(id)arg1;
- (void)startZoomTracking:(id)arg1;
- (id)cellDataForCellWithKey:(unsigned long long)arg1;
- (id)cellDataForCellAtIndex:(long long)arg1;
- (struct CGRect)cellMetaRectForCellWithKey:(unsigned long long)arg1;
- (struct CGRect)cellMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellMetaRectForRow:(long long)arg1 column:(long long)arg2;
- (struct CGRect)cellUsedImageRectForCellWithKey:(unsigned long long)arg1;
- (struct CGRect)cellUsedImageRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellUsedImageRectForRow:(long long)arg1 column:(long long)arg2;
- (struct CGRect)cellImageRectForCellWithKey:(unsigned long long)arg1;
- (struct CGRect)cellDropTargetRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellImageRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellImageRectForRow:(long long)arg1 column:(long long)arg2;
- (struct CGRect)cellRectForCellWithKey:(unsigned long long)arg1;
- (struct CGRect)cellRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellRectForRow:(long long)arg1 column:(long long)arg2;
- (long long)cellIndexForRow:(long long)arg1 column:(long long)arg2;
- (id)cellIndicesInRect:(struct CGRect)arg1 wholeOnly:(BOOL)arg2 requireImageHit:(BOOL)arg3;
- (id)cellIndicesInVirtualVisibleRect:(BOOL)arg1 requireImageHit:(BOOL)arg2;
- (long long)cellIndexForPoint:(struct CGPoint)arg1;
- (id)cellKeysForCellIndices:(id)arg1;
- (id)cellIndicesForCellKeys:(id)arg1;
- (long long)cellIndexForCellKey:(unsigned long long)arg1;
- (unsigned long long)cellKeyForCellAtIndex:(long long)arg1;
- (long long)columnsInRow:(long long)arg1;
- (long long)point:(struct CGPoint)arg1 toRow:(long long *)arg2 column:(long long *)arg3;
- (void)cellKey:(unsigned long long)arg1 toRow:(long long *)arg2 column:(long long *)arg3;
- (void)cellIndex:(long long)arg1 toRow:(long long *)arg2 column:(long long *)arg3;
- (id)allCellKeys;
- (struct CGRect)documentRectFromLayerRect:(struct CGRect)arg1;
- (struct CGRect)layerRectFromDocumentRect:(struct CGRect)arg1;
- (struct CGRect)documentRectFromViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectFromDocumentRect:(struct CGRect)arg1;
- (struct CGRect)layerRectFromViewRect:(struct CGRect)arg1;
- (struct CGRect)viewRectFromLayerRect:(struct CGRect)arg1;
- (struct CGPoint)documentPointFromLayerPoint:(struct CGPoint)arg1;
- (struct CGPoint)layerPointFromDocumentPoint:(struct CGPoint)arg1;
- (struct CGPoint)documentPointFromViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointFromDocumentPoint:(struct CGPoint)arg1;
- (struct CGPoint)layerPointFromViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)viewPointFromLayerPoint:(struct CGPoint)arg1;
- (BOOL)acceptsFirstResponder;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)willSetFrameFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (BOOL)useCAFrameResize;
- (void)awakeFromNib;
- (void)_preferredScrollerStyleChanged:(id)arg1;
- (int)scrollerStyle;
- (id)bounceAnimator;
- (BOOL)_hasLionOverlayScroller;
- (void)updateObstruficatedCSFromNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
