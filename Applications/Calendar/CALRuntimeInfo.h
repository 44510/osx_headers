//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CALRuntimeInfo : NSObject
{
    NSMutableDictionary *_occInfos;
}

+ (void)shutdownSingleton;
+ (BOOL)singletonInitialized;
+ (id)singleton;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2 forUUID:(id)arg3;
- (id)objectForKey:(id)arg1 forUUID:(id)arg2;
- (id)dictionaryForUUID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

