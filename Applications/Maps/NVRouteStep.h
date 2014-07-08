//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class GEOComposedRouteStep, MKDate, MKPolygon, NSArray, NSImage, NSString, NVRoute;

__attribute__((visibility("hidden")))
@interface NVRouteStep : NSObject <MKAnnotation>
{
    unsigned long long _mode;
    long long _type;
    CDStruct_2c43369c _coordinate;
    unsigned int _startPointIndex;
    unsigned int _endPointIndex;
    NSString *_instructions;
    NSString *_direction;
    NSString *_departureAddress;
    NSString *_arrivalAddress;
    unsigned int _distanceMeters;
    BOOL _displaysDistanceInMetric;
    BOOL _displaysYardsForShortDistances;
    long long _departureIntervalSeconds;
    long long _durationSeconds;
    MKDate *_departureDate;
    MKDate *_arrivalDate;
    NSArray *_notices;
    CDStruct_02837cd9 _boundingMapRect;
    unsigned long long _stepIndex;
    MKPolygon *_boundingPolygon;
    int _drivingSide;
    int _signsColor;
    NSImage *_sign;
    BOOL _signComputed;
    id _object;
    GEOComposedRouteStep *_step;
    NVRoute *_route;
    NSString *_tripDescription;
}

@property(readonly, nonatomic) NSString *tripDescription; // @synthesize tripDescription=_tripDescription;
@property(nonatomic) __weak NVRoute *route; // @synthesize route=_route;
@property(nonatomic) BOOL displaysYardsForShortDistances; // @synthesize displaysYardsForShortDistances=_displaysYardsForShortDistances;
@property(nonatomic) BOOL displaysDistanceInMetric; // @synthesize displaysDistanceInMetric=_displaysDistanceInMetric;
@property(readonly, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) MKPolygon *boundingPolygon; // @synthesize boundingPolygon=_boundingPolygon;
@property(nonatomic) unsigned long long stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_90e2a262 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(retain, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) MKDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) MKDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, nonatomic) long long durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(readonly, nonatomic) long long departureIntervalSeconds; // @synthesize departureIntervalSeconds=_departureIntervalSeconds;
@property(retain, nonatomic) NSString *arrivalAddress; // @synthesize arrivalAddress=_arrivalAddress;
@property(retain, nonatomic) NSString *departureAddress; // @synthesize departureAddress=_departureAddress;
@property(retain, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) unsigned int distanceMeters; // @synthesize distanceMeters=_distanceMeters;
@property(readonly, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(readonly, nonatomic) unsigned int endPointIndex; // @synthesize endPointIndex=_endPointIndex;
@property(readonly, nonatomic) unsigned int startPointIndex; // @synthesize startPointIndex=_startPointIndex;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *sign;
@property(readonly, nonatomic) NSString *distance;
@property(readonly, nonatomic) NSString *accessibilityDistance;
@property(readonly, nonatomic) unsigned long long numberOfPoints;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL shouldSkipInListView;
- (id)_initWithStep:(id)arg1 route:(id)arg2 distanceMeters:(unsigned long long)arg3 displaysMetric:(BOOL)arg4 displaysYardsForShortDistances:(BOOL)arg5 type:(long long)arg6 coordinate:(CDStruct_c3b9c2ee)arg7 startPointIndex:(unsigned int)arg8 endPointIndex:(unsigned int)arg9 signsColor:(int)arg10;
- (id)_initWithType:(long long)arg1 mode:(unsigned long long)arg2 coordinate:(CDStruct_c3b9c2ee)arg3 startPointIndex:(unsigned int)arg4 endPointIndex:(unsigned int)arg5 instructions:(id)arg6 distanceMeters:(unsigned long long)arg7 displaysMetric:(BOOL)arg8 displaysYardsForShortDistances:(BOOL)arg9 signsColor:(int)arg10 route:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

