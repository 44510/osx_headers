//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldPack : PBCodable <NSCopying>
{
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property(retain, nonatomic) NSMutableArray *shields; // @synthesize shields=_shields;
@property(retain, nonatomic) NSMutableArray *atlas; // @synthesize atlas=_atlas;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldsCount;
- (void)addShields:(id)arg1;
- (void)clearShields;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)addAtlas:(id)arg1;
- (void)clearAtlas;
- (void)dealloc;

@end

