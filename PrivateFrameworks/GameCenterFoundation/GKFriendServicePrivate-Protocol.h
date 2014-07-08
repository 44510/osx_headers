//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKFriendService.h"

@class GKConcernInternal, GKPlayerInternal, NSArray, NSNumber, NSString;

@protocol GKFriendServicePrivate <GKFriendService>
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)markFriendRecommendations:(NSArray *)arg1 viewed:(BOOL)arg2 handler:(void (^)(void))arg3;
- (oneway void)dismissFriendRecommendations:(NSArray *)arg1 handler:(void (^)(void))arg2;
- (oneway void)getFriendRecommendationsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)declineFriendRequestsFromPlayers:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)acceptFriendRequestsFromPlayers:(NSArray *)arg1 withHandles:(NSArray *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)sendFriendRequestToPlayers:(NSArray *)arg1 emailAddresses:(NSArray *)arg2 aliases:(NSArray *)arg3 twitterScreenNames:(NSArray *)arg4 facebookIDs:(NSArray *)arg5 message:(NSString *)arg6 rid:(NSNumber *)arg7 handler:(void (^)(NSDictionary *, NSError *))arg8;
- (oneway void)getFriendRequestsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

