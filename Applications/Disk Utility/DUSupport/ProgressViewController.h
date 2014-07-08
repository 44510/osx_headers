//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ProgressViewProtocol.h"

@class NSBox, NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField, NSView;

@interface ProgressViewController : NSObject <ProgressViewProtocol>
{
    NSView *_view;
    NSView *_progressView;
    NSButton *_progressCancelButton;
    NSButton *_progressSkipButton;
    NSTextField *_progressInformationTextField;
    NSTextField *_progressMessageTextField;
    NSProgressIndicator *_progressProgressIndicator;
    NSView *_alertView;
    NSButton *_alertOKButton;
    NSButton *_alertCancelButton;
    NSTextField *_alertTitleTextField;
    NSTextField *_alertMessageTextField;
    NSImageView *_alertImageView;
    NSBox *_separator;
    BOOL _progressCancelPending;
    BOOL _progressSkipPending;
    SEL _progressCancelSelector;
    SEL _progressSkipSelector;
    BOOL _alertOKPending;
    BOOL _alertCancelPending;
    SEL _alertOKSelector;
    SEL _alertCancelSelector;
    BOOL _needsWarningOnQuit;
    BOOL _isAlertView;
    id _delegate;
    id _context;
    NSString *_cachedPrimaryText;
    NSString *_cachedSecondaryText;
}

+ (id)progressViewController;
- (void)startAnimation;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (id)attr;
- (void)invokeSelector:(SEL)arg1 withItem:(id)arg2;
- (void)skipOrCancelSelector:(id)arg1;
- (void)doAlertOK:(id)arg1;
- (void)doAlertCancel:(id)arg1;
- (void)doProgressSkip:(id)arg1;
- (void)doProgressCancel:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)setAlertCancelSelector:(SEL)arg1;
- (SEL)alertCancelSelector;
- (void)setAlertOKSelector:(SEL)arg1;
- (SEL)alertOKSelector;
- (void)setProgressCancelSelector:(SEL)arg1;
- (SEL)progressCancelSelector;
- (void)setProgressSkipSelector:(SEL)arg1;
- (SEL)progressSkipSelector;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)separator;
- (id)alertView;
- (id)progressView;
- (id)view;
- (void)displaySeparator:(BOOL)arg1;
- (void)setNeedsWarningOnQuit:(BOOL)arg1;
- (BOOL)needsWarningOnQuit;
- (void)setAlertOKPending:(BOOL)arg1;
- (BOOL)alertOKPending;
- (void)setAlertCancelPending:(BOOL)arg1;
- (BOOL)alertCancelPending;
- (void)setAlertTitleString:(id)arg1;
- (id)alertTitleString;
- (void)setAlertMessageString:(id)arg1;
- (id)alertMessageString;
- (void)setAlertOKButtonTitle:(id)arg1;
- (id)alertOKButtonTitle;
- (BOOL)alertOKEnabled;
- (void)setAlertOKEnabled:(BOOL)arg1;
- (void)setAlertCancelButtonTitle:(id)arg1;
- (id)alertCancelButtonTitle;
- (BOOL)alertCancelEnabled;
- (void)setAlertCancelEnabledLite:(BOOL)arg1;
- (void)setAlertCancelEnabled:(BOOL)arg1;
- (void)setAlertImage:(id)arg1;
- (void)showAlertViewWithSound:(BOOL)arg1 withDockBounce:(BOOL)arg2 withMakeKeyAndOrderFront:(BOOL)arg3;
- (void)showAlertView;
- (void)setProgressSkipPending:(BOOL)arg1;
- (BOOL)progressSkipPending;
- (void)setProgressCancelPending:(BOOL)arg1;
- (BOOL)progressCancelPending;
- (void)setProgressIsDeterminate:(BOOL)arg1;
- (BOOL)progressIsDeterminate;
- (void)setProgressPercentDone:(double)arg1;
- (double)progressPercentDone;
- (void)setProgressTertiaryText:(id)arg1;
- (void)setProgressSecondaryText:(id)arg1;
- (void)setProgressPrimaryText:(id)arg1;
- (id)progressTertiaryText;
- (id)progressSecondaryText;
- (id)progressPrimaryText;
- (void)setProgressSkipButtonTitle:(id)arg1;
- (id)progressSkipButtonTitle;
- (BOOL)progressSkipEnabled;
- (void)setProgressSkipEnabledLite:(BOOL)arg1;
- (void)setProgressSkipEnabled:(BOOL)arg1;
- (void)setProgressCancelButtonTitle:(id)arg1;
- (id)progressCancelButtonTitle;
- (BOOL)progressCancelEnabled;
- (void)setProgressCancelEnabledLite:(BOOL)arg1;
- (void)setProgressCancelEnabled:(BOOL)arg1;
- (void)showProgressView;

@end

