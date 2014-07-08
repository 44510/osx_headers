//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>
{
    CDStruct_62a50c50 _muids;
    int _resultProviderId;
    CDStruct_08086d5c _has;
}

@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)muidAtIndex:(unsigned long long)arg1;
- (void)addMuid:(unsigned long long)arg1;
- (void)clearMuids;
@property(readonly, nonatomic) unsigned long long *muids;
@property(readonly, nonatomic) unsigned long long muidsCount;
@property(nonatomic) BOOL hasResultProviderId;
- (void)dealloc;
- (id)initWithMUIDs:(id)arg1;

@end

