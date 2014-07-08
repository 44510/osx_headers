//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier, CKDPShareIdentifier, NSData;

@interface CKDPLikedId : PBCodable <NSCopying>
{
    CKDPIdentifier *_commentIdentifier;
    NSData *_itemId;
    CKDPShareIdentifier *_shareIdentifier;
}

@property(retain, nonatomic) NSData *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) CKDPIdentifier *commentIdentifier; // @synthesize commentIdentifier=_commentIdentifier;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasItemId;
@property(readonly, nonatomic) BOOL hasCommentIdentifier;
@property(readonly, nonatomic) BOOL hasShareIdentifier;

@end

