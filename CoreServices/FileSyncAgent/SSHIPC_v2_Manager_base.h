//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSHIPCProtocolHandler.h"
#import "SubtaskDelegate.h"

@class NSMutableData, NSMutableDictionary, NSThread, SSHIPCClient, SSHIPC_v2_Transaction, Subtask, ThreadQueue;

@interface SSHIPC_v2_Manager_base : NSObject <SubtaskDelegate, SSHIPCProtocolHandler>
{
    BOOL _abort;
    SSHIPCClient *_sshIPCClient;
    Class _serverClass;
    Subtask *_sshConnection;
    NSThread *_managerThread;
    NSMutableData *_receivedData;
    unsigned long long _numQueuedBytes;
    SSHIPC_v2_Transaction *_currentTransaction;
    ThreadQueue *_asyncReceiveQueue;
    ThreadQueue *_asyncSendQueue;
    ThreadQueue *_receiveQueue;
    NSMutableDictionary *_proxyObjects;
    struct __CFRunLoop *_runLoop;
}

@property(nonatomic) SSHIPCClient *sshIPCClient; // @synthesize sshIPCClient=_sshIPCClient;
@property(retain, nonatomic) Subtask *sshConnection; // @synthesize sshConnection=_sshConnection;
@property(retain, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
@property(retain, nonatomic) ThreadQueue *receiveQueue; // @synthesize receiveQueue=_receiveQueue;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSThread *managerThread; // @synthesize managerThread=_managerThread;
@property(retain, nonatomic) SSHIPC_v2_Transaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) ThreadQueue *asyncSendQueue; // @synthesize asyncSendQueue=_asyncSendQueue;
@property(retain, nonatomic) ThreadQueue *asyncReceiveQueue; // @synthesize asyncReceiveQueue=_asyncReceiveQueue;
- (void)_sendTransaction:(id)arg1;
- (void)waitForClientDisconnect;
- (void)disconnectSSH;
- (BOOL)supportsService:(id)arg1;
- (void)signalFatalErrorEncountered;
- (void)handleReceivedBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)connectionClosed;
- (id)sendSynchronousIPCPropertyList:(id)arg1;
- (void)sendAsynchronousIPCPropertyList:(id)arg1;
- (void)dealloc;
- (id)initWithSSHIPCServerClass:(Class)arg1;
- (id)initWithSSHIPCClient:(id)arg1;
- (id)initCommon;

@end

