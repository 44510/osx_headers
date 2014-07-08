//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "InstallerSection.h"

@class IFDCustomizationController, InstallerPane, NSButton;

@interface PackageSelectionPage : InstallerSection
{
    InstallerPane *uiStandardInstallPane;
    InstallerPane *uiCustomInstallPane;
    NSButton *uiStandardInstallButton;
    InstallerPane *_currentlyVisiblePane;
    IFDCustomizationController *_customizationController;
}

- (void)iaToggleInstallType:(id)arg1;
- (id)lastPane;
- (id)firstPane;
- (void)warningSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)willExitPane:(id)arg1 inDirection:(long long)arg2;
- (BOOL)shouldExitPane:(id)arg1 inDirection:(long long)arg2;
- (BOOL)_shouldAllowInstall;
- (void)willEnterPane:(id)arg1 inDirection:(long long)arg2;
- (void)sheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)ctrl;
- (void)didLoadMainNib;

@end

