//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class CBCentralManager, NSMutableArray, NSString, NSTimer, NSUserNotificationCenter;

@interface AppDelegate : NSObject <NSApplicationDelegate, NSUserNotificationCenterDelegate, CBCentralManagerDelegate, CBPeripheralDelegate>
{
    int activityCounter;
    NSTimer *killTimer;
    NSUserNotificationCenter *_systemCenter;
    NSMutableArray *_devicesBeingHandled;
    CBCentralManager *_centralManager;
    NSMutableArray *_pairingWindows;
}

@property(retain) NSMutableArray *pairingWindows; // @synthesize pairingWindows=_pairingWindows;
@property(retain) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain) NSMutableArray *devicesBeingHandled; // @synthesize devicesBeingHandled=_devicesBeingHandled;
@property(retain) NSUserNotificationCenter *systemCenter; // @synthesize systemCenter=_systemCenter;
- (void).cxx_destruct;
- (void)avrcpCommand:(unsigned char)arg1;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned int)arg2;
- (void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)proximityTrigger:(id)arg1 advertisementData:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)audioDeviceCreated:(id)arg1;
- (void)removePrinterForDevice:(id)arg1;
- (void)decrementActivity;
- (void)incrementActivity;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

