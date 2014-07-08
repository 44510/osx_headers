//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCOperation.h>

#import "BRCOperationSubclass.h"

@class CKModifyRecordsOperation, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperation : BRCOperation <BRCOperationSubclass>
{
    float _cost;
    CKModifyRecordsOperation *_modifyOperation;
    CDUnknownBlockType _syncUpCompletionBlock;
}

+ (id)syncUpOperationForContainer:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long *)arg3;
+ (id)modifyRecordsOperationForContainer:(id)arg1 maxCost:(float)arg2 cost:(float *)arg3 retryAfter:(unsigned long long *)arg4;
@property(readonly, nonatomic) float cost; // @synthesize cost=_cost;
@property(copy, nonatomic) CDUnknownBlockType syncUpCompletionBlock; // @synthesize syncUpCompletionBlock=_syncUpCompletionBlock;
@property(readonly, nonatomic) CKModifyRecordsOperation *modifyOperation; // @synthesize modifyOperation=_modifyOperation;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithContainer:(id)arg1 cost:(float)arg2 modifyOperation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

