//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSString;

@interface CKDUpdateUserPresenceOperation : CKDOperation
{
    BOOL _isLurk;
    CDUnknownBlockType _updateCompletionBlock;
    CKShareID *_shareID;
    long long _status;
    long long _customStatusFlags;
    NSString *_lastETag;
    double _ttl;
}

@property(nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(nonatomic) BOOL isLurk; // @synthesize isLurk=_isLurk;
@property(retain, nonatomic) NSString *lastETag; // @synthesize lastETag=_lastETag;
@property(nonatomic) long long customStatusFlags; // @synthesize customStatusFlags=_customStatusFlags;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(copy, nonatomic) CDUnknownBlockType updateCompletionBlock; // @synthesize updateCompletionBlock=_updateCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleUserPresences:(id)arg1 etag:(id)arg2 response:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

