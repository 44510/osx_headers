//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class CalUICalendarListCellView, NSColor;

@interface CalUICalendarListTitleField : NSTextField
{
    CalUICalendarListCellView *_controller;
    NSColor *_previousBGColor;
}

@property(retain) NSColor *previousBGColor; // @synthesize previousBGColor=_previousBGColor;
@property __weak CalUICalendarListCellView *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)setEditable:(BOOL)arg1;
- (CDStruct_d2b197d1)alignmentRectInsets;
- (BOOL)becomeFirstResponder;

@end

