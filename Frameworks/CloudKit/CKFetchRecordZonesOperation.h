//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSError, NSMutableDictionary;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation
{
    BOOL _isFetchAllRecordZonesOperation;
    BOOL _ignorePCSFailures;
    NSArray *_recordZoneIDs;
    CDUnknownBlockType _fetchRecordZonesCompletionBlock;
    NSArray *_recordZones;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_recordZoneErrors;
    NSError *_fetchAllRecordZonesError;
}

+ (id)fetchAllRecordZonesOperation;
@property(nonatomic) BOOL ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) BOOL isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSError *fetchAllRecordZonesError; // @synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError;
@property(retain, nonatomic) NSMutableDictionary *recordZoneErrors; // @synthesize recordZoneErrors=_recordZoneErrors;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZonesCompletionBlock; // @synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordZoneIDs:(id)arg1;
- (id)init;

@end

