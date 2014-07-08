//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "VisualTabPickerNewTabViewDelegate.h"
#import "VisualTabPickerThumbnailDataSource.h"
#import "VisualTabPickerThumbnailDelegate.h"

@class NSMutableArray, NSString, NSTextField, VisualTabPickerGridView;

__attribute__((visibility("hidden")))
@interface VisualTabPickerTileContainerView : NSView <VisualTabPickerNewTabViewDelegate, VisualTabPickerThumbnailDataSource, VisualTabPickerThumbnailDelegate>
{
    NSMutableArray *_thumbnailViews;
    NSView *_3DContainerView;
    NSTextField *_title;
    BOOL _didSetTileConstraints;
    id <VisualTabPickerTileContainerDataSource> _dataSource;
    id <VisualTabPickerTileContainerDelegate> _delegate;
    VisualTabPickerGridView *_visualTabPickerGridView;
    long long _tileContainerType;
}

+ (double)yOffsetBetweenStackedThumbnails;
+ (double)thumbnailYOffset;
@property(nonatomic) long long tileContainerType; // @synthesize tileContainerType=_tileContainerType;
@property(nonatomic) __weak VisualTabPickerGridView *visualTabPickerGridView; // @synthesize visualTabPickerGridView=_visualTabPickerGridView;
@property(nonatomic) __weak id <VisualTabPickerTileContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VisualTabPickerTileContainerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct CATransform3D)_tile3DTransform;
- (void)_updateLayoutForTile:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)_updateTilesLayout;
- (void)_updateHorizontalConstraintForTile:(id)arg1;
- (void)_updateVerticalConstraintForTile:(id)arg1;
- (void)_createTileAtIndex:(unsigned long long)arg1;
- (struct CGRect)_containerTileFrame;
- (void)_setUpTiles;
- (void)_setUp3DContainerForTiles;
- (void)_createNewTabContainerView;
- (id)_createTitleTextField;
- (void)_setUpTitleView;
- (void)mouseMoved:(id)arg1;
- (void)didRequestNewTabForVisualTabPickerNewTabView:(id)arg1;
- (void)didCloseVisualTabPickerThumbnailView:(id)arg1;
- (void)didSelectVisualTabPickerThumbnailView:(id)arg1;
- (struct CGRect)originalWebViewFrameForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)viewForVisualTabPickerTileThumbnailView:(id)arg1;
- (id)titleForVisualTabPickerThumbnailView:(id)arg1;
- (void)animateToolbarForThumbnailAtIndex:(unsigned long long)arg1 image:(id)arg2 height:(double)arg3 gridAnimation:(long long)arg4;
- (void)resetScaleFactorForThumbnailAtIndex:(unsigned long long)arg1;
- (struct CGRect)thumbnailContainerFrameForThumbnailAtIndex:(unsigned long long)arg1;
- (void)_startStackFoldingAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3;
- (void)startTiltAnimation:(long long)arg1 animationDuration:(double)arg2 indexOfSelectedTile:(unsigned long long)arg3;
- (void)layout;
- (void)hideCloseButtons;
- (unsigned long long)numberOfTilesInContainer;
- (void)removeTileAtIndex:(unsigned long long)arg1;
- (void)addTileAtIndex:(unsigned long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)makeBackingLayer;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerGridView:(id)arg2 containerType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

