//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APLDaySource.h"

@class NSDate;

@interface APLListSource : APLDaySource
{
    NSDate *firstDay;
    NSDate *lastDay;
    NSDate *firstPageDay;
    NSDate *lastPageDay;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (id)entitiesOfType:(id)arg1;
- (id)availableDataSourceTypes;
- (void)nextPage;
- (BOOL)takeBackLastDataSourceOfType:(id)arg1;
- (id)nextDataSourceForType:(id)arg1 userInfo:(id *)arg2;
- (void)nextGroup;
- (void)reset;
- (BOOL)hasSomethingToLayout;
- (BOOL)hasMoreGroups;
- (unsigned long long)numberOfGroups;
- (id)init;

@end

