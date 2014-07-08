//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DUSupport/DUDisk.h>

@interface DUDiskTransientDMDisk : DUDisk
{
    DUDisk *diskNode;
}

@property(retain) DUDisk *diskNode; // @synthesize diskNode;
- (void)setEjected:(BOOL)arg1;
- (BOOL)isTransientDisk;
- (BOOL)hasBlankOpticalMedia;
- (BOOL)supportsPacketWriting;
- (BOOL)isCoreStoragePhysicalVolumeDisk;
- (id)conversionProgressForLogicalVolumeDisk;
- (id)infoForCoreStorageEncryptedLogicalVolumeDisk;
- (BOOL)isCoreStorageEncryptedLogicalVolumeDisk:(char *)arg1 type:(id *)arg2;
- (BOOL)isCoreStorageLogicalVolumeDisk;
- (BOOL)isCoreStorage;
- (id)connectionIDDictionary;
- (BOOL)needsPseudoPartitionDisk;
- (BOOL)containUserHomeDirectory;
- (BOOL)isBootVolume;
- (BOOL)isDVDRAM;
- (BOOL)isSCSIDisk;
- (BOOL)isUSBDisk;
- (BOOL)isFireWireDisk;
- (BOOL)isOpticalDevice;
- (BOOL)mountAllowed;
- (BOOL)canBeRepaired;
- (BOOL)canBeVerified;
- (BOOL)canRepairPermissions;
- (BOOL)permissionsEnabled;
- (BOOL)ownersEnabled;
- (unsigned long long)partitionNumber;
- (unsigned long long)diskNumber;
- (id)mediaType;
- (id)protocol;
- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (id)blockSize;
- (id)ioKitSize;
- (id)busSpecificKeys;
- (id)opticalDeviceType;
- (BOOL)isInternal;
- (id)opticalMediaType;
- (BOOL)isMountable;
- (BOOL)isErasableOpticalMedia;
- (BOOL)isJournaled;
- (BOOL)isOpticalDisc;
- (BOOL)isDVDROM;
- (BOOL)isCDROM;
- (BOOL)isNonLeaf;
- (BOOL)isNetworkDisk;
- (BOOL)isWhole;
- (BOOL)isEjectable;
- (BOOL)isWritableVolume;
- (BOOL)isWritableMedia;
- (id)diskArbInfoDict;
- (id)UUID;
- (id)bayName;
- (id)deviceTreePath;
- (id)ioContent;
- (id)filesystemType;
- (id)filesystem;
- (id)volumeName;
- (id)diskIdentifier;
- (id)mountPoint;
- (BOOL)isVirtualOnly;
- (BOOL)deviceIsOpen;
- (long long)partitionID;
- (struct __CFDictionary *)registryProps;
- (unsigned long long)sliceNumber;
- (id)wholeDiskName;
- (void)updateChildren;
- (id)children;
- (struct __DADisk *)theDADisk;
- (id)parentDisk;
- (const char *)di;
- (void)diskFullDescription;
- (void)diskOneLineDescription;
- (id)diskDisplayType;
- (int)calculateDUDiskType;
- (id)toolTipString;
- (id)stringForSimpleInterfaceList;
- (id)stringForOutlineView;
- (id)displayName;
- (id)displayIcon;
- (id)uncachedDisplayIcon;
- (BOOL)isDisplayedToUser;
- (id)deviceNode;
- (void)invalidateCachedData;
- (BOOL)shouldInvalidateCachedData;
- (void)dealloc;
- (id)initWithDisk:(struct __DADisk *)arg1;
- (id)init;

@end
