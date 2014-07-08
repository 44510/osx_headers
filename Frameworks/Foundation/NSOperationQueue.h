//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NSOperationQueue : NSObject
{
    id _private;
    void *_reserved;
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)__;
- (id)description;
- (void)waitUntilAllOperationsAreFinished;
- (void)cancelAllOperations;
@property(copy) NSString *name;
@property struct dispatch_queue_s *underlyingQueue;
@property long long qualityOfService;
- (void)setOvercommitsOperations:(BOOL)arg1;
- (BOOL)overcommitsOperations;
@property(getter=isSuspended) BOOL suspended;
@property long long maxConcurrentOperationCount;
@property(readonly) unsigned long long operationCount;
@property(readonly, copy) NSArray *operations;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

