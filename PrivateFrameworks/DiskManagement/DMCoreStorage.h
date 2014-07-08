//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DMCoreStorage : NSObject
{
    id _instPriv;
}

- (int)changePassphraseForLogicalVolume:(id)arg1 options:(id)arg2;
- (int)unlockLogicalVolume:(id)arg1 options:(id)arg2;
- (int)makeSparseLogicalVolumeGroup:(id)arg1 options:(id)arg2;
- (int)isDiskSuitableForDecryption:(struct __DADisk *)arg1 suitable:(char *)arg2 why:(id *)arg3 options:(id)arg4;
- (int)isDiskSuitableForEncryption:(struct __DADisk *)arg1 suitable:(char *)arg2 why:(id *)arg3 options:(id)arg4;
- (int)decryptSuitableDisk:(struct __DADisk *)arg1 options:(id)arg2;
- (int)encryptSuitableDisk:(struct __DADisk *)arg1 options:(id)arg2;
- (int)decryptLogicalVolume:(id)arg1 options:(id)arg2;
- (int)encryptLogicalVolume:(id)arg1 options:(id)arg2;
- (int)isSparseLogicalVolumeGroup:(id)arg1 sparse:(char *)arg2;
- (int)isLogicalVolumeFamilyEncrypted:(id)arg1 isFullyOrPartiallyEncrypted:(char *)arg2 isLocked:(char *)arg3;
- (int)logicalVolumeFamilyForLogicalVolume:(id)arg1 logicalVolumeFamily:(id *)arg2;
- (int)logicalVolumeGroupForLogicalVolume:(id)arg1 logicalVolumeGroup:(id *)arg2;
- (int)logicalVolumeGroupForLogicalVolumeFamily:(id)arg1 logicalVolumeGroup:(id *)arg2;
- (int)logicalVolumeGroupForPhysicalVolume:(id)arg1 logicalVolumeGroup:(id *)arg2;
- (int)isCompositeDiskForLogicalVolume:(id)arg1 composite:(char *)arg2;
- (int)isEncryptedDiskForLogicalVolume:(id)arg1 encrypted:(char *)arg2 locked:(char *)arg3 type:(id *)arg4;
- (int)sizeForLogicalVolume:(id)arg1 size:(id *)arg2;
- (int)nameForLogicalVolume:(id)arg1 name:(id *)arg2;
- (int)nameForLogicalVolumeGroup:(id)arg1 name:(id *)arg2;
- (int)isDamagedLogicalVolumeGroup:(id)arg1 damaged:(char *)arg2 how:(id *)arg3;
- (int)freeSpaceForLogicalVolumeGroup:(id)arg1 freeSpace:(id *)arg2;
- (int)sizeForLogicalVolumeGroup:(id)arg1 size:(id *)arg2;
- (int)physicalVolumesForLogicalVolumeGroup:(id)arg1 dictionaries:(id *)arg2;
- (int)logicalVolumesForLogicalVolumeGroup:(id)arg1 dictionaries:(id *)arg2;
- (int)logicalVolumeGroups:(id *)arg1;
- (int)logicalVolumeAndLogicalVolumeGroupForDisk:(struct __DADisk *)arg1 logicalVolume:(id *)arg2 logicalVolumeGroup:(id *)arg3;
- (int)logicalVolumeForDisk:(struct __DADisk *)arg1 logicalVolume:(id *)arg2;
- (int)physicalVolumeAndLogicalVolumeGroupForDisk:(struct __DADisk *)arg1 physicalVolume:(id *)arg2 logicalVolumeGroup:(id *)arg3;
- (int)copyDiskForLogicalVolume:(id)arg1 disk:(struct __DADisk **)arg2;
- (int)copyDiskForPhysicalVolume:(id)arg1 disk:(struct __DADisk **)arg2;
- (int)renameLogicalVolumeGroup:(id)arg1 newName:(id)arg2 options:(id)arg3;
- (int)destroyLogicalVolumeGroup:(id)arg1 options:(id)arg2;
- (int)removePhysicalVolume:(id)arg1 options:(id)arg2;
- (int)isDiskLogicalVolumeWithDesignatedBootCampVolume:(struct __DADisk *)arg1 bootCamp:(char *)arg2;
- (int)designatedPhysicalVolumeForResizeLogicalAndPhysicalStackForLogicalVolume:(id)arg1 physicalVolume:(id *)arg2 disk:(struct __DADisk **)arg3;
- (int)resizeLogicalAndPhysicalStackForLogicalVolume:(id)arg1 size:(id)arg2 withNewMapEntries:(id)arg3 options:(id)arg4;
- (int)resizePhysicalVolume:(id)arg1 size:(id)arg2 withNewMapEntries:(id)arg3 options:(id)arg4;
- (int)resizeLogicalVolume:(id)arg1 size:(id)arg2 options:(id)arg3;
- (int)destroyLogicalVolume:(id)arg1 options:(id)arg2;
- (int)createLogicalVolumeOnLogicalVolumeGroup:(id)arg1 fs:(id)arg2 name:(id)arg3 size:(id)arg4 options:(id)arg5;
- (int)addPhysicalVolumeDisk:(struct __DADisk *)arg1 toLogicalVolumeGroup:(id)arg2;
- (int)createLogicalVolumeGroup:(id)arg1 withDisks:(id)arg2 options:(id)arg3;
- (int)finishRevertVolume:(id)arg1;
- (int)revertVolume:(id)arg1 options:(id)arg2;
- (int)convertDisk:(struct __DADisk *)arg1 options:(id)arg2;
- (int)encodeReserveKekAuthRefIfAnyInDMCoreStorageOptions:(id)arg1;
- (int)checkNotUsedOrExportedByCoreStorage:(struct DMUDSPrivRec *)arg1;
- (int)checkPartitionScheme:(struct DMUDSPrivRec *)arg1;
- (int)isValidLVUUID:(id)arg1;
- (int)isValidLVFUUID:(id)arg1;
- (int)isValidPVUUID:(id)arg1;
- (int)isValidLVGUUID:(id)arg1;
- (int)doCallDaemonForCoreStorage:(id)arg1 inputDict:(id)arg2 outputDict:(id *)arg3 checkDelegate:(BOOL)arg4 sync:(BOOL)arg5;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)init;

@end

