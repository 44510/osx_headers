//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Authenticator, SFAuthorization;

@interface FrankenBuddyManager : NSObject
{
    Authenticator *_adminFwkAuthenticator;
    SFAuthorization *_auth;
    BOOL okToQuit;
    BOOL isGoingBackToLanguageChooser;
    long long originalKeyboardAccessMode;
}

@property BOOL isGoingBackToLanguageChooser; // @synthesize isGoingBackToLanguageChooser;
@property BOOL okToQuit; // @synthesize okToQuit;
- (void)postBuddyTasks:(BOOL)arg1:(BOOL)arg2;
- (void)preBuddyTasks:(BOOL)arg1:(BOOL)arg2;
- (void)shutdown;
- (void)goBackToLanguageChooser;
- (id)adminAuthorization;
- (BOOL)isAdminFwkAuthenticationComplete;
- (void)authenticationCompleted:(id)arg1;
- (void)authenticateWithAdminFramework;
- (id)init;
- (void)disableFullKeyboardAccess;
- (void)enableFullKeyboardAccess;
- (void)setupManagedNetworkClients;
- (BOOL)configureGlobalLanguageUserDefaults;
- (void)configureLocalKDC;

@end

