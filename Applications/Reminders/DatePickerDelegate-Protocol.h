//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDatePickerCell, NSEvent;

@protocol DatePickerDelegate <NSObject>
- (void)_datePickerCellDidResignFirstResponder:(NSDatePickerCell *)arg1;
- (void)_datePickerCellDidBecomeFirstResponder:(NSDatePickerCell *)arg1;

@optional
- (BOOL)_datePickerCell:(NSDatePickerCell *)arg1 receivedKeyDown:(NSEvent *)arg2;
- (BOOL)_datePickerCell:(NSDatePickerCell *)arg1 receivedMouseDown:(NSEvent *)arg2;
@end

