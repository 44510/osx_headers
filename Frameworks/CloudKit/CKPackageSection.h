//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CKPackageSection : NSObject
{
    long long _index;
    NSData *_signature;
    long long _size;
}

@property(nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(long long)arg3;

@end

