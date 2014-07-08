//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SMAutoLoaderSSL : NSObject
{
}

+ (struct OpaqueSecKeychainRef *)_sessionKeychain;
+ (struct OpaqueSecCertificateRef *)_generateSelfSignedCertificate:(id)arg1 forSSLServer:(BOOL)arg2;
+ (void)userRespondedToPasscode:(unsigned long long)arg1;
+ (BOOL)doSynchronousPairingWithPasscode:(unsigned long long)arg1;
+ (id)dataWithTxtRecordPublicKeyValues:(id)arg1;
+ (id)txtRecordPublicKeyValuesWithData:(id)arg1;
+ (unsigned long long)passCodeFromServerKeyData:(id)arg1 clientKeyData:(id)arg2;
+ (id)publicKeyDataFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)publicKeyDataFromIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (void)deleteKeychain;
+ (void)unlockIdentityKeychain;
+ (struct OpaqueSecIdentityRef *)clientIdentity;
+ (struct OpaqueSecIdentityRef *)serverIdentity;

@end

