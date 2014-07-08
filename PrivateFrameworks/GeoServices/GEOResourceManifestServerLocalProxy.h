//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestServerProxy.h"
#import "NSURLConnectionDelegate.h"

@class GEOActiveTileGroup, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSError, NSLock, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, NSTimer, NSURLConnection;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLConnectionDelegate, GEOResourceManifestServerProxy>
{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSString *_responseETag;
    GEOResourceManifestConfiguration *_configuration;
    BOOL _isObservingManifestReachability;
    NSTimer *_manifestUpdateTimer;
    BOOL _isObservingTileGroupReachability;
    NSTimer *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    GEOResourceLoader *_resourceLoader;
    NSMutableDictionary *_resourceRetainCounts;
    BOOL _started;
    unsigned long long _manifestRetryCount;
    unsigned long long _tileGroupRetryCount;
    NSString *_authToken;
    NSLock *_authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
}

@property(nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_purgeOldRegionalResources;
- (oneway void)releaseResources:(id)arg1;
- (oneway void)retainResources:(id)arg1;
- (void)_retainResource:(id)arg1;
- (id)_resourceInfosForTileGroup:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTimerFired:(id)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (void)forceUpdate:(CDUnknownBlockType)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(CDUnknownBlockType)arg1;
- (BOOL)_updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (id)_manifestURL;
- (void)_reachabilityChanged:(id)arg1;
- (void)_registerReachabilityObserver:(unsigned long long)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_writeManifestToDisk:(id)arg1;
- (void)_writeActiveTileGroupToDisk:(id)arg1;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)_cleanupConnection;
- (void)_cancelConnection;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_considerChangingActiveTileGroup;
- (id)_idealTileGroupToUse;
- (BOOL)_changeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2;
- (void)_loadFromDisk;
- (void)_startServer;
- (id)configuration;
- (id)authToken;
- (void)closeConnection;
- (void)openConnection;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (struct dispatch_queue_s *)serverQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

