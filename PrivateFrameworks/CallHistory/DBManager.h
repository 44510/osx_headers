//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger
{
    NSPersistentStoreCoordinator *fPersistentStoreCoordinator;
}

+ (id)mangedObjectWithURI:(id)arg1 inContext:(id)arg2;
+ (id)getStoreURLforContext:(id)arg1;
+ (id)getPropertyValueForKey:(id)arg1 forContext:(id)arg2;
+ (void)setPropertyValue:(id)arg1 forKey:(id)arg2 forContext:(id)arg3;
+ (id)entityDescriptionHavingName:(id)arg1 forContext:(id)arg2;
+ (BOOL)destroyDBAtLocation:(id)arg1;
+ (BOOL)migrateDataStoreAtLocation:(id)arg1 withDstModelAtLocation:(id)arg2;
+ (id)instanceWithInitDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (id)instanceWithUsingDBAtURL:(id)arg1 modelURL:(id)arg2;
+ (long long)isDataStoreAtURLInitialized:(id)arg1 withModelAtURL:(id)arg2;
+ (id)getPersistenCoordinator:(id)arg1;
+ (id)migrationOptions;
@property(retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator; // @synthesize fPersistentStoreCoordinator;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)init;

@end

