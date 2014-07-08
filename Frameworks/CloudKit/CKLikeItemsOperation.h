//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareID, NSArray, NSMutableArray, NSMutableDictionary;

@interface CKLikeItemsOperation : CKOperation
{
    CKShareID *_shareID;
    CDUnknownBlockType _likeItemsCompletionBlock;
    NSMutableDictionary *_itemsToLikeByID;
    NSMutableDictionary *_itemsToUnlikeByID;
    NSMutableArray *_likedItems;
    NSMutableArray *_unlikedItems;
    NSMutableDictionary *_errorsByItemID;
}

@property(retain, nonatomic) NSMutableDictionary *errorsByItemID; // @synthesize errorsByItemID=_errorsByItemID;
@property(retain, nonatomic) NSMutableArray *unlikedItems; // @synthesize unlikedItems=_unlikedItems;
@property(retain, nonatomic) NSMutableArray *likedItems; // @synthesize likedItems=_likedItems;
@property(retain, nonatomic) NSMutableDictionary *itemsToUnlikeByID; // @synthesize itemsToUnlikeByID=_itemsToUnlikeByID;
@property(retain, nonatomic) NSMutableDictionary *itemsToLikeByID; // @synthesize itemsToLikeByID=_itemsToLikeByID;
@property(copy, nonatomic) CDUnknownBlockType likeItemsCompletionBlock; // @synthesize likeItemsCompletionBlock=_likeItemsCompletionBlock;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) NSArray *itemsToUnlike;
@property(copy, nonatomic) NSArray *itemsToLike;
- (id)initWithItemsToLike:(id)arg1 itemsToUnlike:(id)arg2 inShareWithID:(id)arg3;

@end

