//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAPGateway, NSArray, NSMutableArray, NSString;

@interface IMAPMailbox : NSObject
{
    id <IMAPMailboxDelegate> _delegate;
    IMAPGateway *_selectedGateway;
    unsigned int _uidValidity;
    unsigned long long _exists;
    unsigned int _permanentFlags;
    BOOL _hasNewResponses;
    unsigned long long _allegedHighestModificationSequence;
    unsigned long long _computedHighestModificationSequence;
    BOOL _allegedHighestModificationSequenceHasBeenInitialized;
    BOOL _computedHighestModificationSequenceHasBeenInitialized;
    BOOL _readOnly;
    BOOL _uidNotSticky;
    BOOL _supportsModificationSequences;
    unsigned int _uidNext;
    unsigned int _unseenCount;
    id <MCMailbox> _mailbox;
    NSString *_referenceName;
    NSArray *_quotaRoots;
    NSMutableArray *_unprocessedResponses;
    CDStruct_d3e19d9e _quotaUsage;
}

+ (BOOL)automaticallyNotifiesObserversOfQuotaUsage;
+ (BOOL)automaticallyNotifiesObserversOfAllegedHighestModificationSequence;
+ (BOOL)automaticallyNotifiesObserversOfExists;
@property(retain, nonatomic) NSMutableArray *unprocessedResponses; // @synthesize unprocessedResponses=_unprocessedResponses;
@property BOOL supportsModificationSequences; // @synthesize supportsModificationSequences=_supportsModificationSequences;
@property unsigned int unseenCount; // @synthesize unseenCount=_unseenCount;
@property unsigned int uidNext; // @synthesize uidNext=_uidNext;
@property CDStruct_d3e19d9e quotaUsage; // @synthesize quotaUsage=_quotaUsage;
@property(retain) NSArray *quotaRoots; // @synthesize quotaRoots=_quotaRoots;
@property BOOL uidNotSticky; // @synthesize uidNotSticky=_uidNotSticky;
@property BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(copy) NSString *referenceName; // @synthesize referenceName=_referenceName;
@property(retain) id <MCMailbox> mailbox; // @synthesize mailbox=_mailbox;
- (void).cxx_destruct;
- (id)description;
- (id)removeResponse;
- (void)addResponse:(id)arg1;
@property(nonatomic) unsigned int permanentFlags;
- (void)setTotalSize:(unsigned long long)arg1 forQuotaMessageCount:(long long)arg2;
@property unsigned long long computedHighestModificationSequence;
@property unsigned long long allegedHighestModificationSequence;
@property BOOL hasNewResponses;
@property unsigned int uidValidity;
@property unsigned long long exists;
- (void)setExists:(unsigned long long)arg1 fromIDLE:(BOOL)arg2;
@property(retain) IMAPGateway *selectedGateway;
- (void)clearDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)initWithMailboxName:(id)arg1;
- (void)dealloc;

@end

