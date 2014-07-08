//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPClientUIDOperation.h>

@class NSArray;

@interface IMAPClientUIDStoreOperation : IMAPClientUIDOperation
{
    NSArray *_flagsOrGmailLabels;
    BOOL _forGmailLabels;
    BOOL _add;
}

@property BOOL add; // @synthesize add=_add;
@property(readonly) BOOL forGmailLabels; // @synthesize forGmailLabels=_forGmailLabels;
- (void).cxx_destruct;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
@property(readonly, copy) NSArray *gmailLabels;
@property(readonly, copy) NSArray *serverFlags;
- (id)activityString;
- (id)commandTypeString;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 flags:(id)arg4;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 flags:(id)arg4;
- (void)_imapClientUIDStoreCommonInitForGmailLabels:(BOOL)arg1 add:(BOOL)arg2 flagsOrGmailLabels:(id)arg3;

@end

