//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData;

@interface CKDFetchRecordChangesOperation : CKDDatabaseOperation
{
    BOOL _shouldFetchAssetContents;
    CDUnknownBlockType _recordChangedBlock;
    CKServerChangeToken *_resultServerChangeToken;
    NSData *_resultClientChangeToken;
    long long _status;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    CKServerChangeToken *_clientChangeToken;
    NSArray *_desiredKeys;
    unsigned long long _resultsLimit;
    NSData *_resultClientChangeTokenData;
}

@property(retain, nonatomic) NSData *resultClientChangeTokenData; // @synthesize resultClientChangeTokenData=_resultClientChangeTokenData;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(nonatomic) BOOL shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(retain, nonatomic) CKServerChangeToken *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(retain, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSData *resultClientChangeToken; // @synthesize resultClientChangeToken=_resultClientChangeToken;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

