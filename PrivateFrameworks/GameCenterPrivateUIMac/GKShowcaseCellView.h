//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSCollectionReusableView.h>

@class NSCollectionViewCell;

@interface GKShowcaseCellView : NSCollectionReusableView
{
    NSCollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) SEL touchedShowcaseCellAction; // @synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction;
@property(retain, nonatomic) NSCollectionViewCell *cell; // @synthesize cell=_cell;
- (struct CGRect)alignmentRectForText;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

