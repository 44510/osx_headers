//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCAccount.h"

@class NSOperationQueue;

@protocol MCMailAccount <MCAccount>
- (void)incrementTotalCountOfMessagesReceived:(unsigned long long)arg1;
- (void)incrementCountOfNewUnreadMessagesReceivedInInbox:(unsigned long long)arg1;
- (void)newUnreadMessagesHaveBeenReceivedInInbox;
- (NSOperationQueue *)remoteFetchQueue;
- (NSOperationQueue *)remoteTaskQueue;
@end

