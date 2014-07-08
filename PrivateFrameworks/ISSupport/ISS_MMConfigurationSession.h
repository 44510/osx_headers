//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISS_MMTransactionGenerator.h"

@interface ISS_MMConfigurationSession : NSObject <ISS_MMTransactionGenerator>
{
    id _delegate;
    BOOL _use_synchronous;
    id _session_data;
}

+ (id)configurationSession;
- (void)finalize;
- (void)dealloc;
- (BOOL)isSynchronous;
- (void)setIsSynchronous:(BOOL)arg1;
- (id)transactionDelegate;
- (void)setTransactionDelegate:(id)arg1;
- (id)_dispatchRequest:(id)arg1 withPostHandler:(SEL)arg2 requiringResult:(BOOL)arg3;
- (id)_getConfigRequestPostHandler:(id)arg1;
- (id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2;
- (id)getDataAtPath:(id)arg1;
- (id)init;

@end

