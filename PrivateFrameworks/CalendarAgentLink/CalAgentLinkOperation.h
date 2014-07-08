//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalStopwatch, NSDictionary, NSError;

@interface CalAgentLinkOperation : NSObject
{
    BOOL _isExecuting;
    BOOL _isCancelled;
    BOOL _isFinished;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    struct _xpc_connection_s *_connection;
    CalStopwatch *_stopwatch;
    BOOL _isAllowedToBeRunOnAgent;
    struct dispatch_queue_s *_messageQueue;
    unsigned long long _timeout;
}

+ (void)disableAgentLinkForTesting;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct dispatch_queue_s *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) CalStopwatch *stopwatch; // @synthesize stopwatch=_stopwatch;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isAllowedToBeRunOnAgent; // @synthesize isAllowedToBeRunOnAgent=_isAllowedToBeRunOnAgent;
@property(nonatomic) struct _xpc_connection_s *connection; // @synthesize connection=_connection;
- (void)finish;
- (void)_finishWithTimeout;
- (void)willFinish;
- (void)responsePayloadReceived:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *inputPayload;
- (BOOL)eligibleForExecution;
- (void)prepare;
- (void)start;
- (void)setErrorWithCode:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

