//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKDisk;

@interface OSIReapableSpaceChecker : NSObject
{
    SKDisk *_disk;
}

+ (void)initialize;
- (id)reapableFiles;
- (id)reapableSpace;
- (void)_calculateSystemPathsAndSize;
- (BOOL)willBlock;
- (void)dealloc;
- (id)initWithDisk:(id)arg1;

@end
