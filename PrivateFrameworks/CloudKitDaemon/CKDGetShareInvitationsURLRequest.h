//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDGetShareInvitationsURLRequest : CKDURLRequest
{
    BOOL _shouldGetReceived;
    BOOL _queryAllContainers;
    CDUnknownBlockType _shareInvitationFetchedBlock;
}

@property(nonatomic) BOOL queryAllContainers; // @synthesize queryAllContainers=_queryAllContainers;
@property(nonatomic) BOOL shouldGetReceived; // @synthesize shouldGetReceived=_shouldGetReceived;
@property(copy, nonatomic) CDUnknownBlockType shareInvitationFetchedBlock; // @synthesize shareInvitationFetchedBlock=_shareInvitationFetchedBlock;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithShouldGetReceived:(BOOL)arg1 queryAllContainers:(BOOL)arg2;

@end

