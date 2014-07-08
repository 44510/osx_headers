//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKHeaderWithUnderlineView.h>

@class GKGame, NSImageView, NSTextField;

@interface GKChallengeHeaderCell : GKHeaderWithUnderlineView
{
    BOOL _allSectionItemsVisible;
    GKGame *_game;
    NSImageView *_gameIconView;
    NSTextField *_gameNameLabel;
    unsigned long long _itemCount;
    long long _sectionIndex;
}

@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) BOOL allSectionItemsVisible; // @synthesize allSectionItemsVisible=_allSectionItemsVisible;
@property(nonatomic) NSTextField *gameNameLabel; // @synthesize gameNameLabel=_gameNameLabel;
@property(nonatomic) NSImageView *gameIconView; // @synthesize gameIconView=_gameIconView;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)updateCountWithDataSource:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

