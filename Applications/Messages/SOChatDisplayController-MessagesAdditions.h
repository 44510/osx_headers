//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOChatDisplayController.h"

@class ChatController, IMTranscriptChatItem;

@interface SOChatDisplayController (MessagesAdditions)
- (BOOL)validateMenuItem:(id)arg1;
- (void)searchRecipientsWithSpotlight;
- (void)requestValidationFromRecipients;
- (void)showRecipientsBuddyProfile;
- (void)showRecipientsBuddyInfo;
- (void)showRecipientsInBuddyList;
- (void)addRecipientsToAddressBook;
- (void)showContactCardWithRect:(struct CGRect)arg1 inWindow:(id)arg2;
- (void)showRecipientsInAddressBook;
- (void)blockRecipientsAttachingWarningSheetToWindow:(id)arg1;
- (void)offerScreenSharingToRecipients;
- (void)requestScreenSharingFromRecipients;
- (void)inviteRecipientsToAudioChat;
- (void)inviteRecipientsToVideoChat;
- (void)addRecipientToBuddyList;
- (BOOL)displayPreviousSearchResult;
- (BOOL)displayNextSearchResult;
- (BOOL)displayLastSearchResult;
- (BOOL)displayFirstSearchResult;
- (void)resetHistoryNavigation;
- (BOOL)navigateToNextOutgoingMessage;
- (BOOL)navigateToPriorOutgoingMessage;
- (id)initWithLegacyMessagesState:(id)arg1;
@property(readonly, nonatomic) IMTranscriptChatItem *displayedSearchResult; // @dynamic displayedSearchResult;
@property(nonatomic) BOOL representsSearchResults; // @dynamic representsSearchResults;
@property(readonly, nonatomic) ChatController *chatController; // @dynamic chatController;
@end

