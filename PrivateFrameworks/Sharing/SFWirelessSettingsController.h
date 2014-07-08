//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFWirelessSettingsController : NSObject
{
    id _delegate;
    BOOL _wifiEnabled;
    BOOL _bluetoothEnabled;
    BOOL _deviceSupportsWAPI;
    BOOL _firstCallbackCompleted;
    struct __SFOperation *_information;
    struct dispatch_semaphore_s *_firstCallBackSemaphore;
}

@property __weak id <SFWirelessSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
@property(readonly) BOOL deviceSupportsWAPI;
- (void)repairAppleID;
@property(getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property(getter=isWifiEnabled) BOOL wifiEnabled;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end

