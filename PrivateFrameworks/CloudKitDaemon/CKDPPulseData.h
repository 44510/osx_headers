//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPDate, CKDPIdentifier;

@interface CKDPPulseData : PBCodable <NSCopying>
{
    long long _customState;
    long long _stateTTLMillis;
    CKDPDate *_lastCustom;
    CKDPDate *_lastEdited;
    CKDPDate *_lastInvisible;
    CKDPDate *_lastViewed;
    int _state;
    CKDPIdentifier *_user;
    struct {
        unsigned int customState:1;
        unsigned int stateTTLMillis:1;
        unsigned int state:1;
    } _has;
}

@property(retain, nonatomic) CKDPDate *lastInvisible; // @synthesize lastInvisible=_lastInvisible;
@property(retain, nonatomic) CKDPDate *lastCustom; // @synthesize lastCustom=_lastCustom;
@property(retain, nonatomic) CKDPDate *lastEdited; // @synthesize lastEdited=_lastEdited;
@property(retain, nonatomic) CKDPDate *lastViewed; // @synthesize lastViewed=_lastViewed;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) CKDPIdentifier *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLastInvisible;
@property(readonly, nonatomic) BOOL hasLastCustom;
@property(readonly, nonatomic) BOOL hasLastEdited;
@property(readonly, nonatomic) BOOL hasLastViewed;
@property(nonatomic) BOOL hasStateTTLMillis;
@property(nonatomic) long long stateTTLMillis; // @synthesize stateTTLMillis=_stateTTLMillis;
@property(nonatomic) BOOL hasCustomState;
@property(nonatomic) long long customState; // @synthesize customState=_customState;
@property(nonatomic) BOOL hasState;
@property(readonly, nonatomic) BOOL hasUser;

@end

