//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface CFRRestrictionManagement : NSObject
{
    NSXPCConnection *_connection;
    id <CFRRestrictionManaging> _serviceProxy;
    CDUnknownBlockType _connectionErrorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType connectionErrorHandler; // @synthesize connectionErrorHandler=_connectionErrorHandler;
@property(retain, nonatomic) id <CFRRestrictionManaging> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConnectionErrorHandler:(CDUnknownBlockType)arg1;

@end

