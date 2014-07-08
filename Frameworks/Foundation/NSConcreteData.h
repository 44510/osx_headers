//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

__attribute__((visibility("hidden")))
@interface NSConcreteData : NSData
{
    unsigned int _isInline:1;
    unsigned int _retainCount:31;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
    union {
        unsigned char _space[12];
        CDUnknownBlockType _deallocator;
    } _u;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)init;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (BOOL)_isCompact;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_copyWillRetain;
- (const void *)bytes;
- (unsigned long long)length;

@end

