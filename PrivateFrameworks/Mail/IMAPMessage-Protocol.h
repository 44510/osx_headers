//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol IMAPMessage <NSObject>
- (NSString *)mailboxName;
- (NSDate *)dateReceived;
- (NSString *)subject;
- (unsigned long long)messageSize;
- (CDStruct_07ba05d6)remoteFlags;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (BOOL)hasTemporaryUid;
- (void)setPartsHaveBeenCached:(BOOL)arg1;
- (BOOL)partsHaveBeenCached;
- (void)setIsPartial:(BOOL)arg1;
- (BOOL)isPartial;
- (NSString *)messageID;
- (void)setUid:(unsigned int)arg1;
- (unsigned int)uid;
@end

