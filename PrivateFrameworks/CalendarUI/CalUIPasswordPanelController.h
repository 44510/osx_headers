//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CalUIPasswordPanelController : NSObject
{
    NSMutableDictionary *_currentlyAuthenticatingAccounts;
    NSMutableDictionary *_needToShowPasswordPromptsFor;
    NSMutableDictionary *_cancelledAccounts;
}

+ (id)_mainWindow;
+ (id)sharedController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishedAuthenticatingAccount:(id)arg1;
- (void)userCancelledAuthenticationForAccount:(id)arg1;
- (BOOL)recentlyCancelledAuthenticationForAccount:(id)arg1 isUserInitiated:(BOOL)arg2;
- (void)showPasswordPanelForAccountInUserContext:(id)arg1 isUserInitiated:(BOOL)arg2 forError:(id)arg3;
- (void)showPasswordPanelForAccount:(id)arg1 isUserInitiated:(BOOL)arg2 forError:(id)arg3;
- (void)showPasswordPanelForAccount:(id)arg1 forError:(id)arg2;
- (void)showPasswordPanelForSource:(id)arg1 forError:(id)arg2;
- (void)checkNeedsToShowPasswordPrompts;
- (void)groupsChangedExternallyOnMainThread:(id)arg1;
- (void)groupsChangedExternally:(id)arg1;
- (id)init;

@end
