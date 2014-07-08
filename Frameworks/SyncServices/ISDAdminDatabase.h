//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SyncServices/ISDDatabase.h>

@class ISDDataManager, NSConditionLock, NSMutableArray, NSThread;

@interface ISDAdminDatabase : ISDDatabase
{
    struct sqlite3_stmt *_getAllClientsStatement;
    struct sqlite3_stmt *_insertClientStatement;
    struct sqlite3_stmt *_removeClientStatement;
    struct sqlite3_stmt *_getSyncGenerationStatement;
    struct sqlite3_stmt *_setSyncGenerationStatement;
    struct sqlite3_stmt *_getSyncStateStatement;
    struct sqlite3_stmt *_setSyncStateStatement;
    struct sqlite3_stmt *_removeSyncStateForClientStatement;
    struct sqlite3_stmt *_removeSyncStateForEntityStatement;
    struct sqlite3_stmt *_getEarliestGenerationsForEntitiesStatement;
    struct sqlite3_stmt *_getMostRecentSyncDatesForClientsStatement;
    struct sqlite3_stmt *_recordSyncModesStatement;
    struct sqlite3_stmt *_recordSyncPlanStatement;
    struct sqlite3_stmt *_getTableNamesStatement;
    struct sqlite3_stmt *_purgeSyncDetailStatement;
    struct sqlite3_stmt *_getSyncPlanBeforeDateStatement;
    struct sqlite3_stmt *_purgeClientSyncModesStatement;
    NSThread *_threadWithLock;
    NSConditionLock *_transactionLock;
    ISDDataManager *_dataManager;
    NSMutableArray *_dataObjectsToConfigureWithDataManager;
}

+ (BOOL)createDatabaseAtPath:(id)arg1;
- (void)purgeSyncPlanDetailBefore:(id)arg1;
- (void)recordSyncPlanInformation:(id)arg1;
- (int)expectedSyncMode:(id)arg1;
- (void)recordClientSyncModes:(id)arg1 forClient:(id)arg2 inSyncPlan:(id)arg3;
- (struct _EarliestSyncGenerationForEntityNamesMap *)earliestSyncGenerationMappings;
- (id)createSyncDatesForClientsEarlierThanDate:(id)arg1;
- (void)freeEarliestSyncGenerationsForEntityNamesMapping:(struct _EarliestSyncGenerationForEntityNamesMap *)arg1;
- (void)setSyncGeneration:(unsigned long long)arg1;
- (void)removeSyncStateForEntity:(id)arg1;
- (void)updateSyncState:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)updateClient:(id)arg1;
- (void)readClients:(id *)arg1 syncGeneration:(unsigned int *)arg2;
- (BOOL)_releaseAdminDBLockIfNecessary;
- (void)rollbackTransaction;
- (void)rollbackTransaction:(BOOL)arg1;
- (void)commitTransaction;
- (void)commitTransaction:(BOOL)arg1;
- (void)beginTransaction;
- (unsigned long long)executeSQLToFetchSyncGeneration;
- (void)executeSQLToUpdateSyncGeneration:(unsigned long long)arg1;
- (id)executeSQLToFetchClientsByIdentifier;
- (void)executeSQLToRemoveClient:(id)arg1;
- (void)executeSQLToUpdateOrInsertClient:(id)arg1;
- (id)executeSQLToFetchSyncStatesForClient:(id)arg1;
- (void)executeSQLToRemoveSyncStatesForEntity:(id)arg1;
- (void)executeSQLToRemoveSyncStatesForClient:(id)arg1;
- (void)executeSQLToUpdateOrInsertSyncState:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)closeDatabase;
- (void)finalizeStatements;
- (void)initializeIVars;
- (id)init;
- (id)initWithDatabaseAtPath:(id)arg1 dataManager:(id)arg2;
- (void)ensureRecentTablesPresent;

@end

