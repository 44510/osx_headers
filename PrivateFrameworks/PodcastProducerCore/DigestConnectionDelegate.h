//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSMutableURLRequest, NSString;

@interface DigestConnectionDelegate : NSObject <NSURLConnectionDelegate>
{
    id serverResponsePList;
    BOOL done;
    BOOL canceled;
    NSString *user;
    NSString *pass;
    struct timeval startTime;
    double thpt;
    int percentComplete;
    int authAttempted;
    CDUnknownBlockType progress_block;
    unsigned long long documentBytesWritten;
    unsigned long long documentFileSize;
    float percentRange;
    NSMutableURLRequest *originalRequest;
    int statusCode;
    NSError *requestError;
    struct _PCPLogContext *logContext;
    int verbosity;
    NSMutableData *serverResponseData;
}

@property(retain) NSMutableData *serverResponseData; // @synthesize serverResponseData;
@property int verbosity; // @synthesize verbosity;
@property(retain) NSError *requestError; // @synthesize requestError;
@property int statusCode; // @synthesize statusCode;
@property(retain) NSMutableURLRequest *originalRequest; // @synthesize originalRequest;
@property float percentRange; // @synthesize percentRange;
@property unsigned long long documentFileSize; // @synthesize documentFileSize;
@property unsigned long long documentBytesWritten; // @synthesize documentBytesWritten;
@property(retain) CDUnknownBlockType progress_block; // @synthesize progress_block;
@property int percentComplete; // @synthesize percentComplete;
@property double thpt; // @synthesize thpt;
@property(retain) NSString *pass; // @synthesize pass;
@property(retain) NSString *user; // @synthesize user;
@property BOOL canceled; // @synthesize canceled;
@property BOOL done; // @synthesize done;
@property(retain) id serverResponsePList; // @synthesize serverResponsePList;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (void)cleanup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
