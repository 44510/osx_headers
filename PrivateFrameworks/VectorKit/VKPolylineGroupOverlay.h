//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKOverlay.h"

@class GEOMapRegion, NSMutableSet, NSSet, NSString, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay>
{
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet *_observers;
    VKPolylineOverlay *_selectedPolyline;
}

@property(retain, nonatomic) VKPolylineOverlay *selectedPolyline; // @synthesize selectedPolyline=_selectedPolyline;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSSet *polylines; // @synthesize polylines=_polylines;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)_updateBoundingMapRegion;
- (void)removePolyline:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

