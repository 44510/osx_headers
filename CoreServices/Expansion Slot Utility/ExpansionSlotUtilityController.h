//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSImageView, NSMatrix, NSPanel, NSTextField;

@interface ExpansionSlotUtilityController : NSWindowController
{
    NSMatrix *mConfigMatrix;
    NSPanel *mAutoLaunchAlertPanel;
    NSImageView *mSlot1MaxLanesImageView;
    NSImageView *mSlot2MaxLanesImageView;
    NSImageView *mSlot3MaxLanesImageView;
    NSImageView *mSlot4MaxLanesImageView;
    NSImageView *mSlot1IndicatorImageView;
    NSImageView *mSlot2IndicatorImageView;
    NSImageView *mSlot3IndicatorImageView;
    NSImageView *mSlot4IndicatorImageView;
    NSTextField *mSlot1NameField;
    NSTextField *mSlot2NameField;
    NSTextField *mSlot3NameField;
    NSTextField *mSlot4NameField;
    NSTextField *mSlot1StatusField;
    NSTextField *mSlot2StatusField;
    NSTextField *mSlot3StatusField;
    NSTextField *mSlot4StatusField;
    NSImageView *mConfig0Slot1LanesImageView;
    NSImageView *mConfig0Slot2LanesImageView;
    NSImageView *mConfig0Slot3LanesImageView;
    NSImageView *mConfig0Slot4LanesImageView;
    NSImageView *mConfig1Slot1LanesImageView;
    NSImageView *mConfig1Slot2LanesImageView;
    NSImageView *mConfig1Slot3LanesImageView;
    NSImageView *mConfig1Slot4LanesImageView;
    NSImageView *mConfig2Slot1LanesImageView;
    NSImageView *mConfig2Slot2LanesImageView;
    NSImageView *mConfig2Slot3LanesImageView;
    NSImageView *mConfig2Slot4LanesImageView;
    NSImageView *mConfig3Slot1LanesImageView;
    NSImageView *mConfig3Slot2LanesImageView;
    NSImageView *mConfig3Slot3LanesImageView;
    NSImageView *mConfig3Slot4LanesImageView;
    NSImageView *mConfig0Slot1IndicatorImageView;
    NSImageView *mConfig0Slot2IndicatorImageView;
    NSImageView *mConfig0Slot3IndicatorImageView;
    NSImageView *mConfig0Slot4IndicatorImageView;
    NSImageView *mConfig1Slot1IndicatorImageView;
    NSImageView *mConfig1Slot2IndicatorImageView;
    NSImageView *mConfig1Slot3IndicatorImageView;
    NSImageView *mConfig1Slot4IndicatorImageView;
    NSImageView *mConfig2Slot1IndicatorImageView;
    NSImageView *mConfig2Slot2IndicatorImageView;
    NSImageView *mConfig2Slot3IndicatorImageView;
    NSImageView *mConfig2Slot4IndicatorImageView;
    NSImageView *mConfig3Slot1IndicatorImageView;
    NSImageView *mConfig3Slot2IndicatorImageView;
    NSImageView *mConfig3Slot3IndicatorImageView;
    NSImageView *mConfig3Slot4IndicatorImageView;
    unsigned char mCurrentPCIEConfig;
    unsigned char mSelectedPCIEConfig;
    BOOL mAutoLaunchDisabled;
    struct {
        unsigned short fVendorID;
        unsigned short fDeviceID;
        unsigned char fCurrentNumPCIELanes;
        unsigned char fMaxNumPCIELanes;
        unsigned int fBridge;
        unsigned int fPrimaryPCIDevice;
        unsigned int fRealPCIDevice;
    } mCardInfo[4];
    BOOL mCardInfoLoaded;
}

- (id)localizedNameForDevice:(unsigned int)arg1;
- (id)localizeString:(id)arg1;
- (id)blueCroppedImageForLaneWidth:(unsigned char)arg1;
- (id)yellowImageForLaneWidth:(unsigned char)arg1;
- (id)blueImageForLaneWidth:(unsigned char)arg1;
- (id)statusFieldForSlot:(unsigned char)arg1;
- (id)nameFieldForSlot:(unsigned char)arg1;
- (id)indicatorImageViewForSlot:(unsigned char)arg1;
- (id)laneWidthImageViewForSlot:(unsigned char)arg1;
- (void)updateConfigUIForSlot:(unsigned char)arg1 laneImageView:(id)arg2 indicatorImageView:(id)arg3 inConfig:(unsigned char)arg4;
- (void)updateStatusUIForSlot:(unsigned char)arg1;
- (void)autoLaunchPanelDone:(id)arg1;
- (void)quit:(id)arg1;
- (int)launchPCIELaneConfigTool:(id)arg1 authData:(id)arg2;
- (void)saveAndRestart:(id)arg1;
- (BOOL)configChanged;
- (BOOL)autoLaunchDisabled;
- (void)setAutoLaunchDisabled:(BOOL)arg1;
- (unsigned char)currentPCIEConfig;
- (void)setCurrentPCIEConfig:(unsigned char)arg1;
- (unsigned char)readCurrentConfig;
- (void)awakeFromNib;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)initWithWindow:(id)arg1;

@end

