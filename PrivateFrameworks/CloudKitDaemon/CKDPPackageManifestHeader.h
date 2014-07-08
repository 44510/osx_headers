//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

@interface CKDPPackageManifestHeader : PBCodable <NSCopying>
{
    NSData *_signature;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(nonatomic) int version; // @synthesize version=_version;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSignature;
@property(nonatomic) BOOL hasVersion;

@end

