//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSError, NSString, NSTimeZone, NSURL, PSClient, PSFeedSettings;

@interface PSFeed : NSObject
{
    id _internal;
}

@property(readonly) int feedFormat;
@property(retain) NSString *login;
@property(readonly, retain) NSDate *localDateUpdated;
@property(readonly, retain) NSURL *redirectedURL;
@property(readonly, retain) NSURL *logoURL;
@property(readonly, retain) NSURL *iconURL;
@property(readonly, retain) NSURL *alternateURL;
@property(readonly, retain) NSURL *URL;
@property(readonly, retain) NSTimeZone *timeZoneUpdated;
@property(readonly, retain) NSDate *dateUpdated;
@property(readonly, retain) NSString *rights;
@property(readonly, retain) NSString *subtitle;
@property(readonly, retain) NSString *title;
@property(readonly, retain) NSString *identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (struct FeedCore *)_feedCore;
- (id)localDateCreatedOfNewestEntry;
@property(readonly) NSArray *links;
- (id)extensionXMLElementsUsingNamespace:(id)arg1;
- (id)XMLRepresentationWithEntries:(BOOL)arg1;
- (id)XMLRepresentation;
- (id)XMLData;
- (void)_sendEntryNotifications;
- (void)_notifyClient:(id)arg1 selector:(SEL)arg2 entries:(id)arg3 userInfo:(id)arg4 key:(id)arg5;
- (void)_rememberFlaggedEntry:(id)arg1;
- (void)_rememberUpdatedEntry:(id)arg1;
- (void)_rememberDeletedEntry:(id)arg1;
- (void)_rememberAddedEntry:(id)arg1;
- (BOOL)_remove;
@property(readonly) NSArray *entries;
- (void)_checkForUnreadCountChange;
@property(readonly) int unreadCount;
- (id)entryEnumeratorSortedBy:(id)arg1;
@property(readonly) NSError *lastError;
- (BOOL)refresh:(id *)arg1;
- (void)_agentDied;
- (void)_listenForAgentDeath;
@property(readonly, getter=isRefreshing) BOOL refreshing;
- (void)_endRefresh;
- (void)_beginRefresh;
- (void)_notifyUpdating:(id)arg1 delegateSelector:(SEL)arg2;
- (void)setPassword:(id)arg1;
- (id)_temporarySettingsDictionary;
@property(retain) PSFeedSettings *settings;
- (BOOL)_addToClient:(struct ClientCore *)arg1;
@property(readonly) PSClient *client;
- (id)description;
- (struct SubscriptionCore *)_subscriptionCore;
- (void)dealloc;
- (id)_initWithFeedCore:(struct FeedCore *)arg1 subscriptionCore:(struct SubscriptionCore *)arg2;
- (id)initWithData:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

