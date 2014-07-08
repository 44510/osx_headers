//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKServerChangeToken;

@interface CKDFetchNotificationChangesOperation : CKDOperation
{
    BOOL _moreComing;
    CDUnknownBlockType _notificationChangedBlock;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    CKServerChangeToken *_resultServerChangeToken;
}

@property(nonatomic) BOOL moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_handleFetchChangesRequestFinished:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

