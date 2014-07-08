//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKImageBrowserView.h"

#import "IKSlideshowDataSource.h"

@class PBAssetCollection, PBEmbossedTextField, PBImageCell, PBTrayBackgroundLayer, PBTrayFrontLayer;

@interface PBTrayView : IKImageBrowserView <IKSlideshowDataSource>
{
    PBAssetCollection *_assetCollection;
    PBImageCell *_lastSelectedCell;
    double _scrollValue;
    PBEmbossedTextField *ibPhotoCountTextField;
    BOOL _reloadingCollection;
    PBTrayFrontLayer *_trayFrontLayer;
    PBTrayBackgroundLayer *_trayBackgroundLayer;
    BOOL _fullScreenMode;
    BOOL _isDeveloppingPhoto;
    unsigned long long _firstVisibleCellIndex;
    unsigned long long _lastVisibleCellIndex;
    unsigned long long _clickedDeleteButtonCellIndex;
    unsigned long long _lastManuallySelectedCellIndex;
    unsigned long long _clickedItemOnMouseDownCellIndex;
    unsigned long long _contextualMenuCellIndex;
    BOOL _mouseWasDragged;
}

@property(nonatomic) BOOL isDeveloppingPhoto; // @synthesize isDeveloppingPhoto=_isDeveloppingPhoto;
@property(nonatomic) BOOL fullScreenMode; // @synthesize fullScreenMode=_fullScreenMode;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)newCellForRepresentedItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)assetsForContextualMenu;
- (void)appendNewAsset:(id)arg1;
- (void)_do3DAnimation:(id)arg1;
- (void)_do2DAnimation:(id)arg1;
- (void)refreshPhotoCount;
- (void)_refreshSelectedAssetPreviewImage;
- (void)reloadData;
- (void)undoDeleteAssetsFromInfo:(id)arg1;
- (void)deleteAssetsFromContextualMenu;
- (void)deleteSelection;
- (void)deleteAssets:(id)arg1;
- (void)_updateSelectedForNewItemIndex:(long long)arg1;
- (void)saveTALState;
- (void)assetPreviewWasUpdated:(id)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)loadVisibleAssetPreviews;
- (void)scrollLastItemToVisibleWithAnimation:(BOOL)arg1;
- (void)scrollIndexToVisible:(long long)arg1;
- (void)scrollIndexToVisible:(long long)arg1 animate:(BOOL)arg2;
- (void)saveLastVisibleCellIndex;
- (void)_showOverlayScroller;
- (id)assetCollection;
- (BOOL)acceptsFirstResponder;
- (BOOL)mouseDownCanMoveWindow;
- (void)awakeFromNib;
- (BOOL)isOpaque;
- (BOOL)wantsDefaultClipping;
- (void)slideshowDidStop;
- (void)slideshowWillStart;
- (id)nameOfSlideshowItemAtIndex:(unsigned long long)arg1;
- (id)slideshowItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSlideshowItems;
- (void)selectLastCell;
- (BOOL)validateMenuItem:(id)arg1;
- (id)selectedAssets;
- (void)setLastSelectedCell:(id)arg1;
- (id)lastSelectedCell;
- (void)deselectAllCells;
- (void)selectAllCells;
- (void)selectCell:(id)arg1;
- (void)selectCellsAtIndices:(id)arg1;
- (void)_setLastSelectedCell:(id)arg1;
- (void)browserDidScroll;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (id)datasourceArray;

@end

