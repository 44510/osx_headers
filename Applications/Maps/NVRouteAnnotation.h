//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString, NVRoute;

__attribute__((visibility("hidden")))
@interface NVRouteAnnotation : NSObject <MKAnnotation>
{
    NVRoute *_routeOverlay;
}

+ (id)keyPathsForValuesAffectingCoordinate;
@property(readonly, nonatomic) NVRoute *routeOverlay; // @synthesize routeOverlay=_routeOverlay;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithRouteOverlay:(id)arg1;
@property(readonly) NVRoute *route;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

