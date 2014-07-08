//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface IMAVController : NSObject
{
    BOOL _blockMultipleIncomingInvitations;
    BOOL _blockOutgoingInvitationsDuringCall;
    BOOL _blockIncomingInvitationsDuringCall;
    NSMutableArray *_delegates;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL blockIncomingInvitationsDuringCall; // @synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall;
@property(nonatomic) BOOL blockOutgoingInvitationsDuringCall; // @synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall;
@property(nonatomic) BOOL blockMultipleIncomingInvitations; // @synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations;
@property(retain, nonatomic) NSMutableArray *_delegates; // @synthesize _delegates;
- (void)blockOnPendingVCInvitationsWithCapabilities:(long long)arg1;
- (void)_receivedPendingVCRequests;
- (void)_receivedPendingACRequests;
@property(readonly, nonatomic) BOOL _ready;
- (void)requestPendingACInvitations;
- (void)requestPendingVCInvitations;
@property(readonly, nonatomic) BOOL microphoneCapable;
@property(readonly, nonatomic) BOOL cameraCapable;
@property(readonly, nonatomic) BOOL hasRunningConference;
@property(readonly, nonatomic) BOOL hasActiveConference;
@property(readonly, nonatomic) BOOL microphoneConnected;
@property(readonly, nonatomic) BOOL cameraConnected;
- (void)updateActiveConference;
- (void)setHasActiveConference:(BOOL)arg1;
- (void)setHasRunningConference:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setIMAVCapabilities:(long long)arg1 toCaps:(long long)arg2;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (void)_dumpCaps;
@property(nonatomic) id <IMAVControllerDelegate> delegate;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
@property(readonly, retain, nonatomic) NSArray *delegates;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (id)init;
- (void)setupIMAVController;
- (void)_markSetup;
- (BOOL)_shouldRunACConferences;
- (BOOL)_shouldObserveConferences;
- (BOOL)_shouldRunConferences;

@end

