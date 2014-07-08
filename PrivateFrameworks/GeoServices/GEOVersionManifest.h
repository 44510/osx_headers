//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVersionManifest : PBCodable <NSCopying>
{
    NSMutableArray *_serviceVersions;
}

@property(retain, nonatomic) NSMutableArray *serviceVersions; // @synthesize serviceVersions=_serviceVersions;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceVersionsCount;
- (void)addServiceVersion:(id)arg1;
- (void)clearServiceVersions;
- (void)dealloc;

@end

