//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DUSupport/DUDiskTransientDMDisk.h>

@class NSDictionary, NSString;

@interface DUDiskCoreStorage : DUDiskTransientDMDisk
{
    NSDictionary *cachedCoreStorageData;
    NSString *cachedCoreStorageStatus;
    NSString *cachedCoreStorageVolumeUUID;
    struct __DADisk *daDisk;
}

@property(copy) NSString *cachedCoreStorageVolumeUUID; // @synthesize cachedCoreStorageVolumeUUID;
@property(copy) NSString *cachedCoreStorageStatus; // @synthesize cachedCoreStorageStatus;
@property(copy) NSDictionary *cachedCoreStorageData; // @synthesize cachedCoreStorageData;
- (void)diskFullDescription;
- (BOOL)containUserHomeDirectory;
- (BOOL)isBootVolume;
- (BOOL)isRevertable;
- (BOOL)isCoreStorageEncryptedLogicalVolumeDisk;
- (id)displayName;
- (BOOL)canBeRestoreSource;
- (BOOL)canRepairPermissions;
- (BOOL)permissionsEnabled;
- (BOOL)isJournaled;
- (id)UUID;
- (BOOL)isWritableVolume;
- (id)filesystem;
- (id)deviceNode;
- (id)diskIdentifier;
- (BOOL)ownersEnabled;
- (BOOL)canBeRepaired;
- (BOOL)canBeVerified;
- (BOOL)isEjectable;
- (id)mountPoint;
- (struct __DADisk *)theDADisk;
- (void)setDADisk:(struct __DADisk *)arg1;
- (void)updateCoreStorageDictionary:(id)arg1;
- (BOOL)isCoreStorage;
- (id)initWithDictionary:(id)arg1;
- (void)invalidateCachedData;
- (void)dealloc;

@end

