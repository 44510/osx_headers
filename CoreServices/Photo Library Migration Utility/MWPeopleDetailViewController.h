//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiPaneContentControllerProtocol.h"
#import "NSTextFieldDelegate.h"

@class FSPeopleDetailView, IPKToolbarItem, MultiPaneController, MultiPaneToolbarView, MutableUInt32Array, NSArray, NSImageView;

@interface MWPeopleDetailViewController : NSObject <MultiPaneContentControllerProtocol, NSTextFieldDelegate>
{
    MultiPaneController *_controller;
    FSPeopleDetailView *_view;
    IPKToolbarItem *_titleItem;
    IPKToolbarItem *_pictureImage;
    IPKToolbarItem *_photoCountItem;
    IPKToolbarItem *_personStepperItem;
    IPKToolbarItem *_confirmItem;
    IPKToolbarItem *_imageItem;
    IPKToolbarItem *_statusItem;
    IPKToolbarItem *_progressItem;
    IPKToolbarItem *_thumbStyleToggleLeftLabelItem;
    IPKToolbarItem *_thumbStyleToggleItem;
    IPKToolbarItem *_thumbStyleToggleRightLabelItem;
    unsigned long long _nextPersonKey;
    unsigned long long _prevPersonKey;
    MultiPaneToolbarView *toolbarPlacard;
    int _additionalFaceCount;
    BOOL _searchingForFaces;
    NSArray *_facesLikeThis;
    unsigned long long _facesLikeThisFaceKey;
    BOOL _personShowFaceActive;
    MutableUInt32Array *_orderedFaceKeys;
    NSImageView *_faceIconImage;
    BOOL _installed;
}

@property(retain) MutableUInt32Array *orderedFaceKeys; // @synthesize orderedFaceKeys=_orderedFaceKeys;
@property BOOL personShowFaceActive; // @synthesize personShowFaceActive=_personShowFaceActive;
@property unsigned long long facesLikeThisFaceKey; // @synthesize facesLikeThisFaceKey=_facesLikeThisFaceKey;
@property(retain) NSArray *facesLikeThis; // @synthesize facesLikeThis=_facesLikeThis;
@property int additionalFaceCount; // @synthesize additionalFaceCount=_additionalFaceCount;
@property unsigned long long prevPersonKey; // @synthesize prevPersonKey=_prevPersonKey;
@property unsigned long long nextPersonKey; // @synthesize nextPersonKey=_nextPersonKey;
- (void)swapPlacard;
- (void)restoreState:(id)arg1 forMultiPane:(id)arg2;
- (id)archiveStateForMultiPane:(id)arg1;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)populateHeaderToolbarForMultiPane:(id)arg1;
- (BOOL)wantsHeaderToolbarForMultiPane:(id)arg1;
- (void)personStepperAction:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)updateHeaderElementsForAlbum:(id)arg1;
- (id)_thumbnailForFace:(long long)arg1 imageDB:(id)arg2;
- (unsigned long long)findPersonIndex:(unsigned long long)arg1 inDB:(id)arg2 isFirst:(char *)arg3 isLast:(char *)arg4 nextPersonKey:(unsigned long long *)arg5 prevPersonKey:(unsigned long long *)arg6;
- (void)updateAdditionalFaceCount:(id)arg1;
- (void)recomputeAdditionalFaceCount:(id)arg1;
- (void)_similarFacesDataAvailable:(id)arg1;
- (void)toggleThumbnailStyle:(id)arg1;
- (void)confirmAdditionalFaces:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)setMultiPaneController:(id)arg1;
- (void)setupZoomFactor;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (void)dealloc;

@end
