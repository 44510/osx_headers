//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SLLinkedInSession : NSObject
{
    id <SLLinkedInRemoteSessionProtocol> _remoteSession;
}

- (void).cxx_destruct;
- (void)revokeMasterAccessToken;
- (void)revokeAccessTokenForAppWithID:(id)arg1 andBundleID:(id)arg2;
- (id)permaLinkFromLastStatusUpdate:(id *)arg1;
- (void)sendStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)uploadProfilePicture:(id)arg1 error:(id *)arg2;
- (id)memberProfile;
- (void)setActiveAccountIdentifier:(id)arg1;
- (id)init;

@end

