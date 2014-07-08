//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasicCollectionViewDataSource.h>

@class GKGame, GKPlayer;

@interface GKGameRecentPlayersDataSource : GKBasicCollectionViewDataSource
{
    GKGame *_game;
    GKPlayer *_player;
}

@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (id)sectionTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)_preloadImagesForItems:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

