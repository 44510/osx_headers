//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGraph.h"

@class NSArray;

@interface DPoints : DGraph
{
    NSArray *mAxes;
}

+ (id)pointsWithOperation:(id)arg1 rootOperation:(id)arg2 axes:(id)arg3;
- (id)axes;
- (id)insertGraphToView:(id)arg1 forParamValues:(id)arg2 withAttributes:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)paramEnumerator;
- (BOOL)useParamEnumerator;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 rootOperation:(id)arg2 axes:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
