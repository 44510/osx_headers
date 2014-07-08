//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class IOBluetoothDevice, IOBluetoothHostController, NSButton, NSTextField, NSTimer;

@interface NumericComparisonWindowControllerSMP : NSWindowController
{
    NSButton *_buttonYes;
    NSButton *_buttonNo;
    NSTextField *_textFieldPasskey;
    NSTextField *_textFieldDeviceName;
    NSButton *_ignoreDevice;
    NSTimer *_timer;
    IOBluetoothDevice *_device;
    struct BluetoothDeviceAddress _deviceAddress;
    IOBluetoothHostController *_hostController;
}

- (void).cxx_destruct;
- (void)sendXPCmessage:(BOOL)arg1 addressString:(id)arg2;
- (void)handleNoButton:(id)arg1;
- (void)handleYesButton:(id)arg1;
- (void)BluetoothHCIEventNotificationMessage:(id)arg1 inNotificationMessage:(const struct IOBluetoothHCIEventNotificationMessage *)arg2;
- (void)deviceDisconnected:(id)arg1 device:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)timeoutTimerFired:(id)arg1;
- (void)cleanupAndQuit;
- (void)startForDevice:(id)arg1 inNumericValue:(id)arg2;
- (void)awakeFromNib;
- (id)windowNibName;

@end

