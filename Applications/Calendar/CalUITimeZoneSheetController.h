//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class GEOCityPickerView, NSComboBox;

@interface CalUITimeZoneSheetController : NSWindowController
{
    GEOCityPickerView *_cityPicker;
    NSComboBox *_comboBox;
}

+ (void)showTimeZoneMapPickerOnWindow:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_cancelButtonClicked:(id)arg1;
- (void)_okButtonClicked:(id)arg1;
- (void)showTimeZoneMapPickerOnWindow:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end

