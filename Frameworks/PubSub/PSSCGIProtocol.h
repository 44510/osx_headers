//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "NSURLAuthenticationChallengeSender.h"

@class NSString, NSURLCredential, NSURLProtectionSpace;

@interface PSSCGIProtocol : NSURLProtocol <NSURLAuthenticationChallengeSender>
{
    struct Ref<PubSub::SCGIClient> _socket;
    double _requestTime;
    BOOL _hasAuthChallenge;
    BOOL _hasAuthCredentials;
    NSURLCredential *_credential;
    NSURLProtectionSpace *_credentialProtectionSpace;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)handlesURL:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)_openSocket:(id)arg1;
- (id)requestBody:(id)arg1;
- (struct SocketSignature)socketSignature;
- (id)requestToForward;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)gotRemoteClose;
- (void)gotData;
- (void)gotResponse;
- (id)successResponse;
- (void)gotError:(CDStruct_87dc826d)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

