//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MKMapItem, MKStarRatingView;

__attribute__((visibility("hidden")))
@interface NVCalloutBubbleViewController : NSViewController
{
    MKMapItem *_mapItem;
    MKStarRatingView *_starRating;
}

@property(nonatomic) __weak MKStarRatingView *starRating; // @synthesize starRating=_starRating;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

