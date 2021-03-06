//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying>
{
    double _timestampFirstSeen;
    GEOPDAttribution *_attribution;
    int _cacheControl;
    GEOPDSource *_source;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    NSMutableArray *_values;
    int _valuesAvailable;
    unsigned int _version;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int timestampFirstSeen:1;
        unsigned int cacheControl:1;
        unsigned int startIndex:1;
        unsigned int status:1;
        unsigned int ttl:1;
        unsigned int type:1;
        unsigned int valuesAvailable:1;
        unsigned int version:1;
    } _has;
}

@property(nonatomic) int cacheControl; // @synthesize cacheControl=_cacheControl;
@property(retain, nonatomic) GEOPDSource *source; // @synthesize source=_source;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(retain, nonatomic) GEOPDAttribution *attribution; // @synthesize attribution=_attribution;
@property(nonatomic) int valuesAvailable; // @synthesize valuesAvailable=_valuesAvailable;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) unsigned int ttl; // @synthesize ttl=_ttl;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCacheControl;
@property(readonly, nonatomic) BOOL hasSource;
@property(nonatomic) BOOL hasVersion;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValue:(id)arg1;
- (void)clearValues;
@property(readonly, nonatomic) BOOL hasAttribution;
@property(nonatomic) BOOL hasValuesAvailable;
@property(nonatomic) BOOL hasStartIndex;
@property(nonatomic) BOOL hasTtl;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) BOOL hasType;
- (void)dealloc;
@property(nonatomic) BOOL hasTimestampFirstSeen;
@property(nonatomic) double timestampFirstSeen;

@end

