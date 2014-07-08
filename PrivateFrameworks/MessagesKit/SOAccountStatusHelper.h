//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MessagesKit/SOHelper.h>

@class NSMutableDictionary;

@interface SOAccountStatusHelper : SOHelper
{
    NSMutableDictionary *_cachedStatusImages;
}

+ (id)weakSharedInstance;
+ (id)remoteReceiverProtocol;
+ (id)bundleName;
@property(retain) NSMutableDictionary *cachedStatusImages; // @synthesize cachedStatusImages=_cachedStatusImages;
- (void).cxx_destruct;
- (id)screenSharingUser;
- (void)screenSharingShouldEnd;
- (id)suggestedMenuOrder;
- (id)onlineAccounts;
- (id)imageForStatus:(id)arg1;
- (void)setUsesAlternateStatusImages:(BOOL)arg1;
- (id)selectedMenuOptionsBlocking;
- (id)selectedMenuOptions;
- (id)statusMenuOptionsBlocking;
- (id)statusMenuOptions;
- (id)statusTitleBlocking;
- (id)statusTitle;
- (long long)currentStatusBlocking;
- (long long)currentStatus;
- (void)setAccountStatus:(id)arg1 message:(id)arg2;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;

@end

