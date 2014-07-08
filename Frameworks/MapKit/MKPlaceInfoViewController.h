//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

@class MKInfoCardAttributesView, MKInfoCardFooterViewController, MKInfoCardYelpDealViewController, MKMapItem, MKYelpDeal, _MKPlaceViewController;

@interface MKPlaceInfoViewController : _MKUIViewController
{
    id <MKPlaceInfoViewControllerDelegate> infoDelegate;
    MKMapItem *mapItem;
    MKInfoCardFooterViewController *footerViewController;
    _MKPlaceViewController *owner;
    MKYelpDeal *_deal;
    MKInfoCardAttributesView *attributesView;
    MKInfoCardYelpDealViewController *yelpController;
}

@property(nonatomic) __weak MKInfoCardYelpDealViewController *yelpController; // @synthesize yelpController;
@property(nonatomic) __weak MKInfoCardAttributesView *attributesView; // @synthesize attributesView;
@property(retain, nonatomic) MKYelpDeal *deal; // @synthesize deal=_deal;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner;
@property(retain, nonatomic) MKInfoCardFooterViewController *footerViewController; // @synthesize footerViewController;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem;
@property(nonatomic) __weak id <MKPlaceInfoViewControllerDelegate> infoDelegate; // @synthesize infoDelegate;
- (void).cxx_destruct;
- (id)nibBundle;
- (id)nibName;
- (void)setSubtitle:(id)arg1;
- (void)updateInlineMapWithRefinedMapItem:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end

