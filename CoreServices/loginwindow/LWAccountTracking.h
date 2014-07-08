//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface LWAccountTracking : NSObject
{
    long long _numberOfEnabledLocalAccounts;
    BOOL _isGuestLoginEnabled;
    NSDictionary *_guestUserAttributes;
}

+ (id)sharedLWAccountTracking;
- (void)resetTrackingInfo;
- (void)stopListeningForChanges;
- (void)startListeningForChanges;
- (long long)numberOfLocalAccounts;
- (id)guestAccountAttributes;
- (BOOL)isGuestLoginEnabled;
- (void)handleUserListChangeNotification:(id)arg1;
- (void)doAccountsScan;
- (BOOL)isGuestAttributeEnabledInUserDict:(id)arg1;
- (BOOL)accountActive:(id)arg1;
- (id)searchNode;
- (void)dealloc;
- (id)init;

@end

