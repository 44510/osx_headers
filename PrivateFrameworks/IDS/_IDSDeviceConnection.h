//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class NSInputStream, NSOutputStream, NSString;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol>
{
    NSString *_nsuuid;
    BOOL _isDefaultPairedDevice;
    NSString *_service;
    NSString *_serviceToken;
    int _socket;
    CDUnknownBlockType _openSocketCompletionHandler;
    struct dispatch_queue_s *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    BOOL _hasTimedOut;
}

- (void)_daemonDied:(id)arg1;
- (void)_cleanupCompletionBlock;
- (void)xpcObject:(void *)arg1 objectContext:(id)arg2;
- (void)_close;
- (void)close;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
@property(readonly, retain, nonatomic) NSOutputStream *outputStream;
@property(readonly, retain, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)_connect;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(struct dispatch_queue_s *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

