//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKPlayer.h>

#import "GKSavedGameListener.h"
#import "NSCoding.h"
#import "NSSecureCoding.h"

@class GKEventEmitter<GKLocalPlayerListener>, GKInvite, NSDate, NSDictionary, NSInvocation, NSString, NSWindow, UIAlertView;

@interface GKLocalPlayer : GKPlayer <NSCoding, NSSecureCoding, GKSavedGameListener>
{
    BOOL _authenticated;
    BOOL _authenticating;
    BOOL _authenticatingCurrentAccount;
    BOOL _didAuthenticate;
    BOOL _validatingAccount;
    BOOL _enteringForeground;
    BOOL _appUnrecognized;
    BOOL _newToGameCenter;
    CDUnknownBlockType _authenticateHandler;
    GKInvite *_acceptedInvite;
    CDUnknownBlockType _authenticationCompletionHandler;
    CDUnknownBlockType _validateAccountCompletionHandler;
    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSString *_lastAccountNameAuthenticated;
    NSInvocation *_currentFriendRequestInvocation;
    unsigned long long _failedLogins;
    NSDictionary *_authenticateAlertDictionary;
    long long _environment;
    NSString *_lastAuthPlayerID;
    NSDate *_lastAuthDate;
    GKEventEmitter<GKLocalPlayerListener> *_eventEmitter;
    NSWindow *_alertWindow;
}

+ (id)localPlayer;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(retain, nonatomic) GKEventEmitter<GKLocalPlayerListener> *eventEmitter; // @synthesize eventEmitter=_eventEmitter;
@property(nonatomic, getter=isNewToGameCenter) BOOL newToGameCenter; // @synthesize newToGameCenter=_newToGameCenter;
@property(retain, nonatomic) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property(retain, nonatomic) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(nonatomic, getter=isAppUnrecognized) BOOL appUnrecognized; // @synthesize appUnrecognized=_appUnrecognized;
@property(retain, nonatomic) NSDictionary *authenticateAlertDictionary; // @synthesize authenticateAlertDictionary=_authenticateAlertDictionary;
@property(nonatomic) unsigned long long failedLogins; // @synthesize failedLogins=_failedLogins;
@property(nonatomic) BOOL enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(nonatomic) BOOL validatingAccount; // @synthesize validatingAccount=_validatingAccount;
@property(nonatomic) BOOL didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property(retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // @synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation;
@property(retain, nonatomic) NSString *lastAccountNameAuthenticated; // @synthesize lastAccountNameAuthenticated=_lastAccountNameAuthenticated;
@property(nonatomic) BOOL authenticatingCurrentAccount; // @synthesize authenticatingCurrentAccount=_authenticatingCurrentAccount;
@property(retain, nonatomic) NSString *lastUsernameAttempted; // @synthesize lastUsernameAttempted=_lastUsernameAttempted;
@property(nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) UIAlertView *loginAlertView; // @synthesize loginAlertView=_loginAlertView;
@property(copy, nonatomic) CDUnknownBlockType validateAccountCompletionHandler; // @synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType authenticationCompletionHandler; // @synthesize authenticationCompletionHandler=_authenticationCompletionHandler;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic, getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property(getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
- (void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDefaultLeaderboardIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDefaultLeaderboardIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)hasEmailAddress:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)bundleIDIsCompatibleWithCurrentGame:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeFriend:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)declineFriendRequestsFromPlayers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)acceptFriendRequestsFromPlayers:(id)arg1 withHandles:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(CDUnknownBlockType)arg8;
- (void)loadFriendRequests:(CDUnknownBlockType)arg1;
- (void)addEmail:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_addEmail:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType authenticateHandler; // @synthesize authenticateHandler=_authenticateHandler;
- (void)showSettings;
@property(readonly, nonatomic) BOOL canChangePhoto; // @dynamic canChangePhoto;
- (void)loadGameRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFriendsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFriendPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)friends;
- (void)updateFromLocalPlayer:(id)arg1;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setStatus:(id)arg1;
- (void)setupMultiplayerNotifications;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1;
- (void)setupForCloudSavedGames;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(readonly, nonatomic) BOOL allowNearbyMultiplayer; // @dynamic allowNearbyMultiplayer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *facebookUserID; // @dynamic facebookUserID;
@property(readonly, nonatomic, getter=isFindable) BOOL findable; // @dynamic findable;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *iCloudUserID; // @dynamic iCloudUserID;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(readonly) Class superclass;
@property(readonly, getter=isUnderage) BOOL underage; // @dynamic underage;

@end

