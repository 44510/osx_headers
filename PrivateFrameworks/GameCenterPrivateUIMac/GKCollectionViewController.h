//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSCollectionViewController.h>

#import "GKCollectionViewDataSourceDelegate.h"
#import "GKComposeControllerDelegate.h"
#import "GKSegmentedSectionDataSourceEventHandler.h"
#import "GKStateMachineDelegate.h"
#import "NSTextFieldDelegate.h"

@class GKColorPalette, GKLoadableContentStateMachine, GKPlaceholderView, GKSearchBar, NSCollectionViewLayout, NSString, UIActivityIndicatorView;

@interface GKCollectionViewController : NSCollectionViewController <GKComposeControllerDelegate, GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, NSTextFieldDelegate, GKSegmentedSectionDataSourceEventHandler>
{
    BOOL _skipLoadAfterViewDidLoad;
    BOOL _shouldSlideInContents;
    BOOL _supportsMasterSelectionBehavior;
    BOOL _showSupplementaryViewsWhileLoading;
    BOOL _readyToDisplayData;
    BOOL _active;
    BOOL _hasViewFactories;
    BOOL _didSlideIn;
    int _previousOrientation;
    GKColorPalette *_colorPalette;
    id <NSCollectionViewDataSource> _dataSource;
    NSString *_currentSearchText;
    GKLoadableContentStateMachine *_loadingMachine;
    NSCollectionViewLayout *_defaultLayout;
    GKSearchBar *_activeSearchBar;
    UIActivityIndicatorView *_loadingIndicatorView;
    GKPlaceholderView *_placeholderView;
    long long _gkFocusBubbleType;
    long long _appearCount;
    CDStruct_3c058996 _contentInsetsBeforeKeyboard;
    CDStruct_3c058996 _scrollInsetsBeforeKeyboard;
}

@property(nonatomic) CDStruct_3c058996 scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) CDStruct_3c058996 contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property long long appearCount; // @synthesize appearCount=_appearCount;
@property BOOL didSlideIn; // @synthesize didSlideIn=_didSlideIn;
@property BOOL hasViewFactories; // @synthesize hasViewFactories=_hasViewFactories;
@property BOOL active; // @synthesize active=_active;
@property(nonatomic) int previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) long long gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(retain, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) GKSearchBar *activeSearchBar; // @synthesize activeSearchBar=_activeSearchBar;
@property(retain, nonatomic) NSCollectionViewLayout *defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(readonly, nonatomic) BOOL readyToDisplayData; // @synthesize readyToDisplayData=_readyToDisplayData;
@property(nonatomic) BOOL showSupplementaryViewsWhileLoading; // @synthesize showSupplementaryViewsWhileLoading=_showSupplementaryViewsWhileLoading;
@property(nonatomic) BOOL supportsMasterSelectionBehavior; // @synthesize supportsMasterSelectionBehavior=_supportsMasterSelectionBehavior;
@property(retain, nonatomic) id <NSCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) BOOL shouldSlideInContents; // @synthesize shouldSlideInContents=_shouldSlideInContents;
- (void)clearSelectionHighlight;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)didDisplayData;
- (void)hidePlaceholderAnimated:(BOOL)arg1;
- (void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(BOOL)arg4 block:(CDUnknownBlockType)arg5;
- (void)slideInContents;
- (void)completeWhenReadyToDisplayData:(CDUnknownBlockType)arg1;
- (void)didBecomeReadyToDisplayData;
- (void)setIsReadyToDisplayData:(BOOL)arg1;
- (void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2;
- (void)stopLoadingIndicator;
- (void)stopLoadingIndicatorWithoutAnimation;
- (void)startLoadingIndicator;
- (BOOL)hasLoaded;
- (void)_reallyStartLoadingIndicator;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didEnterLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (void)stateDidChange;
- (void)stateWillChange;
@property(readonly, nonatomic) NSString *loadingState;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2;
- (double)showMoreTextMarginAtIndexPath:(id)arg1;
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1;
- (void)didTouchShowMore:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(BOOL)arg2;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)_applyUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)setNeedsReload;
- (void)invalidateSearch;
- (id)currentSearchTerms;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (id)defaultColorPalette;
- (id)defaultBubbleSpec;
- (id)gkDataSource;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)updateMetrics;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)showDetailForSelectedItem;
- (id)preservedIndexPathForSelectedItem;
- (void)updateSelectionHighlight;
- (void)viewDidLoad;
- (void)loadView;
- (id)collectionView;
- (id)_gkRecursiveDescription;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)scrollViewDidLiveScroll:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)showCollectionView;
@property(nonatomic) BOOL skipLoadAfterViewDidLoad;
- (void)forfeitTurnBasedMatch:(id)arg1;
- (void)removeTurnBasedMatch:(id)arg1;
- (void)composeControllerWasCancelled:(id)arg1;
- (void)composeController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)showComposeControllerForChallenge:(id)arg1 players:(id)arg2 fromView:(id)arg3;
- (void)reportProblem:(id)arg1;
- (void)composeChallenge:(id)arg1;
- (void)declineChallenge:(id)arg1;
- (void)playGame:(id)arg1;
- (void)removeGame:(id)arg1;
- (void)shareGame:(id)arg1;
- (void)showSharePickerRelativeToCursor:(id)arg1;
- (void)buyGame:(id)arg1;
- (void)shareScore:(id)arg1;
- (void)shareAchievement:(id)arg1;
- (void)unfriendPlayer:(id)arg1;
- (void)sendFriendRequest:(id)arg1;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

