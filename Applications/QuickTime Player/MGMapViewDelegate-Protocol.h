//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKMapViewDelegate.h"

@class CLLocation, MGMapView;

@protocol MGMapViewDelegate <MKMapViewDelegate>

@optional
- (void)userDidInteractWithMapView:(MGMapView *)arg1;
- (void)mapView:(MGMapView *)arg1 didUpdateUserSelection:(CLLocation *)arg2;
@end

