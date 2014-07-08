//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MBPerUserState : NSObject
{
    NSString *_previousSystemVersion;
    NSString *_previousBuildVersion;
    BOOL _didSeeCloudSetup;
    NSString *_lastSeenCloudProductVersion;
    BOOL _didSeeSyncSetup;
    BOOL _didSeeSyncSetup2;
    NSString *_lastSeenSyncProductVersion;
    NSString *_lastPreLoginTasksPerformedVersion;
    NSString *_lastCacheCleanupProductVersion;
    BOOL _lastCacheCleanupStillRunning;
    BOOL _skipFirstLoginOptimization;
    BOOL _runNonInteractive;
    BOOL _showKeychainSyncBuddyAtLogin;
    NSString *_lastPreLoginTasksPerformedBuild;
    NSString *_lastSeenBuddyBuildVersion;
    NSArray *_FDEUpsellCSLVUUIDs;
}

+ (id)keyPathsForValuesAffectingIsNewUserAccount;
+ (id)currentPerUserState;
@property(retain) NSArray *FDEUpsellCSLVUUIDs; // @synthesize FDEUpsellCSLVUUIDs=_FDEUpsellCSLVUUIDs;
@property(copy) NSString *lastSeenBuddyBuildVersion; // @synthesize lastSeenBuddyBuildVersion=_lastSeenBuddyBuildVersion;
@property BOOL showKeychainSyncBuddyAtLogin; // @synthesize showKeychainSyncBuddyAtLogin=_showKeychainSyncBuddyAtLogin;
@property BOOL runNonInteractive; // @synthesize runNonInteractive=_runNonInteractive;
@property BOOL lastCacheCleanupStillRunning; // @synthesize lastCacheCleanupStillRunning=_lastCacheCleanupStillRunning;
@property(copy) NSString *lastCacheCleanupProductVersion; // @synthesize lastCacheCleanupProductVersion=_lastCacheCleanupProductVersion;
@property BOOL skipFirstLoginOptimization; // @synthesize skipFirstLoginOptimization=_skipFirstLoginOptimization;
@property(copy) NSString *lastPreLoginTasksPerformedBuild; // @synthesize lastPreLoginTasksPerformedBuild=_lastPreLoginTasksPerformedBuild;
@property(copy) NSString *lastPreLoginTasksPerformedVersion; // @synthesize lastPreLoginTasksPerformedVersion=_lastPreLoginTasksPerformedVersion;
@property(copy) NSString *lastSeenSyncProductVersion; // @synthesize lastSeenSyncProductVersion=_lastSeenSyncProductVersion;
@property BOOL didSeeSyncSetup2; // @synthesize didSeeSyncSetup2=_didSeeSyncSetup2;
@property BOOL didSeeSyncSetup; // @synthesize didSeeSyncSetup=_didSeeSyncSetup;
@property(copy) NSString *lastSeenCloudProductVersion; // @synthesize lastSeenCloudProductVersion=_lastSeenCloudProductVersion;
@property BOOL didSeeCloudSetup; // @synthesize didSeeCloudSetup=_didSeeCloudSetup;
@property(retain) NSString *previousBuildVersion; // @synthesize previousBuildVersion=_previousBuildVersion;
@property(retain) NSString *previousSystemVersion; // @synthesize previousSystemVersion=_previousSystemVersion;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (void)_setArray:(id)arg1 forKey:(id)arg2;
- (BOOL)_boolForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (void)_loadFromDefaults;
- (BOOL)writeToDefaults;
@property(readonly) BOOL isNewUserAccount;
- (void)setPreviousSystemVersion:(id)arg1 buildVersion:(id)arg2;
- (long long)_compareSystemVersion:(id)arg1 with:(id)arg2;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

