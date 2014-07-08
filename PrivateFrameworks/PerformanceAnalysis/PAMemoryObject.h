//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSMutableArray;

@interface PAMemoryObject : NSObject <NSCoding>
{
    unsigned long long objectID;
    long long totalDirtySize;
    long long totalCleanSize;
    long long totalSwappedSize;
    long long totalReclaimableSize;
    NSMutableArray *_referringProcesses;
    NSMutableArray *_referringMemRegions;
    struct PARangeListNode *_rangeListHead;
    BOOL _accurateSizes;
    BOOL _freezeDried;
}

@property(readonly) NSArray *referringMemRegions; // @synthesize referringMemRegions=_referringMemRegions;
@property(readonly) unsigned long long objectID; // @synthesize objectID;
@property(readonly) NSArray *referringProcesses; // @synthesize referringProcesses=_referringProcesses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)addRegion:(id)arg1 forResidency:(id)arg2;
- (id)regionsForProcess:(id)arg1;
- (void)_calculateSizes;
@property(readonly) long long totalSwappedSize; // @synthesize totalSwappedSize;
@property(readonly) long long totalReclaimableSize; // @synthesize totalReclaimableSize;
@property(readonly) long long totalCleanSize; // @synthesize totalCleanSize;
@property(readonly) long long totalDirtySize; // @synthesize totalDirtySize;
- (void)_checkForCylce;
- (void)_printRangeList;
- (id)initWithObjectID:(unsigned long long)arg1;
- (id)init;

@end

