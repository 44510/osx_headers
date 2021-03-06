//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@interface NSProDial : NSControl
{
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
+ (Class)_proDialCellClass;
- (void)setSnapToMouse:(BOOL)arg1;
- (void)setMinValueAngle:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setConstraintUnit:(double)arg1;
- (double)minValueAngle;
- (double)minValue;
- (double)maxValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)fixCell;
- (double)constraintUnit;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (void)awakeFromNib;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end

