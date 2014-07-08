//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECEventHandlingDelegate.h"
#import "ECSBGridItemSource.h"

@class ECProgressLayer, ECSBItem, ECSBLabelLayer, ECSBProgressLabelLayer, ECSBSparkleLayer, ECStatusLabelDescription, ECStatusLabelLayer, NSDictionary, NSString;

@interface ECSBItemLayer : CALayer <ECSBGridItemSource, ECEventHandlingDelegate>
{
    ECSBItem *_item;
    CALayer *_transformLayer;
    CALayer *_jitterLayer;
    CALayer *_imageLayer;
    ECSBLabelLayer *_labelLayer;
    CALayer *_backdropLayer;
    CALayer *_tintLayer;
    CALayer *_selectionLayer;
    CALayer *_closeboxLayer;
    CALayer *_notFoundLayer;
    ECSBSparkleLayer *_sparkleLayer;
    ECProgressLayer *_progressLayer;
    ECSBProgressLabelLayer *_progressLabelLayer;
    ECStatusLabelLayer *_statusLayer;
    struct CGSize _customImageSize;
    CDUnknownBlockType _closeboxActionBlock;
    float _scaleFactor;
    unsigned int _highlighted:1;
    unsigned int _selected:1;
    unsigned int _darkened:1;
    unsigned int _faded:1;
    unsigned int _magnified:1;
    unsigned int _jittering:1;
    unsigned int _sparkling:1;
    unsigned int _disableLayout:1;
    unsigned int _needsUpdate:1;
    unsigned int _visible:1;
    unsigned int _closeboxVisible:1;
    unsigned int _statusVisible:1;
    unsigned int _notFound:1;
    unsigned int _deletable:1;
    unsigned int _recentlyAdded:1;
    unsigned int _inClosebox:1;
    unsigned int _internalDisableLayout:1;
}

+ (void)calculateIconFrame:(struct CGRect *)arg1 forBounds:(struct CGRect)arg2 andScaleFactor:(float)arg3;
+ (void)calculateIconSize:(unsigned long long *)arg1 miniIconSize:(unsigned long long *)arg2 forBounds:(struct CGRect)arg3 andScaleFactor:(float)arg4;
@property(readonly, nonatomic) CALayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property(readonly, nonatomic) ECSBSparkleLayer *sparkleLayer; // @synthesize sparkleLayer=_sparkleLayer;
@property(readonly, nonatomic) ECStatusLabelLayer *statusLayer; // @synthesize statusLayer=_statusLayer;
@property(readonly, nonatomic) ECProgressLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) CDUnknownBlockType closeboxActionBlock; // @synthesize closeboxActionBlock=_closeboxActionBlock;
@property(nonatomic) BOOL recentlyAdded; // @synthesize recentlyAdded=_recentlyAdded;
@property(nonatomic) BOOL deletable; // @synthesize deletable=_deletable;
@property(nonatomic) BOOL notFound; // @synthesize notFound=_notFound;
@property(readonly, nonatomic) ECSBProgressLabelLayer *progressLabelLayer; // @synthesize progressLabelLayer=_progressLabelLayer;
@property(nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(nonatomic) BOOL disableLayout; // @synthesize disableLayout=_disableLayout;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGSize customImageSize; // @synthesize customImageSize=_customImageSize;
@property(readonly, nonatomic) ECSBLabelLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) __weak ECSBItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (void)reloadItemContentsWithDataSource:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)purgeItemContents;
- (void)applyProgressFilter;
- (void)layout;
- (struct CGRect)_backdropFrame;
- (struct CGRect)_closeboxFrame;
- (struct CGRect)_selectionFrame;
- (void)_makeBackdropLayer;
- (void)_makeCloseBoxLayer;
- (void)_makeSelectionLayer;
- (void)setContentFromDataSource:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
@property(readonly, nonatomic) BOOL isGroupItem;
@property(readonly, copy) NSString *description;
@property(nonatomic) ECStatusLabelDescription *status; // @dynamic status;
@property(nonatomic) NSDictionary *progress; // @dynamic progress;
@property(nonatomic) id icon; // @dynamic icon;
@property(nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) BOOL statusVisible; // @dynamic statusVisible;
@property(nonatomic) BOOL closeboxVisible; // @dynamic closeboxVisible;
@property(nonatomic) BOOL visible; // @dynamic visible;
@property(nonatomic) BOOL sparkling; // @dynamic sparkling;
@property(nonatomic) BOOL jittering; // @dynamic jittering;
@property(nonatomic) BOOL magnified; // @dynamic magnified;
@property(nonatomic) BOOL faded; // @dynamic faded;
@property(nonatomic) BOOL darkenedForDrop; // @dynamic darkenedForDrop;
@property(nonatomic) BOOL darkened; // @dynamic darkened;
- (id)initWithScaleFactor:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

