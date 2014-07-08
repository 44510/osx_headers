//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TInfoWindowViewController.h"

@class TPrivsActionPopUpButtonController, TPrivsAuthButtonController, TPrivsIgnoreOwnershipCheckboxController, TPrivsMinusButtonController, TPrivsPlusButtonController, TPrivsSummaryTextController, TPrivsTableViewMainController, TSpacerView;

@interface TInfoWindowPermissionsViewController : TInfoWindowViewController
{
    TPrivsSummaryTextController *_youCanSummaryTextController;
    TSpacerView *_tableViewSpacerView;
    TPrivsTableViewMainController *_tableViewController;
    TSpacerView *_buttonsSpacerView;
    TPrivsPlusButtonController *_plusButtonController;
    TPrivsMinusButtonController *_minusButtonController;
    TPrivsActionPopUpButtonController *_actionPopUpButtonController;
    TPrivsAuthButtonController *_authButtonController;
    TSpacerView *_ignoreOwnershipSpacerView;
    TPrivsIgnoreOwnershipCheckboxController *_ignoreOwnershipCheckboxController;
}

+ (id)controller;
- (unsigned int)scriptingID;
- (void)targetNodesChanging;
- (void)loadValueControllers;
- (id)expandedPrefKey;
- (void)dealloc;

@end

