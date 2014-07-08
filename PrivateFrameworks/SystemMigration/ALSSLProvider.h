//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface ALSSLProvider : NSObject
{
    id _delegate;
    void *_sslContext;
    NSObject<OS_dispatch_queue> *_sslContextQueue;
    BOOL _secureTransport106Compatibility;
}

@property BOOL secureTransport106Compatibility; // @synthesize secureTransport106Compatibility=_secureTransport106Compatibility;
- (void).cxx_destruct;
- (long long)writeData:(void *)arg1 length:(unsigned long long)arg2;
- (long long)readData:(void *)arg1 length:(unsigned long long)arg2;
- (BOOL)setupClientSSLOnSocket:(int)arg1;
- (BOOL)_receiveAcknowledgement;
- (BOOL)_sendAcknowledgement;
- (int)_setProtocolVersionsOnContext:(struct SSLContext *)arg1 client:(BOOL)arg2;
- (BOOL)setupServerSSLOnSocket:(int)arg1;
- (int)performPermissiveHandshakeForContext:(struct SSLContext *)arg1;
- (BOOL)initializeSecurityOnFileDescriptor:(int)arg1 withRole:(int)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithQueueName:(id)arg1;

@end

