//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSOrderedSet;

@interface CWConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDictionary *_info;
    NSOrderedSet *_networkProfiles;
    BOOL _rememberJoinedNetworks;
    BOOL _requireAdministratorForAssociation;
    BOOL _requireAdministratorForPower;
    BOOL _requireAdministratorForIBSSMode;
}

+ (BOOL)supportsSecureCoding;
+ (id)configurationWithConfiguration:(id)arg1;
+ (id)configurationForInterfaceWithName:(id)arg1;
+ (id)configuration;
@property BOOL rememberJoinedNetworks; // @synthesize rememberJoinedNetworks=_rememberJoinedNetworks;
@property BOOL requireAdministratorForIBSSMode; // @synthesize requireAdministratorForIBSSMode=_requireAdministratorForIBSSMode;
@property BOOL requireAdministratorForAssociation; // @synthesize requireAdministratorForAssociation=_requireAdministratorForAssociation;
@property BOOL requireAdministratorForPower; // @synthesize requireAdministratorForPower=_requireAdministratorForPower;
@property(copy) NSOrderedSet *networkProfiles; // @synthesize networkProfiles=_networkProfiles;
@property(copy) NSDictionary *info; // @synthesize info=_info;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)commitForInterfaceWithName:(id)arg1 authorization:(id)arg2 error:(out id *)arg3;
- (id)networkProfileWithSSID:(id)arg1 securityType:(unsigned long long)arg2;
- (BOOL)isEqualToConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initForInterfaceWithName:(id)arg1;
- (id)initWithInfo:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)preferredNetworks;

@end

