//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LiEncoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSString;

@interface LiImmutableRidList : NSObject <NSCopying, NSCoding, LiEncoding, NSFastEnumeration>
{
    unsigned long long _ridCount;
    unsigned long long _lastOffsetFoundAt;
    vector_4442b5b9 _ridBitSetVector;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)asRidRangeItersWithProgressiveBatchSize:(unsigned long long)arg1 maxBatchSize:(unsigned long long)arg2;
- (id)asRidRangeItersWithBatchSize:(unsigned long long)arg1;
- (id)asArrayOfLimitedArraysOfNumbers:(unsigned long long)arg1;
- (id)asSetOfNumbers;
- (id)asArrayOfNumbers;
- (id)asIndexSet;
- (id)asCommaSeparatedString;
- (unsigned long long)countRidsInRange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (unsigned long long)rangeOfBatch:(unsigned long long)arg1 fromStartRid:(unsigned long long *)arg2 endRid:(unsigned long long *)arg3;
- (unsigned long long)count;
- (BOOL)isSubsetOf:(id)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (unsigned long long)lastRid;
- (unsigned long long)firstRid;
- (BOOL)isSet:(unsigned long long)arg1;
- (unsigned long long)findOffset:(unsigned long long)arg1 fromLow:(unsigned long long)arg2 toHigh:(unsigned long long)arg3;
- (unsigned long long)findOffset:(unsigned long long)arg1;
- (long long)rangeCompare:(unsigned long long)arg1 withArrayAtIndex:(unsigned long long)arg2;
- (unsigned long long)arrayCount;
- (BOOL)isImmutable;
- (BOOL)isEmpty;
- (BOOL)isEqualToRidList:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)shadowDescription;
@property(readonly, copy) NSString *description;
- (unsigned long long *)countByEnumeratingMutationPtr;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateRidsUsingBlock:(CDUnknownBlockType)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shadowCopy;
- (id)initWithData:(id)arg1;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)encodeAsData;
- (void)verifyRidList;
- (__wrap_iter_a5f64ff8)bitsetEnd;
- (__wrap_iter_a5f64ff8)bitsetBegin;
- (const shared_ptr_4932a42e *)bitsetAtIndex:(unsigned long long)arg1;
- (const shared_ptr_4932a42e *)firstBitset;
- (unsigned long long)bitsetCount;
- (id)initWithBitSetVector:(const vector_4442b5b9 *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

