//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOPDPhotoContent : PBCodable <NSCopying>
{
    unsigned int _height;
    NSString *_url;
    unsigned int _width;
    CDStruct_db93fd0f _has;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasUrl;
@property(nonatomic) BOOL hasHeight;
@property(nonatomic) BOOL hasWidth;
- (void)dealloc;

@end

