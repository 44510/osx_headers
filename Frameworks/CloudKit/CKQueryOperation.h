//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSObject<OS_dispatch_queue>;

@interface CKQueryOperation : CKDatabaseOperation
{
    BOOL _shouldFetchAssetContent;
    BOOL _isFinishing;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    CKRecordZoneID *_zoneID;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCompletionBlock;
    NSArray *_results;
    CKQueryCursor *_resultsCursor;
    NSObject<OS_dispatch_queue> *_queryResultQueue;
}

@property(nonatomic) BOOL isFinishing; // @synthesize isFinishing=_isFinishing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryResultQueue; // @synthesize queryResultQueue=_queryResultQueue;
@property(nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionBlock; // @synthesize queryCompletionBlock=_queryCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) CKQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)init;

@end

