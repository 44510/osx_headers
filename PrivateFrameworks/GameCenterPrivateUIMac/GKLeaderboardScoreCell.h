//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewCell.h>

@class GKPlayerPhotoView, GKScore, NSTextField;

@interface GKLeaderboardScoreCell : GKCollectionViewCell
{
    BOOL _isAchievementCell;
    GKPlayerPhotoView *_iconView;
    NSTextField *_nameLabel;
    NSTextField *_scoreLabel;
    NSTextField *_rankLabel;
}

+ (double)defaultShowcaseRowHeight;
+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property NSTextField *rankLabel; // @synthesize rankLabel=_rankLabel;
@property NSTextField *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) GKPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) BOOL isAchievementCell; // @synthesize isAchievementCell=_isAchievementCell;
- (void)setSelected:(BOOL)arg1;
- (BOOL)canRemoveItem;
- (void)prepareForReuse;
- (void)configureContextMenu:(id)arg1;
- (void)didUpdateModel;
- (void)setRepresentedItem:(id)arg1;
@property(retain, nonatomic) GKScore *score;
- (void)dealloc;
- (struct CGRect)alignmentRectForText;

@end

