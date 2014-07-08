//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiPaneContentControllerProtocol.h"

@class ICObject, IPKButton, IPKProgressBar, IPKTextField, IPKToolbarItem, ImportAlbum, ImportImageView, ImportSession2, ImportView, MultiPaneToolbarView, NSImageView, NSProgressIndicator, NSTextField, NSView;

@interface ImportDisplay : NSObject <MultiPaneContentControllerProtocol>
{
    ImportView *mImportView;
    NSTextField *mCountText;
    ImportImageView *mThumbnail;
    IPKProgressBar *_progressIndicator;
    IPKTextField *_deviceNameText;
    IPKTextField *_countAndDateText;
    NSImageView *_deviceThumb;
    NSView *_placardLeftView;
    IPKToolbarItem *_placardLeftItem;
    MultiPaneToolbarView *_progressPlacard;
    IPKToolbarItem *_ImportButtonItem;
    IPKButton *_importButton;
    ImportAlbum *mCurrentAlbum;
    ImportSession2 *mCurrentSession;
    ICObject *mCamera;
    NSProgressIndicator *mLoadingProgress;
    long long mRemainingCount;
    long long mLastRemaining;
    unsigned long long _totalCount;
    unsigned long long _importedCount;
    long long mRemainingByteCount;
    long long mLastRemainingByteCount;
    unsigned long long _totalByteCount;
    unsigned long long _importedByteCount;
    BOOL _beganImporting;
    BOOL mNeedsUpdate;
    double mLastPreviewTime;
}

- (id)updateStatus;
- (void)_importProgress:(id)arg1;
- (void)_resetPreviewThumbnail;
- (void)_endImport:(id)arg1;
- (void)_finishingImport:(id)arg1;
- (void)_deletingSourceImages:(id)arg1;
- (void)_beginImport:(id)arg1;
- (void)_dbBeginUpdate:(id)arg1;
- (void)_importCompleted:(id)arg1;
- (id)_eraseMediaTitle;
- (void)_updateImportButton;
- (void)_albumCountChanged;
- (void)import:(id)arg1;
- (void)_setRemainingCount:(id)arg1;
- (void)_adjustTextFrames;
- (id)_countAndDateStringWithProgress:(id)arg1;
- (BOOL)importInProgress;
- (void)toggleAdvancedImport:(id)arg1;
- (void)_loadPreferences:(id)arg1;
- (void)handleMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (void)_handleDoneWithChanges;
- (BOOL)supportsResizeSlider;
- (void)currentAlbumWillSwitch:(id)arg1;
- (void)setCurrentAlbum:(id)arg1;
- (void)albumMessageHandler:(id)arg1;
- (id)currentAlbum;
- (void)setCamera:(id)arg1;
- (id)camera;
- (void)setNeedsUpdate:(BOOL)arg1;
- (BOOL)needsUpdate;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

