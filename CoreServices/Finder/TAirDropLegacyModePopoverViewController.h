//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSBox, NSString, TAirDropDiscoveryController, TButton, TTextField;

@interface TAirDropLegacyModePopoverViewController : TViewController
{
    struct TNSRef<TAirDropDiscoveryController *> _discoveryController;
    struct TKeyValueObserver _legacyModeEnabledObserver;
    struct TKeyValueObserver _legacyMachineObserver;
    struct TNSRef<TPopoverController *> _popoverController;
    TTextField *_mainMessageText;
    NSBox *_separatorView;
    TButton *_enableLegacyCheckbox;
    TTextField *_subMessageText;
    double _topMargin;
    double _bottomMargin;
}

+ (id)keyPathsForValuesAffectingIsLegacyModeSettable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayout;
@property(readonly, nonatomic) _Bool shouldHideSubmessageText; // @dynamic shouldHideSubmessageText;
@property(readonly, retain, nonatomic) NSString *messageText; // @dynamic messageText;
@property(nonatomic, getter=isLegacyModeEnabled) _Bool legacyModeEnabled; // @dynamic legacyModeEnabled;
@property(readonly, nonatomic) _Bool isLegacyModeSettable; // @dynamic isLegacyModeSettable;
@property(readonly, nonatomic) _Bool isLegacyMachine;
- (void)setPopoverController:(id)arg1;
@property(readonly) TAirDropDiscoveryController *discoveryController;
- (id)nibName;
- (void)viewLoaded;
- (void)initCommon;

@end

