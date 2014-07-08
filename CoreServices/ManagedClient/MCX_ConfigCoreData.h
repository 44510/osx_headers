//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSString;

@interface MCX_ConfigCoreData : NSObject
{
    NSManagedObjectContext *gManagedObjectContext;
    NSManagedObjectModel *gManagedObjectModel;
    NSString *_storeFileName;
}

@property(retain) NSString *storeFileName; // @synthesize storeFileName=_storeFileName;
- (void)dealloc;
- (id)initWithAlternateFileName:(id)arg1;
- (id)init;
- (id)userDictionaryForProfile:(id)arg1 forUserGUID:(id)arg2;
- (id)setUserDictionary:(id)arg1 forProfileIdentifier:(id)arg2 forUserGUID:(id)arg3;
- (id)createNewProfileDictionaryFromCoreDataProfile:(id)arg1 returnedUser:(id *)arg2;
- (id)insertProfile:(id)arg1 forUser:(id)arg2 guid:(id)arg3;
- (id)profilesForAllUsersAsCPProfile:(BOOL)arg1;
- (id)profilesForUserAsCPProfile:(id)arg1 addComputerProfiles:(BOOL)arg2 allowWildcardSearches:(BOOL)arg3;
- (id)profilesForUserAsCPProfile:(id)arg1 addComputerProfiles:(BOOL)arg2;
- (void)populateProfileData:(id)arg1 toCPProfileArray:(id)arg2;
- (id)copyProfileDataToCPProfile:(id)arg1;
- (BOOL)deleteExistingCPProfiles:(id)arg1;
- (id)profileFromIdentifierAsDictionary:(id)arg1 forUserGUID:(id)arg2;
- (id)profilesFromIdentifier:(id)arg1 forUserGUID:(id)arg2;
- (id)profilesFromIdentifierAsCPProfile:(id)arg1 forUserGUID:(id)arg2;
- (id)profilesForAttribute:(id)arg1 withValue:(id)arg2 withSortKey:(id)arg3 allowWildcardSearches:(BOOL)arg4;
- (id)profilesForAttribute:(id)arg1 withValue:(id)arg2 withSortKey:(id)arg3;
- (id)allProfilesAsArray;
- (id)saveProfiles;
- (BOOL)persistentStoreExists;
- (BOOL)removePersistentStoreFile;
- (id)createPersistentStoreDirectory;
- (id)cp_profilesForUser:(id)arg1 withComputerProfiles:(BOOL)arg2;
- (id)cp_profilesForUser:(id)arg1 withComputerProfiles:(BOOL)arg2 allowWildcardSearches:(BOOL)arg3;
- (id)cp_profilesForPredicate:(id)arg1 loadPayloads:(BOOL)arg2 withSortKey:(id)arg3;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)persistentStoreURL;
- (id)persistentStoreLocation;
- (id)guidForUser:(id)arg1;
- (id)dataToConfigPropertyList:(id)arg1;
- (id)dataFromConfigPropertyList:(id)arg1;

@end

