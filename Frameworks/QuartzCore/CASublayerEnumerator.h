//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class CALayer, NSArray;

__attribute__((visibility("hidden")))
@interface CASublayerEnumerator : NSEnumerator
{
    CALayer *_mask;
    NSArray *_sublayers;
    unsigned long long _index;
    unsigned long long _count;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

