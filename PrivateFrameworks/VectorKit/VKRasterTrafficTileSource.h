//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKRasterTrafficTileSource : VKTileSetBackedTileSource
{
}

- (unsigned long long)mapLayerForZoomLevelRange;
- (BOOL)expires;
- (BOOL)minimumZoomLevelBoundsCamera;
- (BOOL)maximumZoomLevelBoundsCamera;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;

@end

