//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSURL;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSSet *_sourceURLs;
    NSURL *_destinationURL;
    int _overwrite;
    BOOL _useFallback;
    NSDictionary *_sourceEntityDataPayloads;
    NSDictionary *_sourceEntityDataContentTypes;
    NSDictionary *_sourceEntityETags;
    NSMutableSet *_destinationURLs;
    NSMutableDictionary *_destinationEntityETags;
    NSMutableArray *_outstandingSourceURLsToMove;
}

@property(retain, nonatomic) NSMutableArray *outstandingSourceURLsToMove; // @synthesize outstandingSourceURLsToMove=_outstandingSourceURLsToMove;
@property(readonly, nonatomic) NSMutableSet *destinationURLs; // @synthesize destinationURLs=_destinationURLs;
@property(readonly, nonatomic) NSMutableDictionary *destinationEntityETags; // @synthesize destinationEntityETags=_destinationEntityETags;
@property(readonly, nonatomic) NSDictionary *sourceEntityETags; // @synthesize sourceEntityETags=_sourceEntityETags;
@property(readonly, nonatomic) NSDictionary *sourceEntityDataContentTypes; // @synthesize sourceEntityDataContentTypes=_sourceEntityDataContentTypes;
@property(readonly, nonatomic) NSDictionary *sourceEntityDataPayloads; // @synthesize sourceEntityDataPayloads=_sourceEntityDataPayloads;
@property(readonly, nonatomic) BOOL useFallback; // @synthesize useFallback=_useFallback;
@property(readonly, nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSSet *sourceURLs; // @synthesize sourceURLs=_sourceURLs;
- (void)_completedPutTask:(id)arg1 sourceURL:(id)arg2;
- (void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2;
- (id)_eTagFromTaskResponseHeaders:(id)arg1;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)processOutstandingTasks;
- (void)startTaskGroup;
- (id)filenameFromURL:(id)arg1;
- (id)fullDestinationURLFromSourceURL:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(BOOL)arg3 useFallback:(BOOL)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;

@end

