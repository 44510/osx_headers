//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface CDService : NSObject
{
    BOOL _doesPeriodic;
    BOOL _doesPurge;
    NSXPCConnection *_xpcConn;
    NSXPCListenerEndpoint *_endpoint;
    NSString *_ID;
}

@property BOOL doesPurge; // @synthesize doesPurge=_doesPurge;
@property BOOL doesPeriodic; // @synthesize doesPeriodic=_doesPeriodic;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSXPCConnection *xpcConn; // @synthesize xpcConn=_xpcConn;
- (void).cxx_destruct;

@end

