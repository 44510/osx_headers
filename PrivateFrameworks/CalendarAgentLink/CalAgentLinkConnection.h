//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CalAgentLinkConnection : NSObject
{
    NSMutableSet *_operations;
    struct _xpc_connection_s *_connection;
}

+ (void)releaseConnectionForOperation:(id)arg1;
+ (void)setConnectionForOperation:(id)arg1;
+ (id)sharedInstance;
- (void)_releaseConnectionForOperation:(id)arg1;
- (void)_setConnectionForOperation:(id)arg1;
- (void)_interruptAllOperations;
- (void)dealloc;
- (id)init;

@end

