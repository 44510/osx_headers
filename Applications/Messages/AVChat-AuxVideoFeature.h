//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVChat.h"

@interface AVChat (AuxVideoFeature)
- (void)readyForAuxVideo;
- (BOOL)isAuxVideoRunningOrUnderNegotiation;
- (void)auxVideoEndedForPersonWithID:(id)arg1;
- (void)auxVideoBeganForPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 approvedAuxVideo:(BOOL)arg2;
- (BOOL)shouldConferenceAcceptAuxVideoFromUser:(id)arg1;
- (BOOL)allParticipantsUsingICE;
@end

