//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAlbumVersionModel.h>

@interface RDAlbumVersion : RDAlbumVersionModel
{
}

+ (id)removeVersionsFromAllAlbums:(id)arg1;
+ (id)removeVersions:(id)arg1 fromAlbum:(id)arg2;
+ (id)addVersions:(id)arg1 toAlbum:(id)arg2;
+ (id)versionIds:(id)arg1 inAlbumId:(id)arg2 inDatabase:(id)arg3;
+ (void)addDuplicateVersion:(id)arg1 forOriginalVersionId:(id)arg2;
+ (id)versionsForAlbum:(id)arg1;
+ (id)versionIdListForAlbumsIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionIdListForAlbum:(id)arg1;
+ (id)versionIdListForAlbumId:(id)arg1 fromDatabase:(id)arg2;
+ (id)countOfVersionsForAlbumId:(id)arg1 inTrash:(BOOL)arg2 fromDatabase:(id)arg3;
+ (id)albumIdsForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)albumIdsForVersionId:(id)arg1 fromDatabase:(id)arg2;
+ (void)deleteAllAlbumVersionsForAlbumId:(id)arg1 fromDatabase:(id)arg2;
+ (void)deleteFromAllAlbums:(id)arg1 fromDatabase:(id)arg2;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)init;

@end

