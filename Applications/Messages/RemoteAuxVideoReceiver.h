//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AuxVideoReceiver.h"

@class IMRemoteObject<IMAuxVideoProvider>;

@interface RemoteAuxVideoReceiver : AuxVideoReceiver
{
    IMRemoteObject<IMAuxVideoProvider> *_videoProvider;
}

- (void)performActionForControlWithIdentifier:(id)arg1 control:(id)arg2;
- (void)setControls:(id)arg1;
- (id)_controls:(id)arg1 withVolumeLevel:(double)arg2;
- (void)_connectionUpdated:(id)arg1;
- (void)provider:(id)arg1 bundleID:(id)arg2 connectWithPixelFormat:(unsigned int)arg3 videoStills:(BOOL)arg4 replacement:(BOOL)arg5 audioChannels:(int)arg6 controlsDictionary:(id)arg7;
- (void)_clientDidDisconnect:(id)arg1;
- (void)_mainThreadClientDidDisconnect:(id)arg1;
- (void)setFrameRate:(double)arg1;
- (void)dealloc;

@end
