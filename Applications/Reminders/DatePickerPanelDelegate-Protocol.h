//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DatePickerPanel;

@protocol DatePickerPanelDelegate <NSObject>
- (void)selectPreviousKeyViewHidingPanel:(DatePickerPanel *)arg1;
- (void)selectNextKeyViewHidingPanel:(DatePickerPanel *)arg1;
- (void)datePickerPanelDidResignKeyWindow:(DatePickerPanel *)arg1;
@end

