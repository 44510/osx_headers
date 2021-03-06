//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUILayerBackedView.h"

@class CalUIYearMonthRowViewController, NSArray, NSMutableArray, NSView;

@interface CalUIYearMonthRowView : CalUILayerBackedView
{
    CalUILayerBackedView *_spacerView;
    NSMutableArray *_monthViews;
    NSArray *_monthConstraints;
    CalUIYearMonthRowViewController *_viewController;
    NSView *_monthContainer;
}

@property(retain) NSView *monthContainer; // @synthesize monthContainer=_monthContainer;
@property __weak CalUIYearMonthRowViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) NSArray *monthConstraints; // @synthesize monthConstraints=_monthConstraints;
@property(retain) NSMutableArray *monthViews; // @synthesize monthViews=_monthViews;
@property(readonly) CalUILayerBackedView *spacerView; // @synthesize spacerView=_spacerView;
- (void).cxx_destruct;
- (id)allMonthViews;
- (void)updateMonthConstraints;
- (void)configureMonthViewsWithStartDate:(id)arg1 numberOfMonths:(long long)arg2;
- (unsigned long long)numberOfRowsInMonthWithStartDate:(id)arg1;
- (long long)monthViewCount;
- (id)initWithViewController:(id)arg1;

@end

