//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NVReportAProblemAvailabilityChecker : NSObject
{
}

+ (BOOL)shouldOfferNotificationsForPlace:(id)arg1 newPOI:(BOOL)arg2;
+ (BOOL)isFeatureVisible:(id)arg1;
+ (id)sharedChecker;
- (BOOL)isReportAProblemAvailableForType:(unsigned long long)arg1 withPlace:(id)arg2;
@property(readonly, nonatomic) NSArray *previousDirections;
- (BOOL)hasPreviousDirections;
@property(readonly, nonatomic) NSArray *previousSearchResults;
- (BOOL)hasPreviousSearchResults;
- (id)availableReportAProblemTypesFromInfoCard:(id)arg1;
- (id)availableReportAProblemTypesFromMapsMenu;
@property(readonly, nonatomic) NSArray *allReportAProblemTypeDescriptions;
- (id)GEOProblemTypesForRAPType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *allReportAProblemTypes;

@end

