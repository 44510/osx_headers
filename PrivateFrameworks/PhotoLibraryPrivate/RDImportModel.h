//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableDictionary, NSObject<OS_dispatch_group>, RDImportContext, RDModel;

@interface RDImportModel : NSObject
{
    BOOL _success;
    BOOL _importing;
    BOOL _isDuplicate;
    NSError *_error;
    RDModel *_srcModel;
    RDImportContext *_importCtx;
    NSMutableDictionary *_faceIdMapper;
    NSObject<OS_dispatch_group> *_importGroup;
    int _spinlock;
    struct _opaque_pthread_mutex_t _onceMutex;
}

- (void).cxx_destruct;
- (void)processDuplicateTaskWithSrcModel:(id)arg1 targetModel:(id)arg2 forPropertyName:(id)arg3 policy:(unsigned long long)arg4;
- (void)processDuplicateModel:(id)arg1 withMatchingTargetModel:(id)arg2;
- (void)importNoteFromModelUuid:(id)arg1 toModelUuid:(id)arg2;
- (void)importAttachmentFromModelUuid:(id)arg1 toModelUuid:(id)arg2;
- (void)importSharedFolderWithUuids:(id)arg1;
- (void)importAlbumWithIds:(id)arg1;
- (void)importAlbumForSrcVersionModelId:(unsigned long long)arg1 toVersionModelId:(unsigned long long)arg2;
- (void)importBaseAlbums;
- (void)importSharedPlacesWithPlaceIds:(id)arg1 fromLibrary:(id)arg2;
- (void)importPlaceForVersionFromSrcVersionModelId:(unsigned long long)arg1 toVersionModelId:(unsigned long long)arg2;
- (void)importKeywordFromSrcVersionModelId:(unsigned long long)arg1 toVersionModelId:(unsigned long long)arg2;
- (void)importAdjustmentsFromSrcModelUuid:(id)arg1 toModelUuid:(id)arg2;
- (void)importGroupsForVersionsFromSrcVersionModelId:(unsigned long long)arg1 toVersionModelId:(unsigned long long)arg2;
- (void)importImageProxyStateFromVersion:(id)arg1 toVersion:(id)arg2;
- (id)importVersion:(id)arg1 linkWithMaster:(id)arg2;
- (void)importPersonsFromLibrary:(id)arg1;
- (void)importFaceGroupFromLibrary:(id)arg1;
- (void)importFacePrintFromLibrary:(id)arg1;
- (void)importFaceFromMasterUuid:(id)arg1 toMasterUuid:(id)arg2;
- (unsigned long long)targetBookmarkFromModel:(id)arg1;
- (void)importGroupsForMastersFromMasterId:(unsigned long long)arg1 toMasterId:(unsigned long long)arg2;
- (void)importImportGroupFromSrcImportGroupUuid:(id)arg1;
- (void)importVolumeFromSrcFileVolumeUuid:(id)arg1;
- (id)importMaster:(id)arg1;
- (id)checkForDuplicateWithMaster:(id)arg1;
- (void)runDuplicateChecker;
- (void)importAllWithModel:(id)arg1 linkWithMaster:(id)arg2;
- (void)importModelLinkWithModel:(id)arg1 atEnd:(CDUnknownBlockType)arg2;
- (id)waitForAsync_importModelLinkWithModel:(id)arg1;
- (void)importModel:(CDUnknownBlockType)arg1;
- (id)waitForAsync_importModel;
- (void)setError:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 importContext:(id)arg2;

@end
