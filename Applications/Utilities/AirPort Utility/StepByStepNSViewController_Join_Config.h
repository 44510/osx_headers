//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StepByStepNSViewController.h"

@class NSDictionary, NSPopUpButton, NSTextField, NSView, NetworkAndDeviceNameNSViewController, PasswordInputNSViewController;

@interface StepByStepNSViewController_Join_Config : StepByStepNSViewController
{
    NSView *_wiFiPopUpContainer;
    NSPopUpButton *_wiFiPopUpButton;
    NSTextField *_wiFiPopUpLabel;
    NSDictionary *sourceNetwork;
    PasswordInputNSViewController *passwordView;
    NetworkAndDeviceNameNSViewController *_networkAndDeviceNameView;
}

@property(retain, nonatomic) NetworkAndDeviceNameNSViewController *networkAndDeviceNameView; // @synthesize networkAndDeviceNameView=_networkAndDeviceNameView;
- (id)outResultsDict;
- (void)handleWifiPopUpButton:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end

