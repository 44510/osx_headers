//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSLayoutConstraint, NSTextField;

@interface CalUITimeLineView : NSView
{
    BOOL _isResizing;
    NSArray *_hourTextFields;
    NSTextField *_nowTextField;
    NSView *_timeIndicatorHandle;
    NSLayoutConstraint *_timeIndicatorPositionConstraint;
    long long _highlightedHour;
    long long _highlightedMinute;
    NSTextField *_hiddenHourTextField;
}

+ (id)_aTextFieldWithColor:(id)arg1;
+ (void)initialize;
@property(retain) NSTextField *hiddenHourTextField; // @synthesize hiddenHourTextField=_hiddenHourTextField;
@property BOOL isResizing; // @synthesize isResizing=_isResizing;
@property long long highlightedMinute; // @synthesize highlightedMinute=_highlightedMinute;
@property long long highlightedHour; // @synthesize highlightedHour=_highlightedHour;
@property(retain) NSLayoutConstraint *timeIndicatorPositionConstraint; // @synthesize timeIndicatorPositionConstraint=_timeIndicatorPositionConstraint;
@property(retain) NSView *timeIndicatorHandle; // @synthesize timeIndicatorHandle=_timeIndicatorHandle;
@property(retain) NSTextField *nowTextField; // @synthesize nowTextField=_nowTextField;
@property(retain) NSArray *hourTextFields; // @synthesize hourTextFields=_hourTextFields;
- (void).cxx_destruct;
- (void)setTimeIndicatorPosition:(double)arg1;
- (void)setTimeIndicatorHidden:(BOOL)arg1;
- (void)highlightHour:(id)arg1;
- (void)resetTimeStrings;
- (void)_updateNowString;
- (void)_updateHourTextFieldHidden;
- (void)layout;
- (void)didEndResizing;
- (void)willBeginResizing;
- (BOOL)isOpaque;
- (id)init;

@end

