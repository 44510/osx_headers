//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class InstallerPane, InstallerSection, InstallerState, NSButton, NSMutableDictionary, NSString, NSWindow;

@protocol InstallerSectionController
- (InstallerPane *)activePane;
- (InstallerSection *)activeSection;
- (void)closeWindow:(id)arg1;
- (NSWindow *)window;
- (void)setNextDefault:(BOOL)arg1;
- (BOOL)gotoPane:(InstallerPane *)arg1;
- (BOOL)goBackToTargetSelect;
- (BOOL)gotoPreviousPane;
- (BOOL)gotoNextPane;
- (void)setPreviousTitle:(NSString *)arg1;
- (BOOL)previousEnabled;
- (void)setPreviousEnabled:(BOOL)arg1;
- (NSButton *)previousButton;
- (void)setPaneTitle:(NSString *)arg1;
- (void)setNextTitle:(NSString *)arg1;
- (BOOL)nextEnabled;
- (NSButton *)nextButton;
- (void)setNextEnabled:(BOOL)arg1;
- (InstallerState *)installerStateObject;
- (NSMutableDictionary *)sharedDictionary;
@end

