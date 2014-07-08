//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSCollectionReusableView.h>

@class GKGameRecord, GKRatingView, NSButton, NSImageView, NSLevelIndicator, NSTextField;

@interface GKGameDetailHeaderView : NSCollectionReusableView
{
    BOOL _purchasable;
    GKGameRecord *_game;
    NSImageView *_iconView;
    NSTextField *_developerLabel;
    NSTextField *_nameLabel;
    GKRatingView *_ratingView;
    NSLevelIndicator *_ratingControl;
    NSTextField *_ratingLabel;
    NSButton *_shareButton;
    NSButton *_buyButton;
}

@property NSButton *buyButton; // @synthesize buyButton=_buyButton;
@property NSButton *shareButton; // @synthesize shareButton=_shareButton;
@property NSTextField *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property NSLevelIndicator *ratingControl; // @synthesize ratingControl=_ratingControl;
@property GKRatingView *ratingView; // @synthesize ratingView=_ratingView;
@property NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property NSTextField *developerLabel; // @synthesize developerLabel=_developerLabel;
@property NSImageView *iconView; // @synthesize iconView=_iconView;
@property BOOL purchasable; // @synthesize purchasable=_purchasable;
@property(retain) GKGameRecord *game; // @synthesize game=_game;
- (void)buyButtonPressed:(id)arg1;
- (void)share:(id)arg1;
- (void)rateGame:(id)arg1;
- (void)updateRating;
- (void)updateIcon;
- (void)didUpdateModel;
- (void)setGame:(id)arg1 purchasable:(BOOL)arg2;
- (void)dealloc;
- (void)awakeFromNib;

@end

