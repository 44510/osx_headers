//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKSplittingDataSource.h>

@class GKFriendsDataSource, GKGame, NSArray, NSMutableDictionary, NSSet, NSString;

@interface GKFriendsSplittingDataSource : GKSplittingDataSource
{
    GKGame *_game;
    NSString *_achievementID;
    NSString *_leaderboardID;
    NSSet *_hiddenPlayers;
    long long _maxSelectable;
    NSMutableDictionary *_pickerInfos;
}

@property(retain, nonatomic) NSMutableDictionary *pickerInfos; // @synthesize pickerInfos=_pickerInfos;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property(retain, nonatomic) NSSet *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(retain, nonatomic) NSString *leaderboardID; // @synthesize leaderboardID=_leaderboardID;
@property(retain, nonatomic) NSString *achievementID; // @synthesize achievementID=_achievementID;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 forPickerInfo:(id)arg2 forIndexPath:(id)arg3;
- (void)loadRanksWithUpdateNotifier:(id)arg1;
- (void)loadAchievedWithUpdateNotifier:(id)arg1;
- (void)loadGamePlayersWithUpdateNotifier:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (void)updatePickerInfosFromFriendPlayersOfGame:(id)arg1 outputPlayers:(id *)arg2;
- (void)updatePickerInfosFromPlayers:(id)arg1;
- (void)toggleSelectionAtIndexPath:(id)arg1;
- (void)toggleSelectionForPlayer:(id)arg1;
- (void)setPlayers:(id)arg1 selected:(BOOL)arg2 deselectOthers:(BOOL)arg3;
- (BOOL)_changePickerInfo:(id)arg1 selected:(BOOL)arg2;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canSelectPlayerInfo:(id)arg1;
@property(retain, nonatomic) NSArray *selectedPlayers;
- (void)notifyPickerItemsChanged:(id)arg1;
- (id)indexPathsForPlayer:(id)arg1;
- (id)allPickerInfos;
- (id)playerInfoForPlayer:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
@property(retain, nonatomic) GKFriendsDataSource *friendsDataSource;
- (void)dealloc;
- (id)init;

@end

