//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectModel, NSMutableDictionary, NSPersistentStore, NSPersistentStoreCoordinator, NSURL;

@interface IMCoreDataSource : NSObject
{
    BOOL _metadataDictionaryDirty;
    NSURL *_persistentStoreURL;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStore *_persistentStore;
    NSMutableDictionary *_metadataDictionary;
}

+ (id)persistentStoreNameSeed;
+ (id)persistentStoreExtension;
+ (id)persistentStoreVersion;
+ (id)persistentStoreName;
@property BOOL metadataDictionaryDirty; // @synthesize metadataDictionaryDirty=_metadataDictionaryDirty;
@property(retain, nonatomic) NSMutableDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain) NSPersistentStore *persistentStore; // @synthesize persistentStore=_persistentStore;
@property(retain) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
- (void).cxx_destruct;
- (void)incrementGeneration:(id)arg1;
- (id)generationValue:(id)arg1;
- (void)setGenerationValue:(id)arg1 forKey:(id)arg2;
- (void)cacheMetadataDictionary;
- (id)metadataObjectForKey:(id)arg1;
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;
- (id)copyNextSortValue:(id)arg1 forKey:(id)arg2 forEntityName:(id)arg3;
- (id)copyMaxSortValue:(id)arg1 forEntityName:(id)arg2;
- (void)loadPersistentStore;
- (void)loadPersistentStoreCoordinator;
- (void)loadManagedObjectModel;
- (BOOL)saveManagedObjectContext:(id)arg1;
- (id)newManagedObjectContextWithClass:(Class)arg1;
- (id)newManagedObjectContext;
- (void)loadCoreData;
- (id)initWithPersistentStoreURL:(id)arg1;

@end

