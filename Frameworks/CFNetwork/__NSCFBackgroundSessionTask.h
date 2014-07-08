//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSessionTask.h>

#import "NSURLSessionTaskSubclass.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass>
{
    BOOL _sentCancel;
    id <NDBackgroundSessionProtocol> _remoteSession;
    unsigned long long _ident;
    NSError *_immediateError;
}

@property(retain) NSError *immediateError; // @synthesize immediateError=_immediateError;
@property(readonly) unsigned long long ident; // @synthesize ident=_ident;
@property(retain) id <NDBackgroundSessionProtocol> remoteSession; // @synthesize remoteSession=_remoteSession;
- (id)_timingData;
- (void)setTaskDescription:(id)arg1;
- (void)_onqueue_disavow;
- (void)_onqueue_didResume;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_resume;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_connectionWaiting;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithBackgroundTask:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 remoteSession:(id)arg2 request:(id)arg3 ident:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

