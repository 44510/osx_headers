//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICScannerFeatureRangeProps : NSObject
{
    double _currentValue;
    double _defaultValue;
    double _minValue;
    double _maxValue;
    double _stepSize;
}

@property double stepSize; // @synthesize stepSize=_stepSize;
@property double maxValue; // @synthesize maxValue=_maxValue;
@property double minValue; // @synthesize minValue=_minValue;
@property double defaultValue; // @synthesize defaultValue=_defaultValue;
@property double currentValue; // @synthesize currentValue=_currentValue;
- (double)getValidatedValue:(double)arg1;

@end

