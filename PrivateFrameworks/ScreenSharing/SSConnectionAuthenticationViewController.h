//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class NSButton, NSLayoutConstraint, NSMatrix, NSObject<SSConnectionPromptObserver>, NSProgressIndicator, NSSecureTextField, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface SSConnectionAuthenticationViewController : NSViewController <NSTextFieldDelegate>
{
    NSObject<SSConnectionPromptObserver> *mPromptObserver;
    double toggleExpandAmount;
    BOOL credentialAssigned;
    NSTextField *mHostNameLabel;
    NSMatrix *mGuestOrUserMatrix;
    NSView *mNamePassContainer;
    NSLayoutConstraint *mNamePassTopConstraint;
    NSLayoutConstraint *mNamePassBottomConstraint;
    NSLayoutConstraint *mNamePassLeftConstraint;
    NSLayoutConstraint *mNamePassRightConstraint;
    NSTextField *mUsernameLabel;
    NSTextField *mUsernameField;
    NSTextField *mPasswordLabel;
    NSSecureTextField *mPasswordField;
    NSButton *mSaveToKeychainCheckbox;
    NSButton *mConnectButton;
    NSProgressIndicator *mConnectingProgressSpinner;
    NSTextField *mConnectingText;
}

@property(retain) NSTextField *mConnectingText; // @synthesize mConnectingText;
@property(retain) NSProgressIndicator *mConnectingProgressSpinner; // @synthesize mConnectingProgressSpinner;
@property(retain) NSButton *mConnectButton; // @synthesize mConnectButton;
@property(retain) NSButton *mSaveToKeychainCheckbox; // @synthesize mSaveToKeychainCheckbox;
@property(retain) NSSecureTextField *mPasswordField; // @synthesize mPasswordField;
@property(retain) NSTextField *mPasswordLabel; // @synthesize mPasswordLabel;
@property(retain) NSTextField *mUsernameField; // @synthesize mUsernameField;
@property(retain) NSTextField *mUsernameLabel; // @synthesize mUsernameLabel;
@property(retain) NSLayoutConstraint *mNamePassRightConstraint; // @synthesize mNamePassRightConstraint;
@property(retain) NSLayoutConstraint *mNamePassLeftConstraint; // @synthesize mNamePassLeftConstraint;
@property(retain) NSLayoutConstraint *mNamePassBottomConstraint; // @synthesize mNamePassBottomConstraint;
@property(retain) NSLayoutConstraint *mNamePassTopConstraint; // @synthesize mNamePassTopConstraint;
@property(retain) NSView *mNamePassContainer; // @synthesize mNamePassContainer;
@property(retain) NSMatrix *mGuestOrUserMatrix; // @synthesize mGuestOrUserMatrix;
@property(retain) NSTextField *mHostNameLabel; // @synthesize mHostNameLabel;
@property(readonly) BOOL credentialAssigned; // @synthesize credentialAssigned;
@property id <SSConnectionPromptObserver> promptObserver; // @synthesize promptObserver=mPromptObserver;
- (void)adjustViewHeightBy:(double)arg1;
@property NSString *password;
@property NSString *username;
- (void)setHostName:(id)arg1 isVNC:(BOOL)arg2;
- (BOOL)shouldSaveCredentialsToKeychain;
- (BOOL)shouldConnectAsGuest;
- (void)setUsername:(id)arg1 andPassword:(id)arg2 fromKeychain:(BOOL)arg3;
- (void)cancelClicked:(id)arg1;
- (void)connectClicked:(id)arg1;
- (void)radioClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)setIsConnecting:(BOOL)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
