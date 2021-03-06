//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NEIdentityKeychainItem, NEKeychainItem, NEProxySettings, NSData, NSString, NSUUID;

@interface NEVPNProtocol : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSCopying, NSSecureCoding>
{
    BOOL _disconnectOnSleep;
    BOOL _disconnectOnWake;
    BOOL _identityDataImported;
    BOOL _disconnectOnIdle;
    BOOL _disconnectOnUserSwitch;
    BOOL _disconnectOnLogout;
    int _disconnectOnWakeTimeout;
    int _disconnectOnIdleTimeout;
    NSString *_serverAddress;
    NSString *_username;
    NSUUID *_identifier;
    long long _type;
    NEKeychainItem *_passwordKeychainItem;
    NSString *_passwordEncryption;
    NEProxySettings *_proxySettings;
    NSData *_identityDataInternal;
    NSData *_identityDataHash;
    long long _keychainDomain;
    NEIdentityKeychainItem *_identity;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NEIdentityKeychainItem *identity; // @synthesize identity=_identity;
@property long long keychainDomain; // @synthesize keychainDomain=_keychainDomain;
@property BOOL disconnectOnLogout; // @synthesize disconnectOnLogout=_disconnectOnLogout;
@property BOOL disconnectOnUserSwitch; // @synthesize disconnectOnUserSwitch=_disconnectOnUserSwitch;
@property int disconnectOnIdleTimeout; // @synthesize disconnectOnIdleTimeout=_disconnectOnIdleTimeout;
@property BOOL disconnectOnIdle; // @synthesize disconnectOnIdle=_disconnectOnIdle;
@property(copy) NSData *identityDataHash; // @synthesize identityDataHash=_identityDataHash;
@property BOOL identityDataImported; // @synthesize identityDataImported=_identityDataImported;
@property(copy) NSData *identityDataInternal; // @synthesize identityDataInternal=_identityDataInternal;
@property(copy) NEProxySettings *proxySettings; // @synthesize proxySettings=_proxySettings;
@property(copy) NSString *passwordEncryption; // @synthesize passwordEncryption=_passwordEncryption;
@property(copy) NEKeychainItem *passwordKeychainItem; // @synthesize passwordKeychainItem=_passwordKeychainItem;
@property int disconnectOnWakeTimeout; // @synthesize disconnectOnWakeTimeout=_disconnectOnWakeTimeout;
@property BOOL disconnectOnWake; // @synthesize disconnectOnWake=_disconnectOnWake;
@property(readonly) long long type; // @synthesize type=_type;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property BOOL disconnectOnSleep; // @synthesize disconnectOnSleep=_disconnectOnSleep;
@property(copy) NSString *username; // @synthesize username=_username;
@property(copy) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (void).cxx_destruct;
- (id)description;
- (void)copyPasswordsFromKeychainInDomain:(long long)arg1;
- (void)migratePasswordsFromPreferences:(struct __SCPreferences *)arg1;
- (void)removeKeychainItemsInDomain:(long long)arg1;
- (void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3;
- (void)syncWithKeychainInDomainCommon:(long long)arg1;
@property(copy) NSData *identityData;
@property(copy) NSData *identityReference;
@property(copy) NSData *identityReferenceInternal;
@property(copy) NSData *passwordReference;
- (struct __SCNetworkInterface *)createInterface;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService *)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService *)arg1;
- (void)initDisconnectOptions:(id)arg1;
- (void)addDisconnectOptions:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (id)type2str;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocolIdentifier:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

