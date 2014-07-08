//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMCore/IMTranscriptChatItem.h>

#import "IMMessageChatItem.h"

@class IMHandle, IMMessage, NSDate, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>
{
}

@property(readonly, retain, nonatomic) IMHandle *sender;
@property(readonly, retain, nonatomic) NSDate *time;
@property(readonly, nonatomic) BOOL failed;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, retain, nonatomic) IMMessage *message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

