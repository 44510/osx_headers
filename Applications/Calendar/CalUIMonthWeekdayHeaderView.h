//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUILayerBackedView.h"

@class CalUIViewController, NSArray;

@interface CalUIMonthWeekdayHeaderView : CalUILayerBackedView
{
    NSArray *_weekdayTextFields;
    CalUILayerBackedView *_bottomGrayLine;
    CalUIViewController *_viewController;
}

@property __weak CalUIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) CalUILayerBackedView *bottomGrayLine; // @synthesize bottomGrayLine=_bottomGrayLine;
@property(retain) NSArray *weekdayTextFields; // @synthesize weekdayTextFields=_weekdayTextFields;
- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)updateFieldRightInsetConstraints;
- (void)updateWeekdayStrings;
- (id)initWithViewController:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;

@end

