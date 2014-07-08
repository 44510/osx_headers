//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGDescription, NSMutableDictionary;

@interface ImageUserData : NSObject
{
    DGDescription *mRenderDescription;
    NSMutableDictionary *mImageProperties;
    NSMutableDictionary *mRKExifProperties;
}

+ (long long)rotationForOrientation:(short)arg1;
+ (id)imageUserDataFromFileAtPath:(id)arg1;
+ (id)imageUserData;
- (id)gpsLongitude;
- (id)gpsLatitude;
- (BOOL)hasGPS;
- (double)gpsAltitude;
- (double)gpsLongitudeSeconds;
- (double)gpsLongitudeMinutes;
- (double)gpsLongitudeDegrees;
- (unsigned short)gpsEorWLongitude;
- (double)gpsLatitudeSeconds;
- (double)gpsLatitudeMinutes;
- (double)gpsLatitudeDegrees;
- (unsigned short)gpsNorSLatitude;
- (short)sensingMethod;
- (double)exposureIndex;
- (double)focalLength;
- (short)flash;
- (short)lightSource;
- (short)meteringMode;
- (double)subjectDistance;
- (double)maxAperture;
- (double)exposureBias;
- (double)brightness;
- (double)aperture;
- (double)shutterSpeed;
- (short)isoSpeedRatings;
- (short)exposureProgram;
- (long long)autoRotation;
- (void)setOrientation:(short)arg1 replace:(BOOL)arg2;
- (short)orientation;
- (id)dateDigitized;
- (id)dateOriginal;
- (id)dateTime;
- (id)software;
- (id)model;
- (id)make;
- (void)setRKVersion:(id)arg1;
- (id)getImageIOEXIFDictionary;
- (void)setImageIODictionary:(id)arg1;
- (long long)rotationAdjustment;
- (void)setRenderDescription:(id)arg1;
- (id)renderDescription;
- (void)dealloc;
- (id)init;

@end

