//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVPlayer, AVSubtitleLayerInternal;

@interface AVSubtitleLayer : CALayer
{
    AVSubtitleLayerInternal *_subtitleLayer;
}

+ (id)subtitleLayerWithPlayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)dealloc;
- (void)finalize;
- (void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2;
- (void)_updateNonForcedSubtitleDisplayEnabled:(BOOL)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)subtitleRenderingNeedsLayout;
- (void)setNeedsDisplay;
- (int)getLayout:(struct SubtitleLayoutParameters)arg1 suggestLayout:(struct CGRect *)arg2 shouldUpdateCachedSubtitleSample:(BOOL)arg3;
- (int)updateSubtitle:(id)arg1 forcedSubtitleSample:(BOOL)arg2 shouldBeHidden:(char *)arg3;
- (void)_setSubtitleSample:(id)arg1;

@end

