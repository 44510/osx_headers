//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableIndexSet;

@interface MGDataPool : NSObject
{
    NSMutableArray *_backingDataArray;
    unsigned long long _lengthPerBackingData;
    unsigned long long _countPerBackingData;
    unsigned long long _lengthPerDataObject;
    NSMutableIndexSet *_unusedIndexes;
    int _poolLock;
}

@property(readonly) unsigned long long lengthPerDataObject; // @synthesize lengthPerDataObject=_lengthPerDataObject;
- (unsigned long long)currentCapacity;
- (void *)mutableBytesAtIndex:(unsigned long long)arg1;
- (void)reclaimIndex:(unsigned long long)arg1;
- (id)dataFromPool;
- (void)dealloc;
- (id)initWithInitialCapacity:(unsigned long long)arg1 lengthPerDataObject:(unsigned long long)arg2;
- (id)init;

@end

