//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSMatrixPlugin.h>

#import "_NSMultipleSelectionBinderPlugin.h"

@class NSString;

@interface _NSMultipleSelectionMatrixPlugin : _NSMatrixPlugin <_NSMultipleSelectionBinderPlugin>
{
    struct __multipleSelectionMatrixPluginFlags {
        unsigned int _testedMode:1;
        unsigned int _reservedMultipleSelectionMatrixPlugin:31;
    } _multipleSelectionMatrixPluginFlags;
    unsigned long long _mode;
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (id)shownValueInObject:(id)arg1;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (unsigned long long)allowedValueBindingMask;
- (void)connectionWasEstablished:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

