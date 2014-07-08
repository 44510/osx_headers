//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter
{
    void *_formatter;
    BOOL _isForFoodEnergyUse;
}

@property(getter=isForFoodEnergyUse) BOOL forFoodEnergyUse; // @synthesize forFoodEnergyUse=_isForFoodEnergyUse;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromJoules:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)unitStringFromJoules:(double)arg1 usedUnit:(long long *)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;
- (id)init;
- (long long)targetUnitFromJoules:(double)arg1;

@end

