//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

__attribute__((visibility("hidden")))
@interface _NSBackingLayer : CALayer
{
}

+ (void)initialize;
- (void)NS_setPreparedContentRect:(struct CGRect)arg1;
- (void)NS_setPresentationRect:(struct CGRect)arg1;
- (void)NS_setIsScrolling:(BOOL)arg1;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect)arg1;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect)arg1;
- (struct CGRect)NS_activeVisibleRect;
- (struct CGRect)NS_renderedRectInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (BOOL)NS_prefetchContentsInRect:(struct CGRect)arg1 scrollVelocity:(struct CGPoint)arg2;
- (void)NS_prefetchTilesWithScrollVelocity:(struct CGPoint)arg1 hasMorePrefetch:(char *)arg2;
- (void)NS_setContentsScaleSize:(struct CGSize)arg1;
- (void)setContentsScale:(double)arg1;
- (void)NS_showPrefetchedContentsIfNecessaryInRect:(struct CGRect)arg1;
- (BOOL)NS_wantsToPrefetchTiles;
- (id)NS_makeContentsLayer;
- (void)setContents:(id)arg1;
- (void)display;
- (void)displayIfNeeded;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)layoutSublayers;
- (void)didChangeValueForKey:(id)arg1;

@end

