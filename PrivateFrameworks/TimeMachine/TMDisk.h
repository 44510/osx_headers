//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface TMDisk : NSObject
{
    NSURL *_mountPointURL;
    NSString *_mountPoint;
    struct __DADisk *_diskRef;
    struct statfs _stfs;
    NSDictionary *_diskArbDescription;
    unsigned long long _knownTraits;
    unsigned long long _traits;
}

+ (void)enumerateMountedDisksUsingBlock:(CDUnknownBlockType)arg1;
+ (id)diskForMountPoint:(id)arg1;
@property(readonly) struct statfs statfs; // @synthesize statfs=_stfs;
@property(readonly) NSURL *mountPointURL; // @synthesize mountPointURL=_mountPointURL;
- (BOOL)_isAppleBootPartition;
@property(readonly) BOOL isAppleBootPartition;
- (BOOL)_backedByDiskImage;
@property(readonly) BOOL backedByDiskImage;
- (BOOL)_includedByDefault;
@property(readonly) BOOL includedByDefault;
- (BOOL)_eligibleForBackup;
@property(readonly) BOOL eligibleForBackup;
- (BOOL)_answerForTrait:(unsigned long long)arg1 question:(CDUnknownBlockType)arg2;
@property(readonly) NSString *volumeUUID;
@property(readonly) NSString *deviceNode;
@property(readonly) int device;
@property(readonly) NSDictionary *diskArbDescription;
@property(readonly) struct __DADisk *diskRef;
@property(readonly) NSString *mountPoint;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithStatfs:(struct statfs)arg1 diskRef:(struct __DADisk *)arg2;

@end

