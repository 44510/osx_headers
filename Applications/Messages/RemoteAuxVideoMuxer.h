//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAuxVideoReceiver.h"

@class AuxVideoController, IMLocalObject;

@interface RemoteAuxVideoMuxer : NSObject <IMAuxVideoReceiver>
{
    AuxVideoController *_auxVideoController;
    IMLocalObject *_videoReceiver;
}

- (oneway void)provider:(id)arg1 updateControlBarFromDictionaryRepresentation:(id)arg2;
- (oneway void)provider:(id)arg1 sentBuffer:(int)arg2 withAttachments:(id)arg3;
- (oneway void)provider:(id)arg1 bundleID:(id)arg2 connectWithPixelFormat:(unsigned int)arg3 videoStills:(BOOL)arg4 replacement:(BOOL)arg5 audioChannels:(int)arg6 controlsDictionary:(id)arg7;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)_receivePortDidDie:(id)arg1;
- (void)_destroyReceivePort;
- (void)_connectionRequested:(id)arg1;
- (void)_createReceivePort;

@end

