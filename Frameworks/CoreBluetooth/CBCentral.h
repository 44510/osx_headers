//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSUUID;

@interface CBCentral : NSObject <NSCopying>
{
    struct __CFUUID *_UUID;
    NSUUID *_identifier;
    unsigned long long _maximumUpdateValueLength;
}

@property(nonatomic) unsigned long long maximumUpdateValueLength; // @synthesize maximumUpdateValueLength=_maximumUpdateValueLength;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) struct __CFUUID *UUID; // @synthesize UUID=_UUID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithUUID:(id)arg1;

@end
