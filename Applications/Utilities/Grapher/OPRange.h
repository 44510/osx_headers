//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPOperation.h"

#import "NVariableValue.h"

@interface OPRange : OPOperation <NVariableValue>
{
    double mCurrentValue;
}

- (id)partialDerivativeWithRespectTo:(id)arg1;
- (id)evaluate;
- (id)staticSimplified;
- (void)setCurrentValue:(double)arg1;
- (double)currentValue;
- (double)maxValue;
- (double)minValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

