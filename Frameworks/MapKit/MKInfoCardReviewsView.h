//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKUIViewControllerRootView.h>

@class MKLinkTextField, MKMapItem, NSLayoutConstraint, NSTableView, NSView;

@interface MKInfoCardReviewsView : _MKUIViewControllerRootView
{
    NSLayoutConstraint *_constraintToRemove;
    NSLayoutConstraint *_constraint;
    MKLinkTextField *_moreReviewsTextField;
    MKMapItem *_mapItem;
    NSTableView *tableView;
    NSView *bottomView;
    NSLayoutConstraint *bottomConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint;
@property(nonatomic) __weak NSView *bottomView; // @synthesize bottomView;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)refreshContent;
- (void)awakeFromNib;

@end

