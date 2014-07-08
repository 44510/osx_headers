//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, AVWeakReference, NSDictionary, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader
{
    const struct OpaqueFigAsset *_figAsset;
    int _figAssetCreationStatus;
    unsigned long long _figAssetCreationFlags;
    NSDictionary *_figAssetCreationOptions;
    long long _figAssetOnce;
    AVWeakReference *_weakReferenceToAsset;
    AVAssetInspector *_assetInspector;
    long long _assetInspectorOnce;
    struct dispatch_queue_s *_completionHandlerQueue;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    NSURL *_URL;
}

+ (void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4;
+ (id)_figAssetTrackPropertiesForKeys;
+ (id)_figAssetPropertiesForKeys;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (BOOL)_isStreaming;
- (BOOL)hasProtectedContent;
- (unsigned long long)downloadToken;
- (id)resolvedURL;
- (id)URL;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)lyrics;
- (CDStruct_1b6d18a9)duration;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)_loadStatusForProperty:(id)arg1 figAsset:(struct OpaqueFigAsset *)arg2 returningError:(int *)arg3;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (struct dispatch_queue_s *)_completionHandlerQueue;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigAsset *)_figAsset;
- (id)assetInspector;
- (struct OpaqueFigFormatReader *)_formatReader;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1 forAsset:(id)arg2;
- (id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 forAsset:(id)arg4;

@end

