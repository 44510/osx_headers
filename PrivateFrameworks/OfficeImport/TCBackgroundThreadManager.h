//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, TCMessageContext, TCProgressContext;

__attribute__((visibility("hidden")))
@interface TCBackgroundThreadManager : NSObject
{
    id <TCCancelDelegate> mCancelDelegate;
    BOOL mIsWaiting;
    unsigned long long mBlockCount;
    NSObject<OS_dispatch_queue> *mQueue;
    NSObject<OS_dispatch_group> *mGroup;
    NSObject<OS_dispatch_queue> *mProgressReportingQueue;
    TCMessageContext *mMessageContext;
    TCProgressContext *mProgressContext;
}

@property(retain) TCProgressContext *progressContext; // @synthesize progressContext=mProgressContext;
@property(retain) TCMessageContext *messageContext; // @synthesize messageContext=mMessageContext;
- (void)reportWarning:(struct TCTaggedMessageStructure *)arg1;
- (void)waitUntilComplete;
- (void)addASyncBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1;
@property(readonly) BOOL isCancelled;

@end

