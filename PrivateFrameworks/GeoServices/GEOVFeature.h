//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOVCharacteristics, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVFeature : PBCodable <NSCopying>
{
    CDStruct_95bda58d _extrusionHeights;
    CDStruct_95bda58d _labelOffsets;
    CDStruct_95bda58d _shieldLabelOffsets;
    CDStruct_95bda58d _shieldLabelTypes;
    unsigned long long _businessID;
    long long _uID;
    unsigned int _centerlineCount;
    unsigned int _centerlineStart;
    GEOVCharacteristics *_characteristics;
    float _endLaneWidth;
    float _endOffset;
    float _endRoadOffset;
    unsigned int _entryPointMask;
    int _formOfWay;
    float _minzoomRank;
    NSData *_oBSOLETECenterlines;
    NSData *_oBSOLETEShieldLabelPositions;
    NSData *_oBSOLETEVertexLabelPositions;
    int _placeType;
    NSData *_pointLabelPosition;
    int _roadClass;
    int _sectionCount;
    int _sectionStart;
    int _speedLimit;
    float _startLaneWidth;
    float _startOffset;
    float _startRoadOffset;
    NSMutableArray *_styleAttributes;
    unsigned int _styleGroup;
    int _travelDirection;
    int _type;
    BOOL _polyIsConvex;
    struct {
        unsigned int businessID:1;
        unsigned int uID:1;
        unsigned int centerlineCount:1;
        unsigned int centerlineStart:1;
        unsigned int endLaneWidth:1;
        unsigned int endOffset:1;
        unsigned int endRoadOffset:1;
        unsigned int entryPointMask:1;
        unsigned int formOfWay:1;
        unsigned int minzoomRank:1;
        unsigned int placeType:1;
        unsigned int roadClass:1;
        unsigned int sectionCount:1;
        unsigned int sectionStart:1;
        unsigned int speedLimit:1;
        unsigned int startLaneWidth:1;
        unsigned int startOffset:1;
        unsigned int startRoadOffset:1;
        unsigned int styleGroup:1;
        unsigned int travelDirection:1;
        unsigned int type:1;
        unsigned int polyIsConvex:1;
    } _has;
}

@property(nonatomic) unsigned int entryPointMask; // @synthesize entryPointMask=_entryPointMask;
@property(nonatomic) float endRoadOffset; // @synthesize endRoadOffset=_endRoadOffset;
@property(nonatomic) float startRoadOffset; // @synthesize startRoadOffset=_startRoadOffset;
@property(nonatomic) float endLaneWidth; // @synthesize endLaneWidth=_endLaneWidth;
@property(nonatomic) float startLaneWidth; // @synthesize startLaneWidth=_startLaneWidth;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) unsigned int centerlineStart; // @synthesize centerlineStart=_centerlineStart;
@property(nonatomic) unsigned int centerlineCount; // @synthesize centerlineCount=_centerlineCount;
@property(retain, nonatomic) NSData *oBSOLETECenterlines; // @synthesize oBSOLETECenterlines=_oBSOLETECenterlines;
@property(nonatomic) float minzoomRank; // @synthesize minzoomRank=_minzoomRank;
@property(nonatomic) float endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) GEOVCharacteristics *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) int speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) unsigned int styleGroup; // @synthesize styleGroup=_styleGroup;
@property(retain, nonatomic) NSData *oBSOLETEShieldLabelPositions; // @synthesize oBSOLETEShieldLabelPositions=_oBSOLETEShieldLabelPositions;
@property(retain, nonatomic) NSData *oBSOLETEVertexLabelPositions; // @synthesize oBSOLETEVertexLabelPositions=_oBSOLETEVertexLabelPositions;
@property(retain, nonatomic) NSData *pointLabelPosition; // @synthesize pointLabelPosition=_pointLabelPosition;
@property(nonatomic) int sectionCount; // @synthesize sectionCount=_sectionCount;
@property(nonatomic) int sectionStart; // @synthesize sectionStart=_sectionStart;
@property(nonatomic) int travelDirection; // @synthesize travelDirection=_travelDirection;
@property(nonatomic) int formOfWay; // @synthesize formOfWay=_formOfWay;
@property(nonatomic) int roadClass; // @synthesize roadClass=_roadClass;
@property(nonatomic) BOOL polyIsConvex; // @synthesize polyIsConvex=_polyIsConvex;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
@property(nonatomic) unsigned long long businessID; // @synthesize businessID=_businessID;
@property(nonatomic) long long uID; // @synthesize uID=_uID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEntryPointMask;
@property(nonatomic) BOOL hasEndRoadOffset;
@property(nonatomic) BOOL hasStartRoadOffset;
@property(nonatomic) BOOL hasEndLaneWidth;
@property(nonatomic) BOOL hasStartLaneWidth;
@property(nonatomic) BOOL hasType;
- (id)styleAttributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleAttributesCount;
- (void)addStyleAttributes:(id)arg1;
- (void)clearStyleAttributes;
@property(nonatomic) BOOL hasCenterlineStart;
@property(nonatomic) BOOL hasCenterlineCount;
@property(readonly, nonatomic) BOOL hasOBSOLETECenterlines;
@property(nonatomic) BOOL hasMinzoomRank;
@property(nonatomic) BOOL hasEndOffset;
@property(nonatomic) BOOL hasStartOffset;
@property(readonly, nonatomic) BOOL hasCharacteristics;
- (void)setExtrusionHeights:(int *)arg1 count:(unsigned long long)arg2;
- (int)extrusionHeightAtIndex:(unsigned long long)arg1;
- (void)addExtrusionHeight:(int)arg1;
- (void)clearExtrusionHeights;
@property(readonly, nonatomic) int *extrusionHeights;
@property(readonly, nonatomic) unsigned long long extrusionHeightsCount;
@property(nonatomic) BOOL hasSpeedLimit;
@property(nonatomic) BOOL hasStyleGroup;
@property(readonly, nonatomic) BOOL hasOBSOLETEShieldLabelPositions;
@property(readonly, nonatomic) BOOL hasOBSOLETEVertexLabelPositions;
@property(readonly, nonatomic) BOOL hasPointLabelPosition;
@property(nonatomic) BOOL hasSectionCount;
@property(nonatomic) BOOL hasSectionStart;
@property(nonatomic) BOOL hasTravelDirection;
@property(nonatomic) BOOL hasFormOfWay;
@property(nonatomic) BOOL hasRoadClass;
@property(nonatomic) BOOL hasPolyIsConvex;
@property(nonatomic) BOOL hasPlaceType;
@property(nonatomic) BOOL hasBusinessID;
@property(nonatomic) BOOL hasUID;
- (void)setShieldLabelTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)shieldLabelTypeAtIndex:(unsigned long long)arg1;
- (void)addShieldLabelType:(int)arg1;
- (void)clearShieldLabelTypes;
@property(readonly, nonatomic) int *shieldLabelTypes;
@property(readonly, nonatomic) unsigned long long shieldLabelTypesCount;
- (void)setShieldLabelOffsets:(int *)arg1 count:(unsigned long long)arg2;
- (int)shieldLabelOffsetAtIndex:(unsigned long long)arg1;
- (void)addShieldLabelOffset:(int)arg1;
- (void)clearShieldLabelOffsets;
@property(readonly, nonatomic) int *shieldLabelOffsets;
@property(readonly, nonatomic) unsigned long long shieldLabelOffsetsCount;
- (void)setLabelOffsets:(int *)arg1 count:(unsigned long long)arg2;
- (int)labelOffsetAtIndex:(unsigned long long)arg1;
- (void)addLabelOffset:(int)arg1;
- (void)clearLabelOffsets;
@property(readonly, nonatomic) int *labelOffsets;
@property(readonly, nonatomic) unsigned long long labelOffsetsCount;
- (void)dealloc;

@end

