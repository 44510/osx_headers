//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKLRUCacheDelegate.h"
#import "VKTileSourceClient.h"

@class GEOTileKeyList, NSArray, NSLocale, NSMutableSet, NSSet, NSString, VKMapRasterizer, VKStyleManager, VKTileCache, VKTileKeyList, VKTileSelection, VKTileSource, VKTimer, _VKTileProviderTimerTarget;

__attribute__((visibility("hidden")))
@interface VKTileProvider : NSObject <VKLRUCacheDelegate, VKTileSourceClient>
{
    id <VKTileProviderClient> _client;
    int _mode;
    VKTileSelection *_tileSelection;
    VKTileKeyList *_keysInView;
    VKTileKeyList *_neighborKeys;
    VKTileKeyList *_prefetchKeys;
    VKTimer *_evaluationTimer;
    VKTimer *_prefetchTimer;
    NSMutableSet *_tilesToRender;
    NSArray *_holes;
    NSMutableSet *_lostTiles;
    NSMutableSet *_neighborTiles;
    unsigned long long _neighborMode;
    BOOL _fallbackEnabled;
    BOOL _prefetchEnabled;
    VKTileCache *_tilePool;
    VKTileSource *_tilesSources[34];
    VKTileSource *_optionalTileSources[34];
    VKStyleManager *_styleManager;
    float _loadingProgress;
    BOOL _hasFailedTile;
    BOOL _finishedLoading;
    struct VKCameraState _lastCameraState;
    struct CGSize _lastCanvasSize;
    BOOL _tilesChanged;
    VKMapRasterizer *_rasterizer;
    id <VKMapLayer> _debugLayer;
    GEOTileKeyList *_debugLayerKeys;
    unsigned long long _tileReserveLimit;
    unsigned long long _tileMaximumLimit;
    unsigned int _prefetchNumberOfScreens;
    BOOL _useSmallTileCache;
    float _lastMidDisplayZoomLevel;
    CDStruct_34734122 _sortPoint;
    double _contentScale;
    vector_a2f7343e _exclusionAreas;
    BOOL _exclusionAreaVisible;
    _VKTileProviderTimerTarget *_evaluationTarget;
    _VKTileProviderTimerTarget *_prefetchTarget;
    unsigned int _tileGroupIdentifier;
    NSLocale *_locale;
}

@property(readonly, nonatomic) BOOL hasFailedTile; // @synthesize hasFailedTile=_hasFailedTile;
@property(readonly, nonatomic, getter=isFinishedLoading) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(readonly, nonatomic) GEOTileKeyList *debugLayerKeys; // @synthesize debugLayerKeys=_debugLayerKeys;
@property(retain, nonatomic) id <VKMapLayer> debugLayer; // @synthesize debugLayer=_debugLayer;
@property(nonatomic) BOOL useSmallTileCache; // @synthesize useSmallTileCache=_useSmallTileCache;
@property(readonly, nonatomic) float loadingProgress; // @synthesize loadingProgress=_loadingProgress;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) NSSet *neighborTiles; // @synthesize neighborTiles=_neighborTiles;
@property(readonly, nonatomic) NSSet *tilesToRender; // @synthesize tilesToRender=_tilesToRender;
@property(readonly, nonatomic) VKTileKeyList *neighborKeys; // @synthesize neighborKeys=_neighborKeys;
@property(readonly, nonatomic) VKTileKeyList *keysInView; // @synthesize keysInView=_keysInView;
@property(nonatomic, getter=isPrefetchEnabled) BOOL prefetchEnabled; // @synthesize prefetchEnabled=_prefetchEnabled;
@property(nonatomic) unsigned long long neighborMode; // @synthesize neighborMode=_neighborMode;
@property(nonatomic, getter=isFallbackEnabled) BOOL fallbackEnabled; // @synthesize fallbackEnabled=_fallbackEnabled;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) id <VKTileProviderClient> client; // @synthesize client=_client;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (BOOL)tileSource:(id)arg1 keyIsNeeded:(const struct VKTileKey *)arg2;
- (void)dirtyTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 dirtyTilesWithinRect:(const CDStruct_d2b197d1 *)arg2 level:(long long)arg3;
- (void)_dirtyTile:(id)arg1 source:(id)arg2 layer:(unsigned long long)arg3;
- (void)invalidateTilesFromTileSource:(id)arg1;
- (void)tileSource:(id)arg1 invalidateTilesWithState:(unsigned long long)arg2;
- (void)tileSource:(id)arg1 invalidateKeys:(id)arg2;
- (void)tileSource:(id)arg1 invalidateKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFailToLoadTileForKey:(const struct VKTileKey *)arg2 error:(id)arg3;
- (void)tileSource:(id)arg1 didFailToDecodeTileForKey:(const struct VKTileKey *)arg2;
- (void)tileSource:(id)arg1 didFetchTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (BOOL)tileSourceMayUseNetwork:(id)arg1;
- (void)updateWithContext:(id)arg1;
- (void)_updateTimers:(int)arg1;
- (id)selectTiles:(int *)arg1 needRasterization:(char *)arg2;
- (void)_fillHoles:(id)arg1 context:(id)arg2;
- (void)releaseChildrenFallbackTilesForTile:(id)arg1 context:(id)arg2;
- (BOOL)releaseParentFallbackTileForTile:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)_prefetchTiles;
- (void)cancelLoadForMapTile:(id)arg1;
- (void)_fetchAvailableTiles:(BOOL)arg1;
- (void)configureTileSelection;
- (void)_resizeCache;
- (unsigned long long)layerForSource:(id)arg1;
- (id)sourceForLayer:(id)arg1;
- (void)removeTileSourceForMapLayer:(unsigned long long)arg1;
- (void)setTileSource:(id)arg1 forMapLayer:(unsigned long long)arg2 optional:(BOOL)arg3;
- (void)tileSourcesDidChange;
- (BOOL)cache:(id)arg1 willEvictObject:(id)arg2 forKey:(const struct VKCacheKey *)arg3;
- (BOOL)evaluateSelectedTileForRendering:(id)arg1;
- (BOOL)evaluateNeighborTileForRendering:(id)arg1;
- (void)changeTileForKey:(const struct VKTileKey *)arg1 toState:(unsigned long long)arg2 withMetadata:(id)arg3 withTile:(id)arg4 forLayer:(unsigned long long)arg5;
- (BOOL)tileMatters:(id)arg1;
- (void)releaseFallbackTileForRendering:(id)arg1;
- (BOOL)canRenderTile:(id)arg1;
- (BOOL)hasRequiredTileData:(id)arg1;
- (BOOL)inFailedState:(id)arg1;
- (void)releaseTileForRendering:(id)arg1;
- (void)releaseNeighborTileForRendering:(id)arg1;
- (void)prepareTileForRendering:(id)arg1;
- (void)retireNeighborTiles:(id)arg1;
- (void)retireRenderTiles:(id)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)foreachOptionalLayer:(CDUnknownBlockType)arg1;
- (id)detailedDescription;
- (void)describeTilesFromList:(id)arg1 output:(id)arg2;
- (void)cancelLoadingTiles;
- (void)flushCaches;
- (void)clearScene;
- (void)rasterizer:(id)arg1 didMakeRasterTile:(id)arg2 forKey:(const struct VKTileKey *)arg3;
- (void)requireRasterization:(id)arg1;
- (void)dealloc;
- (void)quiesce;
- (id)initWithClient:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3;
@property(nonatomic) double lodBias;
- (BOOL)tileExclusionAreaVisible;
- (void)setTileExclusionAreas:(const vector_a2f7343e *)arg1;
@property(readonly, nonatomic) NSArray *visibleTileSets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
