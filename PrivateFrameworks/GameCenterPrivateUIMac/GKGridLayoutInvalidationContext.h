//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSCollectionViewLayoutInvalidationContext.h>

@interface GKGridLayoutInvalidationContext : NSCollectionViewLayoutInvalidationContext
{
    BOOL _invalidateIncrementalReveal;
    BOOL _invalidateBoundsChange;
    BOOL _invalidatePlaceholderVisibility;
    BOOL _invalidatePinnableAreas;
}

@property(nonatomic) BOOL invalidatePinnableAreas; // @synthesize invalidatePinnableAreas=_invalidatePinnableAreas;
@property(nonatomic) BOOL invalidatePlaceholderVisibility; // @synthesize invalidatePlaceholderVisibility=_invalidatePlaceholderVisibility;
@property(nonatomic) BOOL invalidateBoundsChange; // @synthesize invalidateBoundsChange=_invalidateBoundsChange;
@property(nonatomic) BOOL invalidateIncrementalReveal; // @synthesize invalidateIncrementalReveal=_invalidateIncrementalReveal;

@end

