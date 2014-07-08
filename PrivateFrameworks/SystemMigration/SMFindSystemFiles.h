//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SMFindSystemFiles : NSObject
{
    NSString *_rootPath;
    NSArray *_prunePaths;
    NSArray *_systemReceipts;
    NSArray *_fallbackSystemPaths;
    NSDictionary *_exceptionsDictionary;
    BOOL _isCancelled;
}

+ (id)_parentDirectoriesOfPath:(id)arg1;
+ (BOOL)_set:(id)arg1 containsParentOfPath:(id)arg2;
+ (BOOL)_set:(id)arg1 containsChildOfPath:(id)arg2;
+ (id)_pathForPrefixComparison:(id)arg1;
+ (BOOL)_looksLikeBundleDirectory:(id)arg1;
+ (id)_systemReceiptsOnVolumeAtPath:(id)arg1;
+ (BOOL)_systemReceiptsSetIsSane:(id)arg1;
+ (id)systemPrintersPKGIDs;
+ (id)_systemExclusionPlistPath;
+ (BOOL)_shouldDeepSearch:(id)arg1;
+ (id)_deepSearchPaths;
+ (id)_searchChildrenOfPaths;
+ (id)_searchPaths;
- (void).cxx_destruct;
- (id)coalescedPathsForPackageGroup:(id)arg1 searchingPaths:(id)arg2 includingReceiptPaths:(BOOL)arg3;
- (id)systemPaths;
- (BOOL)_pathIsSane:(id)arg1;
- (id)_findSystemPaths;
- (void)_coalesceDeepSystemPaths:(id)arg1;
- (id)oldSystemReceiptsPaths:(id)arg1;
- (void)_coalescePathsWithPathEnumerator:(id)arg1 usingSystemSet:(id)arg2 nonSystemSet:(id)arg3 searchSet:(id)arg4 searchChildrenOfSet:(id)arg5;
- (BOOL)isCancelled;
- (void)cancel;
- (id)prunePaths;
- (void)addPrunePaths:(id)arg1;
- (id)_latestSystemReceiptDate;
- (id)systemReceipts;
- (id)initWithRootPath:(id)arg1 withFallbackFile:(id)arg2;
- (id)initWithRootPath:(id)arg1;
- (BOOL)_previousSystemsContainsUserData;
- (BOOL)_userDataInArchiveAtPath:(id)arg1;

@end

