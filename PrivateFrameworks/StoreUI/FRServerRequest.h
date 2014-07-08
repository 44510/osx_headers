//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSError, NSMutableData, NSString, NSTimer, NSURLConnection;

@interface FRServerRequest : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_urlConnection;
    NSTimer *_timeoutTimer;
    NSMutableData *_receivedData;
    NSError *_serverError;
}

@property(retain) NSError *serverError; // @synthesize serverError=_serverError;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)handleServerError:(id)arg1;
- (void)handleServerResponse:(id)arg1;
- (id)requestDictionary;
- (void)stop;
- (BOOL)start;
- (void)_cleanupURLConnection;
- (id)_createRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

