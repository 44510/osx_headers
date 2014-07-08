//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSMutableSet, NSObject<OS_dispatch_queue>, NSPredicate;

@interface EKPredicateSearch : NSObject
{
    Class _entityClass;
    NSPredicate *_predicate;
    EKEventStore *_store;
    NSMutableSet *_currentResults;
    CDUnknownBlockType _completionCallback;
    CDUnknownBlockType _batchCallback;
    CDUnknownBlockType _cancelCallback;
    struct __MDQuery *_mdQuery;
    long long _previousQueryCount;
    BOOL _finished;
    BOOL _isEventQuery;
    NSObject<OS_dispatch_queue> *_queryQueue;
}

+ (id)searchWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;
@property(retain) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(copy) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy) CDUnknownBlockType batchCallback; // @synthesize batchCallback=_batchCallback;
@property(copy) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(retain) NSMutableSet *currentResults; // @synthesize currentResults=_currentResults;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)startWithCompletionCallback:(CDUnknownBlockType)arg1 batchCallback:(CDUnknownBlockType)arg2 cancelCallback:(CDUnknownBlockType)arg3 synchronous:(BOOL)arg4 isEventQuery:(BOOL)arg5;
- (id)_managedCalendarsForCalendarUIDs:(id)arg1 context:(id)arg2;
- (id)run;
- (void)_beginQueryWithMDQueryString:(id)arg1 onCalendars:(id)arg2 synchronous:(BOOL)arg3;
- (void)_startSpotlightQuery:(struct __MDQuery *)arg1 synchronous:(BOOL)arg2;
- (void)_endSpotlightQuery;
- (void)_finishQuery:(id)arg1;
- (void)_updateQuery:(id)arg1;
- (void)_processManagedObjectsIntoEKObjects:(id)arg1 finalResult:(BOOL)arg2;
- (void)dealloc;
- (id)initWithEntityClass:(Class)arg1 predicate:(id)arg2 store:(id)arg3;

@end
