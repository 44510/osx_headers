//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSXPCStoreServerRequestHandlingPolicy.h"

@interface CalAgentPolicy : NSXPCStoreServerRequestHandlingPolicy
{
}

- (id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (id)_restrictingPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2;
- (BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1;
- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1;
- (unsigned long long)_shouldAcceptIncomingRequestFromClientWithContext:(id)arg1;

@end

