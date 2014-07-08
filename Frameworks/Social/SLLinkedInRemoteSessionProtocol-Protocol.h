//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, SLLinkedInShare;

@protocol SLLinkedInRemoteSessionProtocol <NSObject>
- (void)setActiveAccountIdentifier:(NSString *)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(void (^)(NSString *, NSError *))arg1;
- (void)sendStatus:(SLLinkedInShare *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)revokeMasterAccessToken;
- (void)revokeAccessTokenForAppWithID:(NSString *)arg1 andBundleID:(NSString *)arg2;
- (void)fetchProfileForCurrentMemberWithCompletion:(void (^)(SLLinkedInProfile *, NSError *))arg1;
- (void)uploadProfileImageData:(NSData *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

