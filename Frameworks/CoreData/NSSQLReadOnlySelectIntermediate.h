//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLSelectIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate
{
    BOOL _onlyFetchesAggregates;
}

- (id)generateSQLStringInContext:(id)arg1;
- (BOOL)onlyFetchesAggregates;

@end

