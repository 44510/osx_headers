//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BraillePrefs.h"

@class NSButton, NSMatrix, NSPopUpButton, NSSlider, NSTextField;

__attribute__((visibility("hidden")))
@interface BrailleLayoutPrefs : BraillePrefs
{
    NSTextField *_displayDescription;
    NSPopUpButton *_translationTablePopUp;
    NSButton *_showContractedCheckbox;
    NSButton *_showEightDotCheckbox;
    NSMatrix *_statusAlignmentRadio;
    NSButton *_showAlertMessagesCheckbox;
    NSSlider *_showAlertMessagesDurationSlider;
}

- (id)accessibilityAttributeValue:(id)arg1 sliderCell:(id)arg2;
- (void)_updateEightDotCheckbox;
- (void)_updateContractedCheckbox;
- (void)_handleFailedToLoadTableNotification:(id)arg1;
- (void)_setTableIdentifier:(id)arg1;
- (void)updateUI;
- (void)setAlertMessageDuration:(id)arg1;
- (void)setShowAlertMessages:(id)arg1;
- (void)setStatusAlignment:(id)arg1;
- (void)setUseEightDot:(id)arg1;
- (void)setUseContractions:(id)arg1;
- (void)setTranslationTable:(id)arg1;
- (void)handleBrailleEightDotModeChanged;
- (void)handleBrailleTableIdentifierChanged;
- (void)handleBrailleContractionModeChanged;
- (void)handleBrailleVirtualStatusAlignmentChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)helpAnchor;
- (void)dealloc;
- (void)awakeFromNib;

@end

