//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFWirelessSettingsControllerDelegate.h"

@class NSString;

@interface TAirDropWirelessSettingsController : NSObject <SFWirelessSettingsControllerDelegate>
{
    struct TNSRef<SFWirelessSettingsController *> _settingsController;
    _Bool _isBluetoothEnabled;
    _Bool _isWifiEnabled;
    _Bool _deviceSupportsWAPI;
    struct TNotificationCenterObserver _forceBluetoothDisabledPrefChangedObserver;
    struct TNotificationCenterObserver _forceWiFiDisabledPrefChangedObserver;
    struct TNotificationCenterObserver _forceWiFiAndBluetoothDisabledPrefChangedObserver;
}

+ (id)controller;
@property(readonly) _Bool deviceSupportsWAPI; // @synthesize deviceSupportsWAPI=_deviceSupportsWAPI;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)preferencesUpdated:(id)arg1;
- (void)wirelessSettingsDidChange:(id)arg1;
- (void)updateState;
@property(nonatomic, getter=isWifiEnabled) _Bool wifiEnabled; // @synthesize wifiEnabled=_isWifiEnabled;
@property(nonatomic, getter=isBluetoothEnabled) _Bool bluetoothEnabled; // @synthesize bluetoothEnabled=_isBluetoothEnabled;
- (void)dealloc;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

