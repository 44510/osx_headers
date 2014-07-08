//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IPCompoundKeySet : NSObject
{
    unsigned int _lastLocalKey;
    struct map<unsigned int, unsigned long long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long long>>> *_localToCompoundMap;
    struct map<unsigned long long, unsigned int, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned int>>> *_compoundToLocalMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (unsigned int)keyForLocalKey:(unsigned int)arg1 type:(unsigned int *)arg2;
- (unsigned int)localKeyForType:(unsigned int)arg1 key:(unsigned int)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

