//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKSplittingDataSource.h>

@class GKGame;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource
{
    GKGame *_game;
    SEL _detailPressedAction;
}

@property(nonatomic) SEL detailPressedAction; // @synthesize detailPressedAction=_detailPressedAction;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (unsigned long long)numberOfMatches;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureDataSource;

@end

