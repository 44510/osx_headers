//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCurve.h"

@class DDiffEq, DDiffEqSolver, GDiffEqVariable;

@interface GDiffEqCurve : GCurve
{
    DDiffEq *mDiffEq;
    DDiffEqSolver *mSolver;
    GDiffEqVariable *mDiffEqVariable;
}

+ (id)curveWithView:(id)arg1 definition:(id)arg2 paramValues:(id)arg3 diffEq:(id)arg4 attributes:(id)arg5;
+ (id)defaultAttributes;
- (id)diffEqResults;
- (id)diffEqVariable;
- (id)diffEq;
- (void)evaluate;
- (void)updateCurve;
- (void)updateCurveWithAction:(id)arg1;
- (void)systemAt:(double)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 definition:(id)arg2 paramValues:(id)arg3 diffEq:(id)arg4 attributes:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

