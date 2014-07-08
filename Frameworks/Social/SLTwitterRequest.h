//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<SLTimestampSkewStorageDelegate>, NSString, NSURL, OACredential;

@interface SLTwitterRequest : NSObject
{
    ACAccount *_account;
    OACredential *_credential;
    int _callingPID;
    NSObject<SLTimestampSkewStorageDelegate> *_timestampSkewStorageDelegate;
    NSURL *_url;
    NSMutableDictionary *_parameters;
    long long _requestMethod;
    NSMutableArray *_multiParts;
    NSString *_applicationID;
}

+ (float)retryDelayForRetryCount:(int)arg1;
+ (BOOL)responseIsTimestampOutOfBounds:(id)arg1 data:(id)arg2 JSONResponseObject:(id)arg3;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) long long requestMethod; // @synthesize requestMethod=_requestMethod;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void).cxx_destruct;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)setApplicationID:(id)arg1;
- (id)timestampSkewStorageDelegate;
- (void)setTimestampSkewStorageDelegate:(id)arg1;
- (int)callingPID;
- (void)setCallingPID:(int)arg1;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)_performRequestExtractingJSONResponse:(BOOL)arg1 retryCount:(int)arg2 maxRetries:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)calculateTimestampSkewFromResponse:(id)arg1;
- (id)multiPartBodyData;
- (id)_urlEncodedString:(id)arg1;
- (id)_parameterString;
- (id)_allParameters;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (id)signedURLRequest;
- (void)_setTimestampSkew:(double)arg1;
- (double)_timestampSkew;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (id)commandName;
- (BOOL)requiresAuthorization;
- (id)credential;
- (void)setCredential:(id)arg1;
- (void)setRequestMethod:(long long)arg1;
- (id)initWithCredential:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (void)sharedPrivateInit;

@end

