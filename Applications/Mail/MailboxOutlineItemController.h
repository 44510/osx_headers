//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MailboxOutlineItemViewDelegate.h"
#import "MailboxTextFieldDelegate.h"

@class MailboxOutlineItemView, NSObject<MailboxOutlineItemControllerDelegate>, NSString;

@interface MailboxOutlineItemController : NSObject <MailboxTextFieldDelegate, MailboxOutlineItemViewDelegate>
{
    MailboxOutlineItemView *_view;
    id _item;
    NSObject<MailboxOutlineItemControllerDelegate> *_delegate;
}

@property __weak NSObject<MailboxOutlineItemControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mailboxOutlineItemViewShouldDisplayImage:(id)arg1;
- (void)mailboxTextFieldEndedEditingSession;
- (void)mailboxTextFieldBeganEditingSession;
- (long long)_alertState;
- (void)updateAlertState;
- (BOOL)_shouldShowBadge;
- (BOOL)_isEditing;
- (void)_updateBadgeAnimated:(BOOL)arg1;
- (void)_updateImage;
- (unsigned long long)_iconStyle;
- (unsigned long long)_iconSize;
- (void)_updateValuesForBasicSection;
- (void)_updateValuesForAccount;
- (void)_updateValuesForMailbox;
- (void)updateBadgeCountAnimated:(BOOL)arg1;
- (void)updateAllValues;
- (id)_sectionDisplayName;
- (id)_account;
- (id)_mailbox;
@property __weak id item;
- (void)_connectView:(id)arg1;
- (void)_disconnectView:(id)arg1;
@property __weak MailboxOutlineItemView *view;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

