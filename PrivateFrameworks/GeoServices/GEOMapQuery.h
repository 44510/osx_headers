//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, GEOMapRegion, GEOPlaceSearchRequest, NSString;

@interface GEOMapQuery : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    GEOMapRegion *_mapRegion;
    int _mapSpanX;
    int _mapSpanY;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    GEOLocation *_userLocation;
    int _zoomlevel;
    struct {
        unsigned int sessionID:1;
        unsigned int clientImgFmt:1;
        unsigned int clientImgMaxHeight:1;
        unsigned int clientImgMaxWidth:1;
        unsigned int mapCenterX:1;
        unsigned int mapCenterY:1;
        unsigned int mapSpanX:1;
        unsigned int mapSpanY:1;
        unsigned int requestType:1;
        unsigned int tilesizeX:1;
        unsigned int tilesizeY:1;
        unsigned int zoomlevel:1;
    } _has;
}

@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) GEOLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(nonatomic) int clientImgMaxHeight; // @synthesize clientImgMaxHeight=_clientImgMaxHeight;
@property(nonatomic) int clientImgMaxWidth; // @synthesize clientImgMaxWidth=_clientImgMaxWidth;
@property(nonatomic) int tilesizeY; // @synthesize tilesizeY=_tilesizeY;
@property(nonatomic) int tilesizeX; // @synthesize tilesizeX=_tilesizeX;
@property(nonatomic) int clientImgFmt; // @synthesize clientImgFmt=_clientImgFmt;
@property(nonatomic) int zoomlevel; // @synthesize zoomlevel=_zoomlevel;
@property(nonatomic) int mapSpanY; // @synthesize mapSpanY=_mapSpanY;
@property(nonatomic) int mapSpanX; // @synthesize mapSpanX=_mapSpanX;
@property(nonatomic) int mapCenterY; // @synthesize mapCenterY=_mapCenterY;
@property(nonatomic) int mapCenterX; // @synthesize mapCenterX=_mapCenterX;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceSearchRequest;
@property(nonatomic) BOOL hasSessionID;
@property(readonly, nonatomic) BOOL hasUserLocation;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(nonatomic) BOOL hasClientImgMaxHeight;
@property(nonatomic) BOOL hasClientImgMaxWidth;
@property(nonatomic) BOOL hasTilesizeY;
@property(nonatomic) BOOL hasTilesizeX;
@property(nonatomic) BOOL hasClientImgFmt;
@property(nonatomic) BOOL hasZoomlevel;
@property(nonatomic) BOOL hasMapSpanY;
@property(nonatomic) BOOL hasMapSpanX;
@property(nonatomic) BOOL hasMapCenterY;
@property(nonatomic) BOOL hasMapCenterX;
@property(nonatomic) BOOL hasRequestType;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end

