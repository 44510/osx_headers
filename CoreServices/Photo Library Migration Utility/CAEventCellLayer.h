//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAGridCellLayer.h"

@class CALayer, IPEllipsizingTextLayer, IPKQuantizedTextLayer;

@interface CAEventCellLayer : CAGridCellLayer
{
    IPEllipsizingTextLayer *_nameLayer;
    IPKQuantizedTextLayer *_dateLayer;
    IPKQuantizedTextLayer *_countLayer;
    CALayer *_reflectionLayer;
    BOOL _wantsReflection;
    BOOL _hideMetaForDrag;
}

+ (void)addPhotosToThumbDataArray:(struct ThumbDataArray *)arg1 forRecords:(id)arg2 owningGridView:(id)arg3;
+ (struct CGImage *)highResImageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 selected:(BOOL)arg4 abort:(CDUnknownBlockType)arg5;
+ (struct CGImage *)imageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 selected:(BOOL)arg4 abort:(CDUnknownBlockType)arg5;
+ (struct CGImage *)imageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 hires:(BOOL)arg4 selected:(BOOL)arg5 abort:(CDUnknownBlockType)arg6;
+ (BOOL)haveCachedImageForRecord:(id)arg1 cellLayer:(id)arg2 view:(id)arg3 selected:(BOOL)arg4;
@property(nonatomic) BOOL hideMetaForDrag; // @synthesize hideMetaForDrag=_hideMetaForDrag;
@property(nonatomic) CALayer *reflectionLayer; // @synthesize reflectionLayer=_reflectionLayer;
@property(nonatomic) BOOL wantsReflection; // @synthesize wantsReflection=_wantsReflection;
@property(nonatomic) IPKQuantizedTextLayer *countLayer; // @synthesize countLayer=_countLayer;
@property(nonatomic) IPKQuantizedTextLayer *dateLayer; // @synthesize dateLayer=_dateLayer;
@property(nonatomic) IPEllipsizingTextLayer *nameLayer; // @synthesize nameLayer=_nameLayer;
- (void)setClickTrackArea:(int)arg1;
- (void)setNeedSelect:(BOOL)arg1;
- (void)setNeedHover:(BOOL)arg1;
- (void)setHoverLocation:(struct CGPoint)arg1;
- (long long)scrubIndexForCurrentHoverLocation;
- (void)quickSetTitle:(id)arg1;
- (void)layoutSublayers;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)layerHitTest:(struct CGPoint)arg1 clickCount:(long long)arg2 hitInfo:(CDStruct_fb816f7b *)arg3;
- (id)copyDateRangeForEventWithShortFormat:(BOOL)arg1;
- (id)nameForEvent:(id *)arg1 override:(id)arg2;
- (struct CGRect)hoverArea:(int *)arg1 extra:(struct CGRect *)arg2;
- (void)setup;

@end

