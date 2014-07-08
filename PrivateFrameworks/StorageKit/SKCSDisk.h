//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StorageKit/SKDisk.h>

@class NSString;

@interface SKCSDisk : SKDisk
{
    BOOL _isEncrypted;
    NSString *_csDiskUUID;
    NSString *_csLVGUUID;
    NSString *_csFamilyUUID;
}

@property(retain) NSString *csFamilyUUID; // @synthesize csFamilyUUID=_csFamilyUUID;
@property BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(retain) NSString *csLVGUUID; // @synthesize csLVGUUID=_csLVGUUID;
@property(retain) NSString *csDiskUUID; // @synthesize csDiskUUID=_csDiskUUID;
- (void).cxx_destruct;
- (id)copyRootEncyrptionContext;
- (BOOL)establishReserveKEK:(id)arg1;
- (BOOL)unlockWithiCloudRecovery:(struct _PCSIdentityData *)arg1;
- (BOOL)unlockWithPassword:(id)arg1;
- (BOOL)validateEncryptionPassword:(id)arg1;
- (BOOL)iCloudRecoveryManageFDEUsers:(struct _PCSIdentityData *)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 handlingProgress:(CDUnknownBlockType)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (BOOL)manageFDEUsersWithPassword:(id)arg1 addingUsers:(id)arg2 removingUsers:(id)arg3 handlingProgress:(CDUnknownBlockType)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (id)getFDEUsers;
- (id)description;
- (void)_invalidate;
- (BOOL)canResize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (BOOL)matchesDictionary:(id)arg1;
- (id)minimalDictionaryRepresentation;

@end

