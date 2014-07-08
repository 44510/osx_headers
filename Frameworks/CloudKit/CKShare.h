//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKShareID, CKSharedItemID, NSArray, NSData, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface CKShare : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isKnownToServer;
    CKShareID *_shareID;
    CKSharedItemID *_sharedItemID;
    NSData *_protectionData;
    NSString *_protectionVersion;
    NSMutableArray *_existingParticipants;
    NSMapTable *_addedParticipantsToOutgoingInvitationsTable;
    NSMutableArray *_removedParticipants;
    NSMutableSet *_pendingServerParticipants;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableSet *pendingServerParticipants; // @synthesize pendingServerParticipants=_pendingServerParticipants;
@property(retain, nonatomic) NSMutableArray *removedParticipants; // @synthesize removedParticipants=_removedParticipants;
@property(retain, nonatomic) NSMapTable *addedParticipantsToOutgoingInvitationsTable; // @synthesize addedParticipantsToOutgoingInvitationsTable=_addedParticipantsToOutgoingInvitationsTable;
@property(retain, nonatomic) NSMutableArray *existingParticipants; // @synthesize existingParticipants=_existingParticipants;
@property(nonatomic) BOOL isKnownToServer; // @synthesize isKnownToServer=_isKnownToServer;
@property(retain, nonatomic) NSString *protectionVersion; // @synthesize protectionVersion=_protectionVersion;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(copy, nonatomic) CKSharedItemID *sharedItemID; // @synthesize sharedItemID=_sharedItemID;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateFromPendingServerParticipants;
- (void)_mergeServerParticipants:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allParticipants;
- (void)removeParticipant:(id)arg1;
- (id)addParticipantWithEmailAddress:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)addParticipantWithUserRecordID:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (id)_addParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2 invitationMessage:(id)arg3 invitationImageURL:(id)arg4;
- (id)_matchingParticipantWithUserRecordID:(id)arg1 emailAddress:(id)arg2;
- (void)_addParticipant:(id)arg1 invitationMessage:(id)arg2 invitationImageURL:(id)arg3;
- (long long)acceptanceStatusForParticipant:(id)arg1;
- (long long)participantListPermissionForParticipant:(id)arg1;
- (void)setParticipantListPermission:(long long)arg1 forParticipant:(id)arg2;
- (long long)itemPermissionForParticipant:(id)arg1;
- (void)setItemPermission:(long long)arg1 forParticipant:(id)arg2;
- (id)_knownParticipantEqualToParticipant:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItem:(id)arg1 error:(id *)arg2;
- (id)initWithItem:(id)arg1 shareName:(id)arg2 error:(id *)arg3;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 shareName:(id)arg2;
- (id)_initWithSharedItemID:(id)arg1 shareID:(id)arg2 error:(id *)arg3;
- (id)_initBare;
- (id)init;

@end

