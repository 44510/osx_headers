//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NODEIntegrator.h"

@interface NODEEulerIntegrator : NODEIntegrator
{
    double *mDeriv;
}

- (void)integrateStep:(double)arg1 fromTime:(double)arg2 state:(double *)arg3;
- (void)dispose;
- (void)create;

@end

