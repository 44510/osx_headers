//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LPRunnable.h"

@interface LPApp : LPRunnable
{
}

- (BOOL)_collectApplicationInfoForURL:(id)arg1;
- (void)_updateFlagsForURL:(id)arg1 andBundleInfo:(id)arg2;
- (void)_updateFlags:(int *)arg1 forUninstalabilityAtURL:(id)arg2;
- (void)loadImagesFromURL:(id)arg1 mini:(unsigned long long)arg2 large:(unsigned long long)arg3 images:(CDUnknownBlockType)arg4;
- (void)updateAppDeletability;
- (void)updateInfoFromRunnable:(id)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) BOOL uiElement;
@property(readonly, nonatomic) BOOL hasExtraPlugin;
- (BOOL)resolvesBookmarks;
- (id)snapshotForStorage:(_Bool)arg1 deepCopy:(_Bool)arg2;
- (id)initWithURL:(id)arg1 forScan:(unsigned int)arg2;
- (void)insertIntoStorage:(id)arg1 parent:(id)arg2 withOrder:(long long)arg3;
- (id)storageTable;
- (id)storageCreationProperties;
- (id)storageColumnForProperty:(id)arg1;
- (int)storageType;
- (id)initWithSQLStatement:(struct sqlite3_stmt *)arg1 withColumn:(int *)arg2;

@end

