//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNChainedFutureQueue : NSObject
{
    NSMutableArray *_futures;
    id <ABFuture> _currentFuture;
}

- (id)description;
- (void)nts_setCurrentFuture:(id)arg1;
- (id)nts_currentFuture;
- (id)nts_dequeueRemainingFutures;
- (id)nts_dequeueFuture;
- (void)cancelCurrentAndRemainingFutures;
- (id)advanceToNextFuture;
- (void)dealloc;
- (id)initWithFutures:(id)arg1;

@end

