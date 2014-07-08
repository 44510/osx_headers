//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifySharesURLRequest : CKDURLRequest
{
    CDUnknownBlockType _shareModifiedBlock;
    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
    NSMutableDictionary *_shareIDByRequestID;
    NSMutableDictionary *_participantIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *participantIDByRequestID; // @synthesize participantIDByRequestID=_participantIDByRequestID;
@property(retain, nonatomic) NSMutableDictionary *shareIDByRequestID; // @synthesize shareIDByRequestID=_shareIDByRequestID;
@property(retain, nonatomic) NSArray *shareIDsToDelete; // @synthesize shareIDsToDelete=_shareIDsToDelete;
@property(retain, nonatomic) NSArray *sharesToSave; // @synthesize sharesToSave=_sharesToSave;
@property(copy, nonatomic) CDUnknownBlockType shareModifiedBlock; // @synthesize shareModifiedBlock=_shareModifiedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithSharesToSave:(id)arg1 shareIDsToDelete:(id)arg2;

@end

