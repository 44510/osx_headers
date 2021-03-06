//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLAuthenticationChallenge, NSURLProtectionSpace, SOAPRequest, SOAPResponse;

@protocol SOAPRequestDelegate <NSObject>

@optional
- (void)request:(SOAPRequest *)arg1 didCancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)request:(SOAPRequest *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)request:(SOAPRequest *)arg1 canAuthenticateAgainstProtectionSpace:(NSURLProtectionSpace *)arg2;
- (void)request:(SOAPRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(SOAPRequest *)arg1 didFinishWithResponse:(SOAPResponse *)arg2;
- (void)request:(SOAPRequest *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (BOOL)requestShouldUseCredentialStorage:(SOAPRequest *)arg1;
- (void)request:(SOAPRequest *)arg1 didReceiveCertificateError:(NSError *)arg2;
@end

