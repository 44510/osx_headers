//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ServerFoundation/XSAuthenticator.h>

@class NSString;

@interface XSDigestAuthenticator : XSAuthenticator
{
    NSString *_initialResponse;
    void *_saslConnection;
}

@property void *saslConnection; // @synthesize saslConnection=_saslConnection;
@property(copy) NSString *initialResponse; // @synthesize initialResponse=_initialResponse;
- (BOOL)validateChallenge:(id)arg1 generateResponse:(id *)arg2;
- (id)generateInitialResponse;
- (void)finalize;
- (void)dealloc;

@end

