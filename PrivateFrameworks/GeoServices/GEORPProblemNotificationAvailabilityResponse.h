//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEORPProblemNotificationAvailabilityResponse : PBCodable <NSCopying>
{
    CDStruct_95bda58d _supportedProblemTypes;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setSupportedProblemTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedProblemTypeAtIndex:(unsigned long long)arg1;
- (void)addSupportedProblemType:(int)arg1;
- (void)clearSupportedProblemTypes;
@property(readonly, nonatomic) int *supportedProblemTypes;
@property(readonly, nonatomic) unsigned long long supportedProblemTypesCount;
@property(nonatomic) BOOL hasStatusCode;
- (void)dealloc;

@end

