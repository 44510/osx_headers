//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, CATextLayer, MGMediaClip, MGMediaClipPreview, NSImage, NSString;

@interface MGMediaTrackViewItem : NSObject
{
    unsigned long long _identifier;
    MGMediaClip *_mediaClip;
    BOOL _isDraggingMediaClip;
    MGMediaClipPreview *_mediaClipPreview;
    MGMediaClipPreview *_alternateMediaClipPreview;
    CALayer *_layer;
    BOOL _isSelected;
    BOOL _isAlternatePreviewVisible;
    struct CGSize _layerSize;
    NSImage *_quickLookImage;
    double _layerContentsScale;
    CALayer *_selectionLayer;
    CALayer *_previewLayer;
    CALayer *_alternatePreviewLayer;
    CALayer *_outOfRangeContainerLayer;
    CALayer *_outOfRangeLayer;
    CALayer *_outOfRangeImageLayer;
    CALayer *_playheadContainerLayer;
    CALayer *_playheadLayer;
    CATextLayer *_textLayer;
}

@property(nonatomic) struct CGSize layerSize; // @synthesize layerSize=_layerSize;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic, getter=isDraggingMediaClip) BOOL draggingMediaClip; // @synthesize draggingMediaClip=_isDraggingMediaClip;
@property(readonly, nonatomic) MGMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (struct CGRect)playheadContainerLayerFrameInLayer:(id)arg1;
- (struct CGRect)playheadLayerFrameInLayer:(id)arg1;
- (BOOL)isPlayheadLayerAtLocationInLayer:(struct CGPoint)arg1;
- (void)setOutOfRangeTime:(CDStruct_1b6d18a9)arg1;
- (void)setPlayheadTime:(CDStruct_1b6d18a9)arg1;
- (id)quickLookImage;
- (id)image;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(nonatomic) double layerContentsScale;
@property(readonly, nonatomic) CDStruct_1b6d18a9 effectiveDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic, getter=isAlternatePreviewVisible) BOOL alternatePreviewVisible;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(retain, nonatomic) MGMediaClipPreview *alternateMediaClipPreview;
@property(retain, nonatomic) MGMediaClipPreview *mediaClipPreview;
- (void)dealloc;
- (id)initWithMediaClip:(id)arg1 isDraggingMediaClip:(BOOL)arg2;
- (id)imageFromLayer;
- (struct CGRect)playheadLayerFrameForTime:(CDStruct_1b6d18a9)arg1;
- (void)setupLayer;
@property(readonly, nonatomic) NSString *displayName;

@end

