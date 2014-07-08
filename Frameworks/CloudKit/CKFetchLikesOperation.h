//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareID, NSArray, NSMutableDictionary;

@interface CKFetchLikesOperation : CKOperation
{
    NSArray *_itemIDs;
    CKShareID *_shareID;
    unsigned long long _resultsLimit;
    CDUnknownBlockType _fetchLikesCompletionBlock;
    NSMutableDictionary *_userIDsByItemID;
    NSMutableDictionary *_likeCountByItemID;
    NSMutableDictionary *_errorsByItemID;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByItemID; // @synthesize errorsByItemID=_errorsByItemID;
@property(retain, nonatomic) NSMutableDictionary *likeCountByItemID; // @synthesize likeCountByItemID=_likeCountByItemID;
@property(retain, nonatomic) NSMutableDictionary *userIDsByItemID; // @synthesize userIDsByItemID=_userIDsByItemID;
@property(copy, nonatomic) CDUnknownBlockType fetchLikesCompletionBlock; // @synthesize fetchLikesCompletionBlock=_fetchLikesCompletionBlock;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithItems:(id)arg1 inShareWithID:(id)arg2;

@end

