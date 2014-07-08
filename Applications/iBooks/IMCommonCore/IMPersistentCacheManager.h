//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface IMPersistentCacheManager : NSObject
{
    NSMutableDictionary *_caches;
    NSCountedSet *_pathRequestCount;
    NSMutableSet *_excludedCachesForCleanup;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cleanUpCacheFilesInPath:(id)arg1 withExtension:(id)arg2;
- (void)addCleanupExclusionPath:(id)arg1;
- (void)purgeFromCache:(id)arg1;
- (id)cacheForPath:(id)arg1 maxSize:(unsigned long long)arg2;
- (void)_cleanCachesInPath:(id)arg1;
- (id)init;

@end

