//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@interface NSStepperCell : NSActionCell
{
    double _value;
    double _minValue;
    double _maxValue;
    double _increment;
    struct {
        unsigned int valueWraps:1;
        unsigned int autorepeat:1;
        unsigned int drawing:1;
        unsigned int stats1:1;
        unsigned int reserved:28;
    } _stFlags;
    unsigned int _reserved1;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

+ (BOOL)prefersTrackingUntilMouseUp;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_sendActionFrom:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (struct __CFDictionary *)_coreUIDrawOptionsWithView:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)_setAutorepeat:(BOOL)arg1;
@property BOOL autorepeat;
- (BOOL)_autorepeat;
- (void)_setValueWraps:(BOOL)arg1;
@property BOOL valueWraps;
- (BOOL)_valueWraps;
- (void)_setIncrement:(double)arg1;
@property double increment;
- (double)_increment;
- (void)_setMaxValue:(double)arg1;
@property double maxValue;
- (double)_maxValue;
- (void)_setMinValue:(double)arg1;
@property double minValue;
- (double)_minValue;
- (id)init;
- (void)_stepInUpDirection:(BOOL)arg1;
- (void)_doSingleStep:(BOOL)arg1 inView:(id)arg2;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityArrowScreenRect:(BOOL)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsDecrementButtonAttributeSettable;
- (id)accessibilityDecrementButtonAttribute;
- (BOOL)accessibilityIsIncrementButtonAttributeSettable;
- (id)accessibilityIncrementButtonAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (BOOL)_shouldHighlightCellWhenSelected;

@end

