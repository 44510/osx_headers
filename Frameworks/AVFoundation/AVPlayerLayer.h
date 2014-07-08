//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AVPlayer, AVPlayerLayerInternal, NSString;

@interface AVPlayerLayer : CALayer
{
    AVPlayerLayerInternal *_playerLayer;
}

+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)playerLayerWithPlayer:(id)arg1;
- (struct CGRect)_videoRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect videoRect;
- (id)_subtitleLayer;
- (id)_closedCaptionLayer;
- (id)_videoLayer;
- (void)_setSubtitleGravity:(id)arg1;
- (id)_subtitleGravity;
- (void)_setItem:(id)arg1 readyForDisplay:(BOOL)arg2;
@property(readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property(copy) NSString *videoGravity;
- (void)layerDidBecomeVisible:(BOOL)arg1;
@property(retain, nonatomic) AVPlayer *player;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setHasPlayerToObserve:(long long)arg1 andShouldObserveIt:(long long)arg2;
- (void)_updatePresentationSize:(struct CGSize)arg1 forceUpdate:(BOOL)arg2;
- (void)_notifyPlayerOfDisplaySize;
- (struct CGSize)_getAVPlayerCurrentItemPresentationSizeKeyFromPlayer:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addAnimationsForVideoLayer:(id)arg1 size:(struct CGSize)arg2 gravity:(id)arg3;
- (void)_addAnimationsForClosedCaptionLayer:(id)arg1;
- (void)_addAnimationsForMaskLayer:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

@end

