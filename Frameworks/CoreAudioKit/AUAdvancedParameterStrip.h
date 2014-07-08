//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreAudioKit/AUNSFlippedView.h>

@class AUHistoryView, AUMeterView, AUNSFineSlider, AUParameterStripSizingManager, NSBundle, NSButton, NSImage, NSPopUpButton, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface AUAdvancedParameterStrip : AUNSFlippedView
{
    struct CAAUParameter *mAUP;
    struct AudioUnitParameterInfo mAUPI;
    NSBundle *mLocalizedStringBundle;
    struct AUListenerBase *mEventListener;
    NSString *mParameterName;
    NSTextField *mDisplayParameterName;
    NSTextField *mDisplayMinValue;
    NSTextField *mDisplayMaxValue;
    NSTextField *mDisplayUnit;
    AUNSFineSlider *mSlider;
    NSTextField *mTextInput;
    AUMeterView *mMeterView;
    AUHistoryView *mHistoryView;
    NSPopUpButton *mPopUpButton;
    NSButton *mBoolParamButton;
    BOOL mBoolParamIsWriteOnly;
    NSImage *mLEDImage[2];
    NSTextField *mStaticTextDisplay;
    NSString *mLastTextValue;
    NSImage *mGestureBackground;
    BOOL mParameterGestureIsOccurring;
    AUParameterStripSizingManager *sizingManager;
}

+ (void)setAppearanceOfTextField:(id)arg1 data:(id)arg2;
+ (id)boldFontForControlSize;
+ (id)fontForControlSize;
+ (id)getTextFieldWithBoldText:(id)arg1;
+ (id)getTextFieldWithString:(id)arg1 attributes:(id)arg2 width:(double)arg3;
+ (void)initTextAttributes;
@property AUParameterStripSizingManager *sizingManager; // @synthesize sizingManager;
- (id).cxx_construct;
- (void)setAppearanceData:(id)arg1;
- (double)requiredUnitsStringWidth;
- (double)requiredCurrentValueStringWidth;
- (long long)numDigitsForValue:(double)arg1 param:(const struct CAAUParameter *)arg2;
- (double)requiredMaxValueStringWidthDroppingTrailingZeros:(BOOL)arg1;
- (double)requiredMinValueStringWidthDroppingTrailingZeros:(BOOL)arg1;
- (double)requiredParamStringWidth;
- (void)updateColumns;
- (void)event:(const struct AudioUnitEvent *)arg1 occurredWithValue:(float)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)privParamDisplayValue:(float)arg1;
- (void)synchronizeWithAU;
- (unsigned int)historyRefreshRate;
- (BOOL)needsUpdates;
- (void)issueEndGesture;
- (void)issueBeginGesture;
- (void)privUIWasAdjusted:(id)arg1;
- (void)turnAutoresizingOn;
- (id)keyView;
- (BOOL)isExpert;
- (unsigned int)clumpID;
- (void)dealloc;
- (void)cleanup;
- (void)removeEventListener;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithAudioUnitParameter:(struct AudioUnitParameter)arg1 eventListener:(struct AUListenerBase *)arg2 width:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

