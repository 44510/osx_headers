//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

__attribute__((visibility("hidden")))
@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary
{
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initWithDictionary:(id)arg1;
+ (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
+ (id)initForKeys:(id)arg1;
+ (id)initWithSearchStrategy:(id)arg1;
+ (id)initWithCoder:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)initWithCapacity:(unsigned long long)arg1;
+ (id)init;
+ (BOOL)supportsSecureCoding;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)objectEnumerator;
- (BOOL)isEqualToDictionary:(id)arg1;
- (void)getObjects:(id *)arg1;
- (void)getKeys:(id *)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)_valueCountByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)_countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3 forKeys:(BOOL)arg4;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)setValues:(id *)arg1;
- (void)_setValues:(id *)arg1 retain:(BOOL)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (const id *)knownKeyValuesPointer;
- (const id *)values;
- (id)mapping;
- (void)_recount;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForArchiver;
- (Class)classForCoder;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

