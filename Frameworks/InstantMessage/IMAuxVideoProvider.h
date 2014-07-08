//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMAuxVideoProvider.h"

@class IMSharedPixelBufferPool, NSString, NSThread;

@interface IMAuxVideoProvider : NSObject <IMAuxVideoProvider>
{
    unsigned long long _clientState;
    NSString *_providerID;
    BOOL _didConnect;
    BOOL _willUpdateSettings;
    NSThread *_callbackThread;
    IMSharedPixelBufferPool *_sharedBufferPool;
    double _frameRate;
    unsigned long long _shouldExit;
    unsigned long long _isAboutToExitThread;
}

- (oneway void)performActionForControlWithDictionaryRepresentation:(id)arg1;
- (oneway void)disconnectAndActivate:(BOOL)arg1;
- (oneway void)setBufferPoolDescription:(id)arg1 audioDeviceUID:(id)arg2 channels:(id)arg3;
- (void)_createBufferPoolWithDescription:(id)arg1;
- (oneway void)provideFrameAtFramerate:(double)arg1;
- (void)_callbackThreadMain;
- (void)_processWorkItem:(id)arg1;
- (double)_fillBufferFromPool:(id)arg1 atRate:(double)arg2;
- (void)deliverFrameWithBufferID:(long long)arg1 attachments:(id)arg2;
- (void)updateControlBarFromDictionaryRepresentation:(id)arg1;
- (void)makeInactive;
- (void)stopClient;
- (void)startClient;
- (unsigned long long)clientState;
- (void)updateVideoProvider;
- (void)_connectToReceiver;
- (void)deactivateVideoProvider;
- (void)_setClientState:(unsigned long long)arg1;
- (id)auxVideoReceiverTarget;
- (void)dealloc;
- (id)init;

@end

