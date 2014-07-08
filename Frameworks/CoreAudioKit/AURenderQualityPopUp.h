//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreAudioKit/AUCocoaPropertyControlBase.h>

@class NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface AURenderQualityPopUp : AUCocoaPropertyControlBase
{
    NSTextField *mTitle;
    NSPopUpButton *mPopUpButton;
}

+ (id)getTextFieldWithText:(id)arg1;
+ (BOOL)renderQualitySupportedForAU:(struct ComponentInstanceRecord *)arg1;
- (double)privControlLocation;
- (void)privUIWasAdjusted:(id)arg1;
- (void)synchronizeUI;
- (id)initWithFrame:(struct CGRect)arg1 au:(struct ComponentInstanceRecord *)arg2 listener:(struct AUListenerBase *)arg3 localizationBundle:(id)arg4;

@end

