//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileManagerDelegate.h"

@class MFLibraryUpgrader, NSFileManager, NSMutableDictionary, NSMutableSet, NSString;

@interface MFMailMigrator : NSObject <NSFileManagerDelegate>
{
    NSMutableDictionary *_lostItems;
    NSMutableSet *_nonFatalAttachmentErrorLibraryIDs;
    BOOL _isComplex;
    BOOL _isUsingAlternateDestination;
    BOOL _isTrackingCleanupProgress;
    NSFileManager *_fileManager;
    NSString *_supportDirectory;
    NSString *_destinationSupportDirectory;
    NSString *_tempSupportDirectoryV2;
    NSString *_supportDirectoryV2;
    NSString *_mailDataDirectoryV2;
    NSString *_migrationSuccessfulFilepath;
    NSString *_v1ItemsToMigrateFilepath;
    NSString *_logDirectory;
    NSString *_lostItemsFilepath;
    NSString *_lostAndFoundDirectory;
    MFLibraryUpgrader *_progressDelegate;
    unsigned long long _progressChunkSize;
    unsigned long long _messagesProgressCount;
    unsigned long long _v1CleanupCount;
    unsigned long long _emlxCountPreMigration;
    unsigned long long _emlxCountPostMigration;
    unsigned long long _lostAndFoundEmlxCount;
    unsigned long long _messageCountPreMigration;
}

+ (BOOL)path:(id)arg1 hasPrefixInArray:(id)arg2;
+ (BOOL)isMigrating;
+ (BOOL)migrateFromV1ToV2Layout:(id)arg1 isComplex:(BOOL)arg2 progressDelegate:(id)arg3;
@property(nonatomic) unsigned long long messageCountPreMigration; // @synthesize messageCountPreMigration=_messageCountPreMigration;
@property(nonatomic) unsigned long long lostAndFoundEmlxCount; // @synthesize lostAndFoundEmlxCount=_lostAndFoundEmlxCount;
@property(nonatomic) unsigned long long emlxCountPostMigration; // @synthesize emlxCountPostMigration=_emlxCountPostMigration;
@property(nonatomic) unsigned long long emlxCountPreMigration; // @synthesize emlxCountPreMigration=_emlxCountPreMigration;
@property(nonatomic) BOOL isTrackingCleanupProgress; // @synthesize isTrackingCleanupProgress=_isTrackingCleanupProgress;
@property(nonatomic) unsigned long long v1CleanupCount; // @synthesize v1CleanupCount=_v1CleanupCount;
@property(nonatomic) unsigned long long messagesProgressCount; // @synthesize messagesProgressCount=_messagesProgressCount;
@property(nonatomic) unsigned long long progressChunkSize; // @synthesize progressChunkSize=_progressChunkSize;
@property(readonly, nonatomic) MFLibraryUpgrader *progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(readonly, nonatomic) BOOL isUsingAlternateDestination; // @synthesize isUsingAlternateDestination=_isUsingAlternateDestination;
@property(readonly, nonatomic) BOOL isComplex; // @synthesize isComplex=_isComplex;
@property(readonly, copy, nonatomic) NSString *lostAndFoundDirectory; // @synthesize lostAndFoundDirectory=_lostAndFoundDirectory;
@property(readonly, copy, nonatomic) NSString *lostItemsFilepath; // @synthesize lostItemsFilepath=_lostItemsFilepath;
@property(readonly, copy, nonatomic) NSString *logDirectory; // @synthesize logDirectory=_logDirectory;
@property(readonly, copy, nonatomic) NSString *v1ItemsToMigrateFilepath; // @synthesize v1ItemsToMigrateFilepath=_v1ItemsToMigrateFilepath;
@property(readonly, copy, nonatomic) NSString *migrationSuccessfulFilepath; // @synthesize migrationSuccessfulFilepath=_migrationSuccessfulFilepath;
@property(readonly, copy, nonatomic) NSString *mailDataDirectoryV2; // @synthesize mailDataDirectoryV2=_mailDataDirectoryV2;
@property(readonly, copy, nonatomic) NSString *supportDirectoryV2; // @synthesize supportDirectoryV2=_supportDirectoryV2;
@property(readonly, copy, nonatomic) NSString *tempSupportDirectoryV2; // @synthesize tempSupportDirectoryV2=_tempSupportDirectoryV2;
@property(readonly, copy, nonatomic) NSString *destinationSupportDirectory; // @synthesize destinationSupportDirectory=_destinationSupportDirectory;
@property(readonly, copy, nonatomic) NSString *supportDirectory; // @synthesize supportDirectory=_supportDirectory;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (BOOL)_copyWithCompressionFromPath:(id)arg1 toPath:(id)arg2;
- (void)_savePlistFiles:(id)arg1 destinationPath:(id)arg2;
- (void)_saveSubpathsWithAttributesOfDirectoryAtPath:(id)arg1 destinationPath:(id)arg2 symbolicLinks:(id)arg3 mboxCacheFiles:(id)arg4 infoPlistFiles:(id)arg5 outEmlxCount:(unsigned long long *)arg6 outLostFoundEmlxCount:(unsigned long long *)arg7 shouldPersist:(BOOL)arg8;
- (void)_captureDiagnosticsForMigrationOutEmlxCount:(unsigned long long *)arg1 lostFoundEmlxCount:(unsigned long long *)arg2;
- (BOOL)_migrateFromV1ToV2Layout;
- (BOOL)_shouldIgnoreFilename:(id)arg1;
- (void)_migrateMailboxesFromDirectory:(id)arg1 toDirectory:(id)arg2 baseDirectory:(id)arg3 usingUUID:(id)arg4 mailboxCacheDictionary:(id)arg5 accountPrefix:(id)arg6;
- (id)_accountPrefixes;
- (id)_mailboxSuffixes;
- (id)_lostItemsForBaseDirectory:(id)arg1;
- (BOOL)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)_handleAttachmentsMigrationResult:(BOOL)arg1 error:(id)arg2 message:(id)arg3 libraryID:(long long)arg4;
- (id)_stringByAppendingV2MailboxSuffix:(id)arg1;
- (BOOL)_directoryExistsAtPath:(id)arg1;
- (BOOL)_string:(id)arg1 hasSuffixInSet:(id)arg2;
- (BOOL)_string:(id)arg1 hasPrefixInSet:(id)arg2;
- (id)_prefixOfString:(id)arg1 fromSet:(id)arg2;
- (void)_messageTraceLibraryData;
- (unsigned long long)_numberOfMessagesInDB;
- (unsigned long long)_numberOfEmlxFiles;
- (unsigned long long)_numberOfEmlxFilesInLostAndFound;
- (void)dealloc;
- (id)initWithDestinationPath:(id)arg1 isComplex:(BOOL)arg2 progressDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

