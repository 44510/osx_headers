//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOSearchAttributionServerProxy.h"

@class NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy>
{
    NSMapTable *_listeners;
    BOOL _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
}

- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(BOOL)arg2;
- (void)_updateManifestWithCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_pruneOldAttributionLogos;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 updatedManifest:(BOOL)arg2 toListener:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

