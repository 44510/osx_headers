//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface RDUniqueQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_inQueue;
    NSMutableArray *_front;
    NSMutableArray *_back;
}

- (void).cxx_destruct;
- (id)grabAllObjects;
- (id)popFrontObject;
- (void)removeAllObjects;
- (void)removeObjects:(id)arg1;
- (void)addObjectsToEnd:(id)arg1;
- (void)addObjectsToFront:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addAtEnd:(id)arg1;
- (void)addToFront:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end
