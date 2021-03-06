//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapPOIQueryProtocol.h"
#import "RKMapSearchLookupControllerProtocol.h"

@class LocationData, RKMapSearchLookupController;

@interface LocationMapPOIQuery : NSObject <MapPOIQueryProtocol, RKMapSearchLookupControllerProtocol>
{
    LocationData *_locationData;
    RKMapSearchLookupController *_mapSearchLookupController;
}

- (id)_convertPOIDictionaryResultsToMapPointsOfInterest:(id)arg1;
- (void)remoteMatches:(id)arg1 userInfo:(id)arg2;
- (void)remoteQueryFinished;
- (void)remoteQueryStarting;
- (void)confirmSelection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)locationSearchWithQuery:(id)arg1 nearLocation:(struct CGPoint)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)userDefinedPOIsWithSearchStringPrefix:(id)arg1;
- (id)userDefinedPOIsContainingSearchString:(id)arg1;
- (id)_geoLookupPOIsSearchString:(id)arg1 contains:(BOOL)arg2;
- (id)geoLookupPOIsWithSearchStringPrefix:(id)arg1;
- (id)geoLookupPOIsContainingSearchString:(id)arg1;
- (id)init;
- (void)dealloc;

@end

