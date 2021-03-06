//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MigrationHiCloudViewController.h"

@class NSProgressIndicator, NSTextField, SMMigrationProgressViewController;

@interface MigrationProgressController : MigrationHiCloudViewController
{
    NSProgressIndicator *progressBar;
    NSTextField *currentItemTextField;
    NSTextField *timeRemainingTextField;
    SMMigrationProgressViewController *_progressViewController;
}

@property(retain) SMMigrationProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)engineCompletedWithErrorsAndWarnings:(id)arg1;
- (void)_deregisterObservers;
- (void)sizeErrorPanelDidEnd:(BOOL)arg1;
- (void)_displayFatalSizeErrorSheet;
- (void)_displaySizeErrorSheet;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)willBecomeVisible;
- (void)awakeFromNib;
- (id)init;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end

