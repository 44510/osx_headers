//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSError, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSValue;

@interface NSURLSessionTask : NSObject <NSCopying>
{
    _Bool __shouldPipelineHTTP;
    _Bool __shouldUsePipelineHeuristics;
    _Bool __shouldSkipPipelineProbe;
    _Bool __shouldHandleCookies;
    _Bool __preventsIdleSystemSleep;
    _Bool __allowsCellular;
    BOOL __prohibitAuthUI;
    BOOL __strictContentLength;
    _Bool __disallowCellular;
    BOOL __connectionIsCellular;
    float __priorityHint;
    int __cachePolicy;
    int __cookieAcceptPolicy;
    int __networkServiceType;
    unsigned int __powerAssertion;
    unsigned long long _taskIdentifier;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSString *_taskDescription;
    long long _state;
    NSError *_error;
    NSURL *__ledBellyFallbackURL;
    struct _CFURLRequest *__currentCFURLRequest;
    double _startTime;
    NSURLSession *_session;
    struct dispatch_queue_s *_workQueue;
    NSString *__ledBellyServiceIdentifier;
    long long __priorityValue;
    struct __PerformanceTiming *__performanceTiming;
    NSDictionary *__backgroundTaskTimingData;
    NSDictionary *__legacySocketStreamProperties;
    struct _CFHSTSPolicy *__cfHSTS;
    struct _CFURLCache *__cfCache;
    struct _CFURLCredentialStorage *__cfCreds;
    struct OpaqueCFHTTPCookieStorage *__cfCookies;
    double __timeoutInterval;
    NSDictionary *__proxySettings;
    NSDictionary *__sslSettings;
    NSDictionary *__additionalHeaders;
    NSArray *__contentDispositionFallbackArray;
    NSValue *__connectionPropertyDuet;
    long long __suspensionThreshhold;
    NSString *__boundInterfaceIdentifier;
    unsigned long long __allowedProtocolTypes;
    long long __requestPriority;
    long long __expectedWorkload;
    double __timeWindowDelay;
    double __timeWindowDuration;
    NSString *__uniqueIdentifier;
    id __protocolForTask;
}

+ (BOOL)supportsSecureCoding;
+ (id)taskForWrappedRequest:(id)arg1;
@property(nonatomic) id _protocolForTask; // @synthesize _protocolForTask=__protocolForTask;
@property(setter=_setConnectionIsCellular:) BOOL _connectionIsCellular; // @synthesize _connectionIsCellular=__connectionIsCellular;
@property unsigned int _powerAssertion; // @synthesize _powerAssertion=__powerAssertion;
@property(copy) NSString *_uniqueIdentifier; // @synthesize _uniqueIdentifier=__uniqueIdentifier;
@property double _timeWindowDuration; // @synthesize _timeWindowDuration=__timeWindowDuration;
@property double _timeWindowDelay; // @synthesize _timeWindowDelay=__timeWindowDelay;
@property long long _expectedWorkload; // @synthesize _expectedWorkload=__expectedWorkload;
@property long long _requestPriority; // @synthesize _requestPriority=__requestPriority;
@property unsigned long long _allowedProtocolTypes; // @synthesize _allowedProtocolTypes=__allowedProtocolTypes;
@property _Bool _disallowCellular; // @synthesize _disallowCellular=__disallowCellular;
@property(retain) NSString *_boundInterfaceIdentifier; // @synthesize _boundInterfaceIdentifier=__boundInterfaceIdentifier;
@property long long _suspensionThreshhold; // @synthesize _suspensionThreshhold=__suspensionThreshhold;
@property(copy) NSValue *_connectionPropertyDuet; // @synthesize _connectionPropertyDuet=__connectionPropertyDuet;
@property BOOL _strictContentLength; // @synthesize _strictContentLength=__strictContentLength;
@property BOOL _prohibitAuthUI; // @synthesize _prohibitAuthUI=__prohibitAuthUI;
@property int _networkServiceType; // @synthesize _networkServiceType=__networkServiceType;
@property _Bool _allowsCellular; // @synthesize _allowsCellular=__allowsCellular;
@property(retain) NSArray *_contentDispositionFallbackArray; // @synthesize _contentDispositionFallbackArray=__contentDispositionFallbackArray;
@property _Bool _preventsIdleSystemSleep; // @synthesize _preventsIdleSystemSleep=__preventsIdleSystemSleep;
@property(retain) NSDictionary *_additionalHeaders; // @synthesize _additionalHeaders=__additionalHeaders;
@property int _cookieAcceptPolicy; // @synthesize _cookieAcceptPolicy=__cookieAcceptPolicy;
@property _Bool _shouldHandleCookies; // @synthesize _shouldHandleCookies=__shouldHandleCookies;
@property _Bool _shouldSkipPipelineProbe; // @synthesize _shouldSkipPipelineProbe=__shouldSkipPipelineProbe;
@property _Bool _shouldUsePipelineHeuristics; // @synthesize _shouldUsePipelineHeuristics=__shouldUsePipelineHeuristics;
@property _Bool _shouldPipelineHTTP; // @synthesize _shouldPipelineHTTP=__shouldPipelineHTTP;
@property(retain) NSDictionary *_sslSettings; // @synthesize _sslSettings=__sslSettings;
@property(retain) NSDictionary *_proxySettings; // @synthesize _proxySettings=__proxySettings;
@property double _timeoutInterval; // @synthesize _timeoutInterval=__timeoutInterval;
@property int _cachePolicy; // @synthesize _cachePolicy=__cachePolicy;
@property(retain) struct OpaqueCFHTTPCookieStorage *_cfCookies; // @synthesize _cfCookies=__cfCookies;
@property(retain) struct _CFURLCredentialStorage *_cfCreds; // @synthesize _cfCreds=__cfCreds;
@property(retain) struct _CFURLCache *_cfCache; // @synthesize _cfCache=__cfCache;
@property(retain) struct _CFHSTSPolicy *_cfHSTS; // @synthesize _cfHSTS=__cfHSTS;
@property(retain) NSDictionary *_legacySocketStreamProperties; // @synthesize _legacySocketStreamProperties=__legacySocketStreamProperties;
@property(copy, nonatomic) NSDictionary *_backgroundTaskTimingData; // @synthesize _backgroundTaskTimingData=__backgroundTaskTimingData;
@property(nonatomic) struct __PerformanceTiming *_performanceTiming; // @synthesize _performanceTiming=__performanceTiming;
@property long long _priorityValue; // @synthesize _priorityValue=__priorityValue;
@property float _priorityHint; // @synthesize _priorityHint=__priorityHint;
@property(copy) NSString *_ledBellyServiceIdentifier; // @synthesize _ledBellyServiceIdentifier=__ledBellyServiceIdentifier;
@property struct dispatch_queue_s *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain) struct _CFURLRequest *_currentCFURLRequest; // @synthesize _currentCFURLRequest=__currentCFURLRequest;
@property(copy) NSURL *_ledBellyFallbackURL; // @synthesize _ledBellyFallbackURL=__ledBellyFallbackURL;
@property(copy) NSError *error; // @synthesize error=_error;
@property long long state; // @synthesize state=_state;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(readonly, copy) NSURLRequest *currentRequest;
@property(readonly, retain) NSURL *originalRequest_mainDocumentURL;
@property(readonly, retain) NSURL *currentRequest_URL;
- (struct __CFHTTPMessage *)_copyHTTPMessage;
- (void)cleanupAndBreakCycles;
- (_Bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession *)arg1;
- (void)_setSocketProperties:(struct __CFDictionary *)arg1 connectionProperties:(struct __CFDictionary *)arg2;
- (const struct XCredentialStorage *)_createXCredentialStorage;
- (const struct XCookieStorage *)_createXCookieStorage;
- (const struct XURLCache *)_createXURLCache;
- (struct _CFHSTSPolicy *)_copyHSTSPolicy;
- (void)_onqueue_releasePowerAsssertion;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_timingData;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (struct __CFDictionary *)_copySocketStreamProperties0;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary *)arg1;
- (void)updateCurrentRequest:(id)arg1;
- (struct _CFURLRequest *)_copyOriginalCFURLRequest;
- (struct _CFURLRequest *)_copyCurrentCFURLRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property long long _priority;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
@property float priority;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;

@end

