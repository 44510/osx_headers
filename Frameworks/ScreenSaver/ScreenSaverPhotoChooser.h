//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ILMediaBrowserView, ILMediaManager, NSArray, NSMutableArray, NSString, NSWindow, ScreenSaverDefaults;

@interface ScreenSaverPhotoChooser : NSObject
{
    ScreenSaverDefaults *_defaults;
    unsigned long long _currentPhotoChooserSource;
    NSString *_selectedMediaGroupID;
    BOOL _iLifeLockedAndLoaded;
    BOOL _photoStreamDetected;
    ILMediaManager *_iPhotoMediaManager;
    ILMediaManager *_apertureMediaManager;
    ILMediaManager *_folderMediaManager;
    NSArray *_latestiPhotoEvents;
    NSArray *_latestApertureProjects;
    NSArray *_defaultCollections;
    NSWindow *_mediaChooserWindow;
    ILMediaBrowserView *_mediaBrowserView;
    CDUnknownBlockType _sourceMenuLoadedBlock;
    NSMutableArray *_blocksToCallOnceFinishedLoading;
}

+ (id)photoChooser;
- (id)popUpMenuForChoosingPhotosWithiPhotoEvents:(id)arg1 apertureProjects:(id)arg2;
- (id)_mediaGroupsForPhotoChooserSource:(unsigned long long)arg1;
- (id)_mediaGroupForID:(id)arg1;
- (id)_imagePathsForMediaGroupID:(id)arg1;
- (id)_imageFilesInDirectory:(id)arg1;
- (BOOL)photoStreamDetected;
- (void)resetToDefaultImageSelection;
- (void)generateLatestPhotosInGroups;
- (void)checkLoadingMediaManagersForPhotoListRequest;
- (void)loadiLifeSources;
- (void)resetLastViewedPhotoPath;
- (void)setLastViewedPhotoPath:(id)arg1 forScreenSaverView:(id)arg2;
- (void)changeToSourceType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)sourceItemsForPhotoChooserSource:(unsigned long long)arg1;
- (id)currentlySelectedName;
- (id)currentlySelectedIdentifierInsideSource;
- (unsigned long long)currentlySelectedSourceType;
- (BOOL)mediaBrowserView:(id)arg1 shouldPreviewDoubleClickedItem:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldSelectMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaObject:(id)arg2;
- (BOOL)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2;
- (void)presentAddFolderSheetOnWindow:(id)arg1;
- (void)presentAddRSSFeedSheetOnWindow:(id)arg1;
- (void)mediaBrowserCancel:(id)arg1;
- (void)mediaBrowserChoosePhotoSet:(id)arg1;
- (void)presentMediaBrowserSheetOnWindow:(id)arg1;
- (void)setShufflesPhotos:(BOOL)arg1;
- (BOOL)shufflesPhotos;
- (id)listOfPhotoPathsFromSelectedSource;
- (void)loadPhotoSourcesAndCallBlockWhenDone:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

