//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPOperation.h"

#import "NVariableValue.h"
#import "OPPartialDerivable.h"

@class NSArray;

@interface OPCustom : OPOperation <OPPartialDerivable, NVariableValue>
{
    OPOperation *mOperation;
    OPOperation *mIndex;
    NSArray *mParams;
    unsigned long long mPartialDerivative;
    BOOL mUseCurrentValue;
    double mCurrentValue;
}

- (void)setCurrentValue:(double)arg1;
- (double)currentValue;
- (double)maxValue;
- (double)minValue;
- (id)evaluate;
- (BOOL)partialDerivate:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 index:(id)arg2 params:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

