//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TRunAfterHelper : NSObject
{
    unsigned long long _postID;
}

+ (unsigned long long)postFunctor:(const struct function<void ()> *)arg1 withOwningTargetID:(unsigned long long)arg2 delayInSec:(double)arg3;
@property unsigned long long postID; // @synthesize postID=_postID;
- (void)callFunctor:(id)arg1;

@end

