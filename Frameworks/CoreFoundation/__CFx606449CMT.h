//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/__CFMapTable.h>

__attribute__((visibility("hidden")))
@interface __CFx606449CMT : __CFMapTable
{
    struct CFSlice keys;
    struct CFSlice values;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long keyOptions;
    unsigned long long valueOptions;
    unsigned long long mutations;
    struct _opaque_pthread_mutex_t growLock;
    _Bool shouldRehash;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)finalize;
- (void)dealloc;
- (void)removeObjectForKey:(id)arg1;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)assign:(unsigned long long)arg1 key:(const void *)arg2 value:(const void *)arg3 isNew:(BOOL)arg4;
- (void)grow;
- (unsigned long long)count;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (void)_setBackingStore;
- (void)zeroPairedEntries;
- (void)checkCount:(const char *)arg1;
- (unsigned long long)realCount;
- (void)raiseCountUnderflowException;
- (id)init;

@end

