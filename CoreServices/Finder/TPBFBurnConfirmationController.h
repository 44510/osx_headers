//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSMenuDelegate.h"
#import "NSTextFieldDelegate.h"

@class NSImageView, NSString, TButton, TEditTextField, TPopUpButton, TSpacerView, TTextField;

@interface TPBFBurnConfirmationController : NSWindowController <NSMenuDelegate, NSTextFieldDelegate>
{
    NSImageView *_iconImageView;
    TTextField *_mainTextField;
    TTextField *_subTextField;
    TEditTextField *_discNameTextField;
    TPopUpButton *_burnSpeedPopup;
    TSpacerView *_saveBurnFolderSpacerView;
    TButton *_saveBurnFolderCheckBox;
    TEditTextField *_saveBurnFolderTextField;
    TButton *_burnButton;
    TButton *_cancelButton;
    TButton *_ejectButton;
    struct TFENode _pbfNode;
    unsigned long long _result;
    unsigned long long _requiredSize;
}

+ (_Bool)isRunning;
+ (unsigned long long)preferredBurnSpeedForMediaClass:(const struct TString *)arg1 withDefault:(unsigned long long)arg2;
+ (unsigned long long)runBurnConfirmationDialogForNode:(const struct TFENode *)arg1 withRequiredSize:(unsigned long long)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)setupBurnSpeedMenuFor:(const struct TBurningDevice *)arg1;
- (void)saveBurnPressed:(id)arg1;
- (void)burnPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)ejectPressed:(id)arg1;
- (unsigned long long)run;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithNode:(const struct TFENode *)arg1 requiredSize:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

