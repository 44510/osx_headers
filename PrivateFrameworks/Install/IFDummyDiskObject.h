//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IFDummyDiskObject : NSObject
{
}

- (unsigned long long)freeSpace;
- (unsigned long long)totalSize;
- (unsigned long long)availableSpace;
- (BOOL)filesystemIsLocked;
- (BOOL)isRootVolume;
- (id)volumeName;
- (id)diskIdentifier;
- (id)mountPoint;

@end

