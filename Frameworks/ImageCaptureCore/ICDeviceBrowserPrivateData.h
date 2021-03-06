//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ICDeviceBrowserPrivateData : NSObject
{
    id _delegate;
    BOOL _browsing;
    unsigned long long _browsedDeviceTypeMask;
    NSMutableDictionary *_launchParams;
    NSMutableArray *_internalDevices;
    NSMutableArray *_launchedButNonExistent;
    int _internalDevicesLock;
}

@property(retain) NSMutableArray *launchedButNonExistent; // @synthesize launchedButNonExistent=_launchedButNonExistent;
@property(retain) NSMutableArray *internalDevices; // @synthesize internalDevices=_internalDevices;
@property(retain) NSMutableDictionary *launchParams; // @synthesize launchParams=_launchParams;
@property unsigned long long browsedDeviceTypeMask; // @synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask;
@property BOOL browsing; // @synthesize browsing=_browsing;
@property id delegate; // @synthesize delegate=_delegate;
- (void)unlockInternalDevices;
- (void)lockInternalDevices;
- (void)finalize;
- (void)dealloc;

@end

