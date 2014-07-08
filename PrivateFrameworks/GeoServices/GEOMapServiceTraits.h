//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLocation, GEOMapRegion, NSMutableArray, NSString;

@interface GEOMapServiceTraits : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    CDStruct_95bda58d _transportTypes;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    double _mapZoomLevel;
    int _action;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    int _carHeadunitInteractionModel;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    NSString *_deviceDisplayLocale;
    NSMutableArray *_deviceInstalledKeyboardLocales;
    NSString *_deviceKeyboardLocale;
    GEOLocation *_deviceLocation;
    NSString *_deviceSpokenLocale;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_photoSizes;
    unsigned int _photosCount;
    NSMutableArray *_reviewUserPhotoSizes;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    BOOL _isAPICall;
    struct {
        unsigned int sessionId:1;
        unsigned int carHeadunitPixelHeight:1;
        unsigned int carHeadunitPixelWidth:1;
        unsigned int mapZoomLevel:1;
        unsigned int action:1;
        unsigned int carHeadunitInteractionModel:1;
        unsigned int photosCount:1;
        unsigned int reviewUserPhotosCount:1;
        unsigned int sequenceNumber:1;
        unsigned int source:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int isAPICall:1;
    } _has;
}

@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(nonatomic) double carHeadunitPixelHeight; // @synthesize carHeadunitPixelHeight=_carHeadunitPixelHeight;
@property(nonatomic) double carHeadunitPixelWidth; // @synthesize carHeadunitPixelWidth=_carHeadunitPixelWidth;
@property(retain, nonatomic) NSString *carHeadunitModel; // @synthesize carHeadunitModel=_carHeadunitModel;
@property(retain, nonatomic) NSString *carHeadunitManufacturer; // @synthesize carHeadunitManufacturer=_carHeadunitManufacturer;
@property(nonatomic) int carHeadunitInteractionModel; // @synthesize carHeadunitInteractionModel=_carHeadunitInteractionModel;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) unsigned int timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(nonatomic) unsigned int timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(nonatomic) unsigned int reviewUserPhotosCount; // @synthesize reviewUserPhotosCount=_reviewUserPhotosCount;
@property(retain, nonatomic) NSMutableArray *reviewUserPhotoSizes; // @synthesize reviewUserPhotoSizes=_reviewUserPhotoSizes;
@property(nonatomic) unsigned int photosCount; // @synthesize photosCount=_photosCount;
@property(retain, nonatomic) NSMutableArray *photoSizes; // @synthesize photoSizes=_photoSizes;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) BOOL isAPICall; // @synthesize isAPICall=_isAPICall;
@property(retain, nonatomic) NSMutableArray *deviceInstalledKeyboardLocales; // @synthesize deviceInstalledKeyboardLocales=_deviceInstalledKeyboardLocales;
@property(retain, nonatomic) NSString *deviceSpokenLocale; // @synthesize deviceSpokenLocale=_deviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale; // @synthesize deviceKeyboardLocale=_deviceKeyboardLocale;
@property(retain, nonatomic) NSString *deviceDisplayLocale; // @synthesize deviceDisplayLocale=_deviceDisplayLocale;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOLocation *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property(retain, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMapZoomLevel;
@property(nonatomic) BOOL hasCarHeadunitPixelHeight;
@property(nonatomic) BOOL hasCarHeadunitPixelWidth;
@property(readonly, nonatomic) BOOL hasCarHeadunitModel;
@property(readonly, nonatomic) BOOL hasCarHeadunitManufacturer;
@property(nonatomic) BOOL hasCarHeadunitInteractionModel;
@property(nonatomic) BOOL hasAction;
@property(nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(nonatomic) BOOL hasReviewUserPhotosCount;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)clearReviewUserPhotoSizes;
@property(nonatomic) BOOL hasPhotosCount;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (void)addPhotoSizes:(id)arg1;
- (void)clearPhotoSizes;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) BOOL hasIsAPICall;
- (id)deviceInstalledKeyboardLocaleAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceInstalledKeyboardLocalesCount;
- (void)addDeviceInstalledKeyboardLocale:(id)arg1;
- (void)clearDeviceInstalledKeyboardLocales;
@property(readonly, nonatomic) BOOL hasDeviceSpokenLocale;
@property(readonly, nonatomic) BOOL hasDeviceKeyboardLocale;
@property(readonly, nonatomic) BOOL hasDeviceDisplayLocale;
@property(readonly, nonatomic) BOOL hasMapRegion;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
@property(readonly, nonatomic) int *transportTypes;
@property(readonly, nonatomic) unsigned long long transportTypesCount;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
@property(readonly, nonatomic) BOOL hasAppMinorVersion;
@property(readonly, nonatomic) BOOL hasAppMajorVersion;
@property(readonly, nonatomic) BOOL hasAppIdentifier;
@property(nonatomic) BOOL hasSequenceNumber;
@property(nonatomic) BOOL hasSessionId;
- (void)dealloc;
- (int)_uiActionType;

@end

