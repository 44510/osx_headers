//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying>
{
    NSString *_eventName;
    int _loiType;
    struct {
        unsigned int loiType:1;
    } _has;
}

@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) int loiType; // @synthesize loiType=_loiType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasEventName;
@property(nonatomic) BOOL hasLoiType;
- (void)dealloc;

@end

