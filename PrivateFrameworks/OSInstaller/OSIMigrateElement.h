//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

#import "MigrationProgressEventsListener.h"

@class NSArray, NSError, NSMutableArray, NSString;

@interface OSIMigrateElement : OSIInstallQueueElement <MigrationProgressEventsListener>
{
    NSString *_systemRoot;
    NSString *_archiveRoot;
    NSString *_leftOversPath;
    NSMutableArray *_engineFileWarnings;
    NSError *_engineFatalError;
    NSArray *_ignoredFilesInPreviousSystem;
    BOOL _engineIsRunning;
    BOOL _hasStartedMigration;
    BOOL _isServerDisk;
}

+ (BOOL)setupMigrationWithOptions:(id)arg1;
- (void)engineCompletedWithErrorsAndWarnings:(id)arg1;
- (void)engineMinutesRemaining:(id)arg1;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStarted;
- (BOOL)_cleanupPath:(id)arg1 preservePaths:(id)arg2 saveAllFiles:(BOOL)arg3 onSystem:(id)arg4 error:(id *)arg5 server:(BOOL)arg6;
- (void)_doCleanupOnArchiveReturningError:(id *)arg1 forServer:(BOOL)arg2 onSystem:(id)arg3;
- (BOOL)_createMacBuddyCookie;
- (BOOL)_deleteRegistrationCookie;
- (void)_saveReaperCacheForDebugging;
- (void)_mergeInstallHistory;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 isServer:(BOOL)arg2;

@end

