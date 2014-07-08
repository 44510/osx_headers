//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOAutomobileOptions, GEOWalkingOptions, GEOWaypoint, GEOWaypointTyped, NSMutableArray;

@interface GEOETARequest : PBRequest <NSCopying>
{
    CDStruct_612aec5b _sessionID;
    CDStruct_8c2f87f5 _timepoint;
    GEOAutomobileOptions *_automobileOptions;
    NSMutableArray *_destinationWaypointTypeds;
    NSMutableArray *_destinations;
    unsigned int _distanceLimitMeters;
    GEOWaypoint *_origin;
    GEOWaypointTyped *_originWaypointTyped;
    NSMutableArray *_serviceTags;
    int _transportType;
    GEOWalkingOptions *_walkingOptions;
    BOOL _allowPartialResults;
    BOOL _includeDistance;
    BOOL _includeHistoricTravelTime;
    struct {
        unsigned int sessionID:1;
        unsigned int timepoint:1;
        unsigned int distanceLimitMeters:1;
        unsigned int transportType:1;
        unsigned int allowPartialResults:1;
        unsigned int includeDistance:1;
        unsigned int includeHistoricTravelTime:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSMutableArray *destinationWaypointTypeds; // @synthesize destinationWaypointTypeds=_destinationWaypointTypeds;
@property(retain, nonatomic) GEOWaypointTyped *originWaypointTyped; // @synthesize originWaypointTyped=_originWaypointTyped;
@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) BOOL includeDistance; // @synthesize includeDistance=_includeDistance;
@property(nonatomic) BOOL allowPartialResults; // @synthesize allowPartialResults=_allowPartialResults;
@property(nonatomic) BOOL includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property(retain, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) GEOWaypoint *origin; // @synthesize origin=_origin;
@property(nonatomic) CDStruct_8c2f87f5 timepoint; // @synthesize timepoint=_timepoint;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(readonly, nonatomic) BOOL hasWalkingOptions;
@property(readonly, nonatomic) BOOL hasAutomobileOptions;
- (id)destinationWaypointTypedAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationWaypointTypedsCount;
- (void)addDestinationWaypointTyped:(id)arg1;
- (void)clearDestinationWaypointTypeds;
@property(readonly, nonatomic) BOOL hasOriginWaypointTyped;
@property(nonatomic) BOOL hasDistanceLimitMeters;
@property(nonatomic) unsigned int distanceLimitMeters; // @synthesize distanceLimitMeters=_distanceLimitMeters;
@property(nonatomic) BOOL hasSessionID;
@property(nonatomic) BOOL hasIncludeDistance;
@property(nonatomic) BOOL hasAllowPartialResults;
@property(nonatomic) BOOL hasIncludeHistoricTravelTime;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (void)addDestination:(id)arg1;
- (void)clearDestinations;
@property(readonly, nonatomic) BOOL hasOrigin;
@property(nonatomic) BOOL hasTimepoint;
@property(nonatomic) BOOL hasTransportType;
- (void)dealloc;
- (id)initWithQuickETARequest:(id)arg1;

@end

