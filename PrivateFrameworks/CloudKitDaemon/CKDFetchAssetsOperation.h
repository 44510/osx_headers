//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDMMCSItemGroupSetContext, NSMutableArray;

@interface CKDFetchAssetsOperation : CKDDatabaseOperation
{
    BOOL _shouldAutomaticallyRetryNetworkErrors;
    CDUnknownBlockType _progressBlock;
    NSMutableArray *_assetsToFetch;
    NSMutableArray *_assetsToRetry;
    CKDMMCSItemGroupSetContext *_MMCSContext;
}

+ (BOOL)_isTransientError:(id)arg1;
@property(retain) CKDMMCSItemGroupSetContext *MMCSContext; // @synthesize MMCSContext=_MMCSContext;
@property(retain, nonatomic) NSMutableArray *assetsToRetry; // @synthesize assetsToRetry=_assetsToRetry;
@property(retain, nonatomic) NSMutableArray *assetsToFetch; // @synthesize assetsToFetch=_assetsToFetch;
@property(nonatomic) BOOL shouldAutomaticallyRetryNetworkErrors; // @synthesize shouldAutomaticallyRetryNetworkErrors=_shouldAutomaticallyRetryNetworkErrors;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)main;
- (void)_handleError:(id)arg1 forItem:(id)arg2;
- (BOOL)_shouldRetryError:(id)arg1;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)cancel;
- (void)finishWithError:(id)arg1;
- (void)_fetchAssets;
- (void)_sendMMCSItemGetForGroupSet:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToFetch:(id)arg3;

@end

