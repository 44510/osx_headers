//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject
{
    AVInternalDeviceList *_internalList;
}

+ (BOOL)setInputDevice:(id)arg1;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(copy, nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end

