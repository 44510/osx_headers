//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PRSResourceProvider.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSTimer;

@interface PRSSearchSession : NSObject <PRSResourceProvider>
{
    id <PRSSessionController> _client;
    NSMutableArray *_cachedResponses;
    NSMutableArray *_cachedWebResponses;
    NSObject<OS_dispatch_group> *_feedbackGroup;
    NSMutableSet *_feedbackTasks;
    NSMutableArray *_feedback;
    double _lastQueryTime;
    NSTimer *timer;
    BOOL _valid;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _sessionStartTime;
    double _retryAfter;
}

@property double retryAfter; // @synthesize retryAfter=_retryAfter;
@property double sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void).cxx_destruct;
- (void)addFeedback:(id)arg1;
- (void)flushFeedback;
- (void)setFeedbackStartTime;
- (void)killFeedback;
- (id)createFeedbackRequest:(id *)arg1;
- (void)syncFeedback;
- (void)cacheQueryResponse:(id)arg1 webSearch:(BOOL)arg2;
- (void)_invalidate;
- (void)_endSession;
- (id)resourceWithID:(id)arg1;
@property(readonly, nonatomic) double searchRenderTimeout;
- (id)queryWithString:(id)arg1 handler:(id)arg2;
- (id)queryWithString:(id)arg1 webSearch:(BOOL)arg2 handler:(id)arg3;
- (id)queryWithString:(id)arg1 webSearch:(BOOL)arg2 scaleFactor:(double)arg3 handler:(id)arg4;
- (id)createURLRequestWithString:(id)arg1 webSearch:(BOOL)arg2 scaleFactor:(double)arg3 fallbackURL:(id *)arg4;
- (id)createQueryURL:(id)arg1 userQueryString:(id)arg2 currentLocation:(id)arg3 locationSource:(id)arg4 currentCoordinates:(CDStruct_c3b9c2ee)arg5 storeFrontId:(id)arg6 locale:(id)arg7;
- (id)urlRequestFromURL:(id)arg1;
- (void)refreshGUID;
- (void)reloadGuid;
- (BOOL)searchSupported:(BOOL)arg1;
- (BOOL)sessionReady;
- (BOOL)isLocaleSupported:(id)arg1;
- (void)userDidCancelSession;
- (void)userDidSelectCompletionListItem:(id)arg1;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2;
- (void)dealloc;
- (id)initWithClient:(id)arg1;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (void)deactivate;
- (void)activate;
- (id)createWarmupRequest;
- (void)pruneCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

