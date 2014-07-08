//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface CKDPTokenRegistrationBody : PBCodable <NSCopying>
{
    int _apnsEnv;
    NSString *_bundleIdentifier;
    NSData *_token;
    struct {
        unsigned int apnsEnv:1;
    } _has;
}

@property(nonatomic) int apnsEnv; // @synthesize apnsEnv=_apnsEnv;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasApnsEnv;
@property(readonly, nonatomic) BOOL hasBundleIdentifier;
@property(readonly, nonatomic) BOOL hasToken;

@end

