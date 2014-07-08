//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKCollectionViewCell.h>

@class GKAchievementIconView, NSLayoutConstraint, NSTextField;

@interface GKAchievementCell : GKCollectionViewCell
{
    GKAchievementIconView *_badgeView;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSTextField *_valueLabel;
    NSTextField *_pointsLabel;
    NSLayoutConstraint *_descriptionToTitleConstraint;
    double _descriptionToTitleDistance;
}

+ (double)defaultRowHeight;
@property double descriptionToTitleDistance; // @synthesize descriptionToTitleDistance=_descriptionToTitleDistance;
@property NSLayoutConstraint *descriptionToTitleConstraint; // @synthesize descriptionToTitleConstraint=_descriptionToTitleConstraint;
@property NSTextField *pointsLabel; // @synthesize pointsLabel=_pointsLabel;
@property NSTextField *valueLabel; // @synthesize valueLabel=_valueLabel;
@property NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *badgeView; // @synthesize badgeView=_badgeView;
- (void)configureContextMenu:(id)arg1;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;
- (void)awakeFromNib;

@end

