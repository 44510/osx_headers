//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>
{
    CDStruct_2c43369c _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView *_mapView;
}

+ (BOOL)supportsSecureCoding;
+ (id)_cameraLookingAtMapRect:(CDStruct_90e2a262)arg1 forViewSize:(struct CGSize)arg2;
+ (id)_cameraLookingAtGEOMapRect:(const CDStruct_90e2a262 *)arg1 aspectRatio:(float)arg2;
+ (id)cameraLookingAtCenterCoordinate:(CDStruct_c3b9c2ee)arg1 fromEyeCoordinate:(CDStruct_c3b9c2ee)arg2 eyeAltitude:(double)arg3;
+ (id)camera;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(nonatomic, getter=_precisePitch, setter=_setPrecisePitch:) double precisePitch; // @synthesize precisePitch=_pitch;
@property(nonatomic) double heading; // @synthesize heading=_heading;
@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
- (void).cxx_destruct;
- (BOOL)_validate;
- (id)description;
- (void)_updateState;
@property(nonatomic) double pitch;
- (void)_setMapView:(id)arg1;
- (id)_mapView;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (CDStruct_90e2a262)_enclosingGEOMapRectForAspectRatio:(float)arg1;

@end

