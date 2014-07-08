//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "FMFSessionDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class FMFDevice, FMFSession, NSMutableArray, NSString;

@interface FMFActiveDeviceSelectionViewController : NSViewController <FMFSessionDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_deviceList;
    FMFDevice *_currentActiveDevice;
    FMFDevice *_nowActiveDevice;
    FMFSession *_fmfSession;
}

@property(retain, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property(retain, nonatomic) FMFDevice *nowActiveDevice; // @synthesize nowActiveDevice=_nowActiveDevice;
@property(retain, nonatomic) FMFDevice *currentActiveDevice; // @synthesize currentActiveDevice=_currentActiveDevice;
@property(retain, nonatomic) NSMutableArray *deviceList; // @synthesize deviceList=_deviceList;
- (void).cxx_destruct;
- (void)saveActiveDeviceSelection;
- (void)cancelActiveDeviceSelection;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

