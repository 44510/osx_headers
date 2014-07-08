//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextViewDelegate.h"

@class FSInspectorSidebarView, IPKSegmentedControl, IPKTextField, IPMessageReceiver, ImageDB, NSBox, NSMutableArray, NSTabView, NSTimer, NSView;

@interface IWPhotoExifController : NSObject <NSTextViewDelegate>
{
    NSObject *mContentViewController;
    struct IPPhotoList *mPhotoList;
    ImageDB *mImageDB;
    unsigned long long mKey;
    IPMessageReceiver *mDBMessageReceiver;
    BOOL mSubscribedToNotifications;
    BOOL mDidSubscribeForChange;
    NSMutableArray *mInspectorObjects;
    int mCurrentViewType;
    NSTabView *mExifTabView;
    NSView *mPhotoExifView;
    IPKTextField *mPhotoExifCameraInfo;
    IPKTextField *mPhotoExifLensInfo;
    IPKTextField *mPhotoExifResolution;
    IPKTextField *mPhotoExifSize;
    IPKTextField *mPhotoExifISO;
    IPKTextField *mPhotoExifFocalLength;
    IPKTextField *mPhotoExifEV;
    IPKTextField *mPhotoExifFStop;
    IPKTextField *mPhotoExifShutterSpeed;
    IPKSegmentedControl *mPhotoExifModeGlyphs;
    IPKSegmentedControl *mPhotoExifImageTypeGlyph;
    NSBox *mHorizontalDivider;
    NSBox *mVerticalDivider1;
    NSBox *mVerticalDivider2;
    NSBox *mVerticalDivider3;
    NSBox *mVerticalDivider4;
    NSView *mPhotoExifShortView;
    IPKTextField *mPhotoExifShortCameraInfo;
    IPKTextField *mPhotoExifShortResolution;
    IPKTextField *mPhotoExifShortSize;
    IPKTextField *mPhotoExifShortISO;
    IPKTextField *mPhotoExifShortFocalLength;
    IPKTextField *mPhotoExifShortEV;
    IPKTextField *mPhotoExifShortFStop;
    IPKTextField *mPhotoExifShortShutterSpeed;
    IPKSegmentedControl *mPhotoExifShortModeGlyphs;
    IPKSegmentedControl *mPhotoExifShortImageTypeGlyph;
    NSBox *mShortHorizontalDivider;
    NSBox *mShortVerticalDivider1;
    NSBox *mShortVerticalDivider2;
    NSBox *mShortVerticalDivider3;
    NSBox *mShortVerticalDivider4;
    NSView *mPhotoExifVideoView;
    IPKTextField *mPhotoExifVideoCameraInfo;
    IPKTextField *mPhotoExifVideoResolution;
    IPKTextField *mPhotoExifVideoSize;
    IPKTextField *mPhotoExifVideoFPS;
    IPKTextField *mPhotoExifVideoDuration;
    IPKSegmentedControl *mPhotoExifVideoGlyph;
    IPKTextField *mPhotoExifVideoCodec;
    NSBox *mPhotoExifVideoHorizontalDivider;
    NSBox *mPhotoExifVideoVerticalDivider;
    FSInspectorSidebarView *enclosingInspectorView;
    NSTimer *delayTimer;
}

@property FSInspectorSidebarView *enclosingInspectorView; // @synthesize enclosingInspectorView;
- (void)selectionChanged:(id)arg1;
- (void)stopListeningForSelectionChanges;
- (void)startListeningForSelectionChanges;
- (id)photoExifShortView;
- (id)photoExifView;
- (id)photoExifTabView;
- (void)_updateUI;
- (void)updateUI;
- (void)usePhotoList:(struct IPPhotoList *)arg1 inDB:(id)arg2 fromContentViewController:(id)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)_adjustCameraInfoFieldWidth:(id)arg1 forGlyphs:(id)arg2;
- (void)_updatePhotoShutterSpeedFieldWithValue:(id)arg1 forTextField:(id)arg2;
- (void)_updatePhotoApertureFieldWithValue:(id)arg1 forTextField:(id)arg2;
- (void)_updatePhotoExposureCompensationFieldWithValue:(id)arg1 forTextField:(id)arg2;
- (void)_updatePhotoFocalLengthFieldWithValue:(id)arg1 forTextField:(id)arg2;
- (void)_updatePhotoResolutionFieldWithSize:(struct CGSize)arg1 forTextField:(id)arg2;
- (void)_updateFileSizeFieldWithValue:(double)arg1 forTextField:(id)arg2;
- (void)_updatePhotoISOFieldWithValue:(id)arg1 forTextField:(id)arg2;
- (void)_testVideoView;
- (void)_testShortExifView;
- (void)_testFullExifView;
- (void)_setupExifViewForUnsupportedSelection;
- (void)_setupPhotoFormatGlyph:(id)arg1 info:(struct IPPhotoInfo *)arg2;
- (id)_videoCodecLabelForVideo:(struct IPPhotoInfo *)arg1 toolTip:(id *)arg2;
- (void)_setupMeteringModeGlyph:(id)arg1 meteringMode:(int)arg2;
- (void)_setupWhiteBalanceModeGlyph:(id)arg1 awbMode:(int)arg2 lightSourceType:(int)arg3;
- (void)_setupFlashModeGlyph:(id)arg1 flashMode:(int)arg2;
- (void)_photoInfoChanged:(id)arg1;
- (void)_updateAfterPhotosReverted:(id)arg1;
- (void)_updateForExternalEdits:(id)arg1;
- (BOOL)_setPhotoList:(struct IPPhotoList *)arg1;
- (void)_loadNib;

@end

