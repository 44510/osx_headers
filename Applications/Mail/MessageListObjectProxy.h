//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMessage, MFCriterion, NSDictionary, NSImage, NSIndexSet, NSOrderedSet, NSString;

@interface MessageListObjectProxy : NSObject
{
    BOOL _showContactPhotos;
    BOOL _isOpen;
    BOOL _isVIP;
    BOOL _showRecipient;
    BOOL _isDeleted;
    unsigned int _flags;
    MCMessage *_message;
    NSString *_addressee;
    NSString *_dateString;
    NSString *_subject;
    NSDictionary *_unreadImages;
    NSDictionary *_replyImages;
    NSDictionary *_attachmentImages;
    NSImage *_statusImage;
    NSImage *_photo;
    unsigned long long _photoSize;
    NSString *_mailbox;
    NSString *_size;
    NSOrderedSet *_flagImages;
    NSString *_snippetString;
    unsigned long long _threadCount;
    MFCriterion *_mailboxCriterion;
    long long _backgroundStyle;
    NSIndexSet *_flagColors;
    unsigned long long _messageSize;
    NSString *_snippet;
    NSString *_toCcString;
}

+ (id)keyPathsForValuesAffectingFirstFlag;
+ (id)keyPathsForValuesAffectingAttachmentImage;
+ (id)keyPathsForValuesAffectingReplyAlternateImage;
+ (id)keyPathsForValuesAffectingReplyImage;
+ (id)keyPathsForValuesAffectingUnreadImage;
+ (void)_resetDateFormats:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *toCcString; // @synthesize toCcString=_toCcString;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long threadCount; // @synthesize threadCount=_threadCount;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *snippetString; // @synthesize snippetString=_snippetString;
@property(copy, nonatomic) NSOrderedSet *flagImages; // @synthesize flagImages=_flagImages;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *mailbox; // @synthesize mailbox=_mailbox;
@property(retain, nonatomic) NSImage *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) NSDictionary *attachmentImages; // @synthesize attachmentImages=_attachmentImages;
@property(retain, nonatomic) NSDictionary *replyImages; // @synthesize replyImages=_replyImages;
@property(retain, nonatomic) NSDictionary *unreadImages; // @synthesize unreadImages=_unreadImages;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(copy, nonatomic) NSString *addressee; // @synthesize addressee=_addressee;
@property(readonly, nonatomic) MCMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *firstFlag;
- (id)_iconsForFlags:(id)arg1;
@property(readonly, nonatomic) NSImage *attachmentImage;
@property(readonly, nonatomic) NSImage *replyAlternateImage;
@property(readonly, nonatomic) NSImage *replyImage;
@property(readonly, nonatomic) NSImage *unreadImage;
- (void)_updateFlagImages;
- (void)_updateSize;
- (void)_updateMailbox;
- (id)_relevantAddressesForMessage:(id)arg1;
- (id)_relevantAddresses;
- (id)_unknownSenderImage;
- (void)_updatePhoto;
- (void)_updateToCcString;
- (void)_updateThreadData;
- (void)_updateSnippet;
- (void)_updateStatusImage;
- (BOOL)_messageHasAttachments:(id)arg1;
- (void)_updateAttachmentImages;
- (void)_updateReplyImages;
- (id)_initializeUnreadImages;
- (void)_updateUnreadImages;
- (void)_updateIsVIP;
- (void)_displayNameChanged:(id)arg1;
- (void)_photoAvailable:(id)arg1;
- (void)_updateContactPhotoVisibilityFromDefaults;
- (void)_vipSendersChanged:(id)arg1;
- (void)_updateSubject;
- (void)_updateDate;
- (void)_updateAddressee;
@property(nonatomic) BOOL showContactPhotos;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(nonatomic) unsigned long long photoSize; // @synthesize photoSize=_photoSize;
@property(nonatomic) BOOL showRecipient; // @synthesize showRecipient=_showRecipient;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSIndexSet *flagColors; // @synthesize flagColors=_flagColors;
@property(nonatomic) BOOL isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) __weak MFCriterion *mailboxCriterion; // @synthesize mailboxCriterion=_mailboxCriterion;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
- (void)update;
- (id)_todayDateFormatter;
- (id)_defaultDateFormatter;
- (void)dealloc;
- (id)init;
- (id)initWithMessage:(id)arg1;

@end

