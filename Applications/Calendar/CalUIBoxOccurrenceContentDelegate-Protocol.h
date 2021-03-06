//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalUIBoxOccurrenceContentView, NSDate, NSFont, NSView;

@protocol CalUIBoxOccurrenceContentDelegate <NSObject>
- (NSView *)dayGridView;
- (double)yValueInDayGridForDate:(NSDate *)arg1;

@optional
- (NSFont *)timeZoneFont;
- (NSFont *)timeFont;
- (NSFont *)titleFont;
- (NSFont *)locationFont;
- (BOOL)shouldShowTime;
- (long long)backgroundStyle;
- (double)currentYInDayGridForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (double)properYInDayGridForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceInsetForEnclosingScrollView:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceShowTravelTime:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceDrawDimmed:(CalUIBoxOccurrenceContentView *)arg1;
- (BOOL)shouldOccurrenceDrawSelected:(CalUIBoxOccurrenceContentView *)arg1;
- (NSDate *)endDateForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
- (NSDate *)startDateForOccurrence:(CalUIBoxOccurrenceContentView *)arg1;
@end

