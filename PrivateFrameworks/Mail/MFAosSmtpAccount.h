//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFSMTPAccount.h>

@class MFAosImapAccount;

@interface MFAosSmtpAccount : MFSMTPAccount
{
    MFAosImapAccount *_aosImapAccount;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setShouldTryDefaultPorts:(BOOL)arg1;
- (BOOL)shouldTryDefaultPorts;
- (id)remoteMailAccountsEmployedBy;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (BOOL)shouldUseAuthentication;
- (void)setAssociatedAccount:(id)arg1;
- (id)associatedAccount;
- (BOOL)isDynamic;
- (id)deliveryIdentifier;
- (void)setValidationRequired:(BOOL)arg1;
- (BOOL)validationRequired;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)subscriptionURLLabel;
- (id)subscriptionURL;
- (id)supportURLLabel;
- (id)supportURL;
- (id)identifier;
- (void)setISPAccountID:(id)arg1;
- (id)ISPAccountID;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)preferredAuthScheme;
- (void)_setUsesSSL:(BOOL)arg1 accountInfoKey:(id)arg2 releasingConnections:(BOOL)arg3;
- (id)appleAuthenticationToken;
- (id)applePersonID;
- (void)setSessionPassword:(id)arg1;
- (id)sessionPassword;
- (void)setPermanentPassword:(id)arg1;
- (id)permanentPassword;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)autodiscoverSettings;
- (BOOL)usesConnectionBasedAutodiscovery;
- (void)setCanonicalEmailAddress:(id)arg1;
- (id)canonicalEmailAddress;
- (void)setPortNumber:(long long)arg1;
- (long long)portNumber;
- (void)setConfigureDynamically:(BOOL)arg1;
- (BOOL)configureDynamically;
- (void)setHostname:(id)arg1;
- (id)hostname;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)setInfo:(id)arg1;
- (id)info;
- (void)_setAccountInfo:(id)arg1;
- (void)removeAccountInfoObjectForKey:(id)arg1;
- (void)setAccountInfoObject:(id)arg1 forKey:(id)arg2;
- (id)defaultsDictionary;
- (void)setIsInactivatedInsteadOfBeingDeleted:(BOOL)arg1;
- (BOOL)isInactivatedInsteadOfBeingDeleted;
- (id)offlineDisplayName;
- (void)setDisplayName;
- (id)displayName;
- (void)setStoredDisplayName;
- (id)storedDisplayName;
- (void)dealloc;
- (id)initWithAccountInfo:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

