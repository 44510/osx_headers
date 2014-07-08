//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying>
{
    double _course;
    double _courseAccuracy;
    double _heading;
    double _horizontalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _timestamp;
    double _verticalAccuracy;
    int _altitude;
    GEOLatLng *_latLng;
    int _type;
    BOOL _isMatchedLocation;
    BOOL _isShifted;
    struct {
        unsigned int course:1;
        unsigned int courseAccuracy:1;
        unsigned int heading:1;
        unsigned int horizontalAccuracy:1;
        unsigned int speed:1;
        unsigned int speedAccuracy:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
        unsigned int altitude:1;
        unsigned int type:1;
        unsigned int isMatchedLocation:1;
        unsigned int isShifted:1;
    } _has;
}

@property(nonatomic) double course; // @synthesize course=_course;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) int altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCourse;
@property(nonatomic) BOOL hasHeading;
@property(nonatomic) BOOL hasSpeed;
@property(nonatomic) BOOL hasVerticalAccuracy;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasAltitude;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasType;
- (void)dealloc;
@property(readonly, nonatomic) BOOL hasAccurateCourse;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithGEOCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1;
@property(nonatomic) BOOL hasIsShifted;
@property(nonatomic) BOOL isShifted;
@property(nonatomic) BOOL hasIsMatchedLocation;
@property(nonatomic) BOOL isMatchedLocation;
@property(nonatomic) BOOL hasSpeedAccuracy;
@property(nonatomic) double speedAccuracy;
@property(nonatomic) BOOL hasCourseAccuracy;
@property(nonatomic) double courseAccuracy;

@end

