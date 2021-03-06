//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMChatItemRules.h"

@class IMChat, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules>
{
    IMChat *_chat;
}

- (void)_invalidate;
- (id)_initWithChat:(id)arg1;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (BOOL)shouldShowRaiseMessageStatus;
- (id)chatItemForIMChatItem:(id)arg1;
- (id)testChatItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

