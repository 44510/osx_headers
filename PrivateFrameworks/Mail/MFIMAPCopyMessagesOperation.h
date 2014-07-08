//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFIMAPOperation.h>

@class NSPointerArray, NSString;

@interface MFIMAPCopyMessagesOperation : MFIMAPOperation
{
    NSPointerArray *_sourceUids;
    NSPointerArray *_destinationUids;
    NSString *_destinationMailbox;
}

@property(copy, nonatomic) NSString *destinationMailbox; // @synthesize destinationMailbox=_destinationMailbox;
@property(retain, nonatomic) NSPointerArray *destinationUids; // @synthesize destinationUids=_destinationUids;
@property(retain, nonatomic) NSPointerArray *sourceUids; // @synthesize sourceUids=_sourceUids;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)lastTemporaryUid;
- (unsigned int)firstTemporaryUid;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (BOOL)actsOnTemporaryUid:(unsigned int)arg1;
- (void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned int)arg3;
- (BOOL)getMessageId:(id *)arg1 andInternalDate:(id *)arg2 forDestinationUid:(unsigned int)arg3;
- (unsigned int)sourceUidForTemporaryUid:(unsigned int)arg1;
- (BOOL)isSourceOfTemporaryUid:(unsigned int)arg1;
- (void)serializeIntoData:(id)arg1;
- (void)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long *)arg2;
- (id)destinationUidStrings;
- (id)sourceUidStrings;
- (unsigned long long)approximateSize;
- (unsigned char)operationType;
- (id)initWithUidStringsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned int)arg4;

// Remaining properties
@property(nonatomic) BOOL usesRealUids;

@end
