//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL, WBSHistoryVisit;

__attribute__((visibility("hidden")))
@interface WBSHistoryItem : NSObject
{
    NSString *_urlString;
    WBSHistoryVisit *_lastVisit;
    NSMutableSet *_visitsPendingWriteToDataStore;
    long long _databaseID;
    unsigned long long _visitCount;
    struct Vector<int, 0, WTF::CrashOnOverflow> _dailyVisitCounts;
    struct Vector<int, 0, WTF::CrashOnOverflow> _weeklyVisitCounts;
    NSMutableArray *_redirectSourceItems;
    NSMutableArray *_autocompleteTriggers;
    NSMutableArray *_visits;
    float _cachedTopSitesURLPenalty;
    float _cachedTopSitesVisitScore;
    NSURL *_url;
    NSString *_userVisibleURLString;
    double _lastTimeTopSitesScoreWasComputed;
}

+ (id)synchronizationQueue;
+ (void)initialize;
@property(nonatomic) double lastTimeTopSitesScoreWasComputed; // @synthesize lastTimeTopSitesScoreWasComputed=_lastTimeTopSitesScoreWasComputed;
@property(nonatomic) float cachedTopSitesVisitScore; // @synthesize cachedTopSitesVisitScore=_cachedTopSitesVisitScore;
@property(nonatomic) float cachedTopSitesURLPenalty; // @synthesize cachedTopSitesURLPenalty=_cachedTopSitesURLPenalty;
@property(readonly, nonatomic) NSArray *visits; // @synthesize visits=_visits;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (Vector_4bee0f08)_timesForVisits:(unsigned long long)arg1 toSynthesizeBetweenStartTime:(double)arg2 endTime:(double)arg3;
- (Vector_4bee0f08)_timesForSynthesizedVisitsPreceedingDailyAndWeeklyRange:(unsigned long long)arg1;
- (Vector_4bee0f08)_timesOfVisitsToSynthesizeFromDailyAndWeeklyCounts;
- (void)recordSynthesizedRedirectFrom:(id)arg1 to:(id)arg2;
- (void)recordExistingRedirectFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) NSData *autocompleteTriggersDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *weeklyVisitCountsDataOnSynchronizationQueue;
@property(readonly, nonatomic) NSData *dailyVisitCountsDataOnSynchronizationQueue;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
@property(readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
- (void)_removeVisitFromVisitCounts:(id)arg1;
- (void)removeVisits:(id)arg1 candidateLastVisit:(id)arg2;
- (void)wasRedirectedFrom:(id)arg1 to:(id)arg2;
- (void)_addExistingVisit:(id)arg1;
- (void)_addVisit:(id)arg1;
- (void)_wasVisitedOnSynchronizationQueue:(id)arg1;
- (void)wasVisited:(id)arg1;
- (void)mergeDataFromItem:(id)arg1;
- (BOOL)_addAutocompleteTriggerFromSynchronizationQueue:(id)arg1;
- (BOOL)addAutocompleteTrigger:(id)arg1;
- (id)_autocompleteTriggersFromSynchronizationQueue;
@property(readonly, nonatomic) NSArray *autocompleteTriggers;
- (void)_collapseDailyVisitsToWeekly;
- (void)_padDailyCountsForNewVisitAtTime:(double)arg1;
@property(readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property(readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
- (void)addRedirectSourceItemFromSynchronizationQueue:(id)arg1;
@property(readonly, nonatomic) NSArray *redirectSourceItems;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansionOnSynchronizationQueue;
@property(readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property(readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property(nonatomic) BOOL lastVisitWasFailure;
@property(readonly, nonatomic) const int *weeklyVisitCountsPtrOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long weeklyVisitCountsCountOnSynchronizationQueue;
@property(readonly, nonatomic) const int *dailyVisitCountsPtrOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long dailyVisitCountsCountOnSynchronizationQueue;
@property(readonly, nonatomic) unsigned long long visitCount;
@property(readonly, nonatomic) NSDate *lastVisitedDate;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property(readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property(readonly, nonatomic) NSString *simplifiedUserVisibleURLString;
@property(readonly, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
- (id)_urlOnSynchronizationQueue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *urlStringOnSynchronizationQueue;
@property(readonly, nonatomic) NSString *urlString;
@property(copy, nonatomic) NSString *title;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

