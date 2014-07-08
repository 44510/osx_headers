//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSConditionLock, NSData, SSHIPC_v2_Manager_base;

@interface SSHIPC_v2_Transaction : NSObject
{
    SSHIPC_v2_Manager_base *_manager;
    id _receivePList;
    id _sendPList;
    BOOL _haveHeaderData;
    BOOL _abort;
    unsigned int _sequence;
    unsigned char _mode;
    char _payloadType[4];
    unsigned int _payloadLength;
    unsigned short _version;
    NSConditionLock *_syncLock;
}

+ (void)abortAllWaitingTransactions;
+ (void)receivedResponseTransaction:(id)arg1;
+ (id)newSendTransactionWithPList:(id)arg1 sshManager:(id)arg2 expectsResponse:(BOOL)arg3;
+ (id)newWithManager:(id)arg1;
+ (id)new;
+ (void)setUseXMLPListType:(BOOL)arg1;
+ (BOOL)useXMLPListType;
@property(nonatomic) unsigned short version; // @synthesize version=_version;
@property(retain, nonatomic) NSConditionLock *syncLock; // @synthesize syncLock=_syncLock;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) id sendPList; // @synthesize sendPList=_sendPList;
@property(retain, nonatomic) id receivePList; // @synthesize receivePList=_receivePList;
@property(retain, nonatomic) SSHIPC_v2_Manager_base *manager; // @synthesize manager=_manager;
@property(nonatomic) BOOL haveHeaderData; // @synthesize haveHeaderData=_haveHeaderData;
- (id)description;
- (id)waitForResponse;
- (unsigned int)receivedBytes:(void *)arg1 length:(unsigned long long)arg2;
@property(retain, nonatomic) id response;
@property(readonly, retain, nonatomic) NSData *transactionData;
@property(readonly, nonatomic) unsigned long long plistFormat;
@property(readonly, nonatomic) BOOL isResponse;
@property(readonly, nonatomic) BOOL fullyReceived;
@property(readonly, nonatomic) BOOL expectsResponse;
- (void)abort;
- (void)dealloc;

@end

