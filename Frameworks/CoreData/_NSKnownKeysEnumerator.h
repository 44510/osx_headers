//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

__attribute__((visibility("hidden")))
@interface _NSKnownKeysEnumerator : NSEnumerator
{
    id _target;
    const id *_list;
    const id *_referenceItems;
    struct _NSRange _range;
    unsigned long long _index;
    unsigned long long _flags;
}

- (id)nextObject;
- (void)dealloc;
- (void)_invalidate;
- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(const id *)arg3 andRange:(struct _NSRange)arg4 andCopyItems:(BOOL)arg5;

@end

