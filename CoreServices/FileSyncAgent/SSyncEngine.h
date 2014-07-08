//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSyncEngineCallbacks.h"

@class LogFormatter, NSArray, NSDate, NSDictionary, NSException, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, SSyncConflictList, SSyncExceptionList, SSyncSet, SULogFile, SULogFileCollection;

@interface SSyncEngine : NSObject <SSyncEngineCallbacks>
{
    NSArray *_options;
    unsigned long long _optionsCount;
    unsigned long long _optionsIndex;
    NSDictionary *_currentOptions;
    unsigned short _exclusionInclusionMask;
    NSMutableSet *_waitingPeers;
    NSMutableArray *_dirsToCheck;
    NSString *_currentDirPath;
    BOOL _automaticSync;
    BOOL _abort;
    double _lastStatusCallbackTime;
    NSMutableArray *_syncPassesStatus;
    SULogFileCollection *_logCollection;
    SULogFile *_engineLog;
    LogFormatter *_lf;
    BOOL _archiveLogCollection;
    BOOL _printJobGenerationDetails;
    BOOL _useSeparateEngineLog;
    BOOL _suspended;
    NSMutableSet *_validPeers;
    NSArray *_compWinners;
    NSArray *_tiedWinners;
    NSArray *_losers;
    NSMutableArray *_realWinners;
    NSMutableSet *_allWinners;
    NSMutableSet *_excluded;
    NSMutableSet *_missing;
    BOOL _haveFile;
    BOOL _haveDir;
    BOOL _havePkg;
    BOOL _nodeTypeConflict;
    NSMutableArray *_accumulatedJobs;
    NSThread *_thread;
    SSyncSet *_syncSet;
    NSMutableArray *_syncingPeers;
    NSMutableArray *_finishedPeers;
    int _state;
    unsigned long long _totalSyncBytes;
    unsigned long long _completedSyncBytes;
    unsigned int _totalSyncItems;
    unsigned int _completedSyncItems;
    NSException *_firstSyncException;
    BOOL _compareAttributes;
    BOOL _returnNewVVIfNil;
    unsigned long long _conflictsGeneratedCount;
    unsigned long long _conflictsResolvedCount;
    unsigned long long _exceptionsGeneratedCount;
    SSyncConflictList *_syncConflicts;
    NSMutableSet *_syncConflictsThisPass;
    SSyncExceptionList *_syncExceptions;
    double _lastSentExceptions;
    NSDate *_syncTimeForStatus;
    NSString *_currentItemPath;
    double _totalPkgGenTime;
    int _uniqueStoreIDsVersion;
    NSMutableDictionary *_uniqueStoreIDs;
    int _vvrtBasedOnUniqueStoreIDsVersion;
    NSDictionary *_vvReductionTable;
    unsigned long long _histSyncCount;
    unsigned long long _lastSyncCount;
    BOOL _lastSyncIncludedMe;
}

+ (id)detachNewSyncEngineForSyncSetRef:(id)arg1 isAutomatic:(BOOL)arg2 options:(id)arg3;
@property(retain, nonatomic) NSDictionary *versionVectorReductionTable; // @synthesize versionVectorReductionTable=_vvReductionTable;
@property(nonatomic) unsigned int totalSyncItems; // @synthesize totalSyncItems=_totalSyncItems;
@property(nonatomic) unsigned long long totalSyncBytes; // @synthesize totalSyncBytes=_totalSyncBytes;
@property(nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSDate *syncTimeForStatus; // @synthesize syncTimeForStatus=_syncTimeForStatus;
@property(retain, nonatomic) SSyncSet *syncSet; // @synthesize syncSet=_syncSet;
@property(retain, nonatomic) NSMutableArray *syncPassesStatus; // @synthesize syncPassesStatus=_syncPassesStatus;
@property(retain, nonatomic) NSMutableArray *syncingPeers; // @synthesize syncingPeers=_syncingPeers;
@property(retain, nonatomic) SSyncExceptionList *syncExceptions; // @synthesize syncExceptions=_syncExceptions;
@property(retain, nonatomic) NSMutableSet *syncConflictsThisPass; // @synthesize syncConflictsThisPass=_syncConflictsThisPass;
@property(retain, nonatomic) SSyncConflictList *syncConflicts; // @synthesize syncConflicts=_syncConflicts;
@property(nonatomic) BOOL suspended; // @synthesize suspended=_suspended;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) BOOL returnNewVVIfNil; // @synthesize returnNewVVIfNil=_returnNewVVIfNil;
@property(readonly, nonatomic) unsigned long long optionsIndex; // @synthesize optionsIndex=_optionsIndex;
@property(readonly, nonatomic) unsigned long long optionsCount; // @synthesize optionsCount=_optionsCount;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(nonatomic) double lastSentExceptions; // @synthesize lastSentExceptions=_lastSentExceptions;
@property(retain, nonatomic) NSException *firstSyncException; // @synthesize firstSyncException=_firstSyncException;
@property(retain, nonatomic) NSMutableArray *finishedPeers; // @synthesize finishedPeers=_finishedPeers;
@property(readonly, nonatomic) SULogFileCollection *engineLogCollection; // @synthesize engineLogCollection=_logCollection;
@property(nonatomic) SULogFile *engineLog; // @synthesize engineLog=_engineLog;
@property(nonatomic) unsigned int completedSyncItems; // @synthesize completedSyncItems=_completedSyncItems;
@property(nonatomic) unsigned long long completedSyncBytes; // @synthesize completedSyncBytes=_completedSyncBytes;
@property(nonatomic) BOOL compareAttributes; // @synthesize compareAttributes=_compareAttributes;
@property(nonatomic) BOOL automaticSync; // @synthesize automaticSync=_automaticSync;
- (void)_waitForPeers:(id)arg1;
- (void)_updateStoreSyncHistorySyncDuration:(double)arg1;
- (void)_updatePreferences;
- (void)_syncCore;
- (void)threadMain_SyncEngine_sync:(id)arg1;
- (void)_statusCallbackTimerFired:(id)arg1;
- (void)_sendThrottledStatusCallback;
- (void)_sendStatusCallback;
- (void)_printStatus;
- (id)_pndForPeerRef:(id)arg1;
- (id)_pndForPeer:(id)arg1;
- (void)_peerUnableToSync:(id)arg1 reason:(id)arg2;
- (void)_peerReadyToSync:(id)arg1 storeMOC:(id)arg2 oldPeer:(id)arg3;
- (void)_matchNewFiles;
- (void)_logSyncHistory;
- (id)_handleConflict;
- (void)_generateSyncJobsAtPath:(id)arg1;
- (void)_generateSyncJobs;
- (void)_generatePackageSubjobsWithWinner:(id)arg1 loserStates:(id)arg2;
- (void)_generateMoveJobs;
- (void)_generateChildJobs;
- (void)_dumpLogFormatter:(id)arg1 toSyncSpecialLog:(id)arg2;
- (BOOL)_dirsContentsDiffer:(id)arg1;
- (void)_comparePeerNodes;
- (void)_commitTreesToDiskForce:(BOOL)arg1;
- (BOOL)_applyOptionsAtIndex:(unsigned long long)arg1;
- (BOOL)_applyMoveHistory:(id)arg1 forPND:(id)arg2 targetSrcNodeHint:(id)arg3 originatingPND:(id)arg4 logStr:(id *)arg5;
- (id)_initWithSFSyncSetRef:(id)arg1;
- (void)unableToSync:(id)arg1 reason:(id)arg2;
- (void)reportSuccessForJob:(id)arg1;
- (void)reportException:(id)arg1 forNode:(id)arg2;
- (void)reportException:(id)arg1 forJob:(id)arg2;
- (void)readyToSync:(id)arg1 storeManagedObjectContext:(id)arg2 oldPeer:(id)arg3;
- (void)peerFinishedProcessingJobs:(id)arg1;
- (void)peer:(id)arg1 connectedToStore:(id)arg2;
- (void)finishedProcessingJob:(id)arg1;
- (unsigned long long)readyJobsCount;
- (id)readyJobs;
- (unsigned long long)blockedJobsCount;
- (id)blockedJobs;
- (unsigned long long)allJobsCount;
- (id)allJobs;
@property(retain, nonatomic) NSString *currentItemPath;
@property(readonly, retain, nonatomic) NSMutableArray *accumulatedJobs;
- (void)abort;
@property(readonly, nonatomic) BOOL runningOnSyncThread;
- (void)dealloc;

@end

