//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ECAliasHandle : NSObject
{
    struct AliasRecord **_alias;
    BOOL _changed;
}

@property(nonatomic) struct AliasRecord **alias; // @synthesize alias=_alias;
- (id)resolve:(char *)arg1;
- (void)dealloc;
- (id)initWithPtr:(const void *)arg1 size:(long long)arg2;
- (id)initWithAliasHandle:(struct AliasRecord **)arg1;

@end

