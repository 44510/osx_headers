//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class IOBluetoothDevice, IOBluetoothDevicePair, IOBluetoothDevicePairViewControllerExpansion, IOBluetoothPasskeyDisplay, NSString;

@interface IOBluetoothDevicePairViewController : NSViewController
{
    id <IOBluetoothDevicePairDelegate> _delegate;
    IOBluetoothDevice *_device;
    IOBluetoothDevicePair *_devicePair;
    IOBluetoothPasskeyDisplay *_passkeyDisplay;
    BOOL _useCustomPINCode;
    NSString *_PINCode;
    IOBluetoothDevicePairViewControllerExpansion *_expansion;
}

@property NSString *PINCode; // @synthesize PINCode=_PINCode;
@property(retain) IOBluetoothPasskeyDisplay *passkeyDisplay; // @synthesize passkeyDisplay=_passkeyDisplay;
@property(retain) IOBluetoothDevicePair *devicePair; // @synthesize devicePair=_devicePair;
@property(retain) IOBluetoothDevice *device; // @synthesize device=_device;
@property __weak id <IOBluetoothDevicePairDelegate> delegate; // @synthesize delegate=_delegate;
- (void)devicePairingKeypressNotification:(id)arg1 type:(unsigned char)arg2;
- (void)deviceSimplePairingComplete:(id)arg1 status:(unsigned char)arg2;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)stop;
- (int)pairWithDevice:(id)arg1;
- (int)pairWithDevice:(id)arg1 usingPincode:(id)arg2;
- (void)loadView;

@end

