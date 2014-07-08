//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMUbiquitousPersistentStoreLoader, NSManagedObjectModel, NSMutableDictionary, NSObject<OS_dispatch_source>, NSPersistentStore, NSPersistentStoreCoordinator, NSString;

@interface IMUbiquitousDataProvider : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_currentPersistentStore;
    int _currentPersistentStoreType;
    IMUbiquitousPersistentStoreLoader *_bringUpPersistentStoreLoader;
    IMUbiquitousPersistentStoreLoader *_localPersistentStoreLoader;
    IMUbiquitousPersistentStoreLoader *_ubiquityPersistentStoreLoader;
    long long _onceToken;
    BOOL _ubiquityEnabled;
    BOOL _metadataDictionaryDirty;
    NSObject<OS_dispatch_source> *_ubiquitousStoreRetryTimer;
    NSMutableDictionary *_metadataDictionary;
}

+ (id)ubiquityUUIDUserDefaultsKey;
+ (id)managedObjectModelBundle;
+ (id)managedObjectModelName;
+ (BOOL)ubiquityDebug;
+ (id)ubiquityQueue;
+ (void)initialize;
@property(nonatomic) BOOL metadataDictionaryDirty; // @synthesize metadataDictionaryDirty=_metadataDictionaryDirty;
@property(retain, nonatomic) NSMutableDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *ubiquityPersistentStoreLoader; // @synthesize ubiquityPersistentStoreLoader=_ubiquityPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *localPersistentStoreLoader; // @synthesize localPersistentStoreLoader=_localPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *bringUpPersistentStoreLoader; // @synthesize bringUpPersistentStoreLoader=_bringUpPersistentStoreLoader;
@property int currentPersistentStoreType; // @synthesize currentPersistentStoreType=_currentPersistentStoreType;
@property(nonatomic, getter=isUbiquityEnabled) BOOL ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(retain, nonatomic) NSPersistentStore *currentPersistentStore; // @synthesize currentPersistentStore=_currentPersistentStore;
@property(nonatomic) NSObject<OS_dispatch_source> *ubiquitousStoreRetryTimer; // @synthesize ubiquitousStoreRetryTimer=_ubiquitousStoreRetryTimer;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *remoteUbiquityUUID; // @dynamic remoteUbiquityUUID;
@property(retain, nonatomic) NSString *localUbiquityUUID; // @dynamic localUbiquityUUID;
- (id)ubiquityUUIDFileName;
- (id)ubiquityUUIDFileURL;
- (BOOL)isUbiquityUUIDValid;
- (void)generateUbiquityUUID;
- (void)scheduleRetryTimerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prefligthUbiquityBaseline:(CDUnknownBlockType)arg1;
- (BOOL)isEnabled;
- (void)cacheMetadataDictionary;
- (void)removePersistentStores;
- (void)migrateFromPersistentStoreCoordinator:(id)arg1 toPersistentStoreCoordinator:(id)arg2;
- (void)loadUbiquityPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadBringUpPersistentStore;
- (void)loadPersistentStore;
- (void)loadLocalPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadPersistentStoreCoordinator;
- (void)loadManagedObjectModel;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)notifyAnnotationsUpdated:(id)arg1;
- (id)metadataObjectForKey:(id)arg1;
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;
- (void)incrementGeneration:(id)arg1;
- (id)generationValue:(id)arg1;
- (void)setGenerationValue:(id)arg1 forKey:(id)arg2;
- (void)updateCurrentPersistentStore;
- (void)loadCoreData;
- (id)newManagedObjectContext;
- (id)newManagedObjectContextWithClass:(Class)arg1;
- (BOOL)saveManagedObjectContext:(id)arg1;
- (BOOL)isUploadingUbiquitousLogs;
- (BOOL)isReady;
- (void)reset;
- (void)dealloc;
- (id)initWithPersistentStoreURL:(id)arg1;
- (id)initWithUbiquityEnabled:(BOOL)arg1;
- (id)init;

@end

