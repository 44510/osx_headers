//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class GEOVoltaireRasterTileTrafficData, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKRasterTrafficTile : VKTile
{
    GEOVoltaireRasterTileTrafficData *_modelTile;
    NSMutableArray *_incidents;
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer>> _trafficLayer;
}

@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_buildIncidents;
- (void)_buildGGLLayer:(struct Device *)arg1;
@property(readonly, nonatomic) struct TrafficLayer *trafficLayer;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 trafficData:(id)arg3 device:(struct Device *)arg4;

@end

