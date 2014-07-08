//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSString, NSURL, NSURLConnection;

@interface RadarFiler : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_connectionData;
    NSURL *_radarURL;
    NSURL *_crashTracerURL;
    NSString *_errorString;
    id _delegate;
}

- (void)dealloc;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)fileRadarWithProblemDescription:(id)arg1 comment:(id)arg2 originator:(id)arg3 systemConfiguration:(id)arg4 refileType:(int)arg5;
- (void)_parseXMLResponseData:(id)arg1;
- (void)setErrorString:(id)arg1;
- (id)errorString;
- (id)crashTracerURL;
- (id)radarURL;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
