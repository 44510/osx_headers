//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSAlert, NSButton, NSMutableDictionary, NSProgressIndicator, NSScrollView, NSStackView, NSString, NSTextField, NSTextView, NSURL, NSView, NSWindow, RadarFiler, SpeedTracer;

@interface ProblemReportWindowController : NSWindowController
{
    NSTextField *_instructionsTextField;
    NSButton *_commentsDisclosureButton;
    NSTextView *_commentsTextView;
    NSTextField *_commentLengthWarningTextField;
    NSButton *_problemDetailsDisclosureButton;
    NSView *_problemDetailsView;
    NSTextView *_problemDetailsTextView;
    NSTextField *_statusTextField;
    NSProgressIndicator *_progressIndicator;
    NSButton *_defaultButton;
    NSButton *_alternateButton;
    NSView *_buttonsContainer;
    NSView *_commentsContainer;
    NSScrollView *_userComments;
    NSStackView *_stackView;
    NSWindow *_radarSheet;
    NSTextField *_radarOriginatorTextField;
    NSTextView *_radarCommentsTextView;
    NSButton *_radarCreateButton;
    NSMutableDictionary *_problemDictionary;
    NSURL *_problemReportURL;
    SpeedTracer *_speedTracer;
    RadarFiler *_radarFiler;
    BOOL _waitingForSpeedTracer;
    BOOL _waitingForRadarFiler;
    NSString *_localizedCommentsPlaceHolder;
    NSAlert *_diagnosticReportingOptInAlert;
    BOOL _isAppleInternal;
    BOOL _hasBeenAppleInternalRecently;
}

+ (void)removeProblemReportWindowControllerForURL:(id)arg1;
+ (id)problemReportWindowControllerForAppName:(id)arg1 andProblemType:(id)arg2;
+ (id)problemReportWindowControllerForURL:(id)arg1;
- (void)openRadar:(id)arg1;
- (void)createRadar:(id)arg1;
- (void)createDuplicateRadar:(id)arg1;
- (void)_duplicateWarningSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_displayRadarInfoSheet;
- (void)endRadarInfoSheet:(id)arg1;
- (void)_radarInfoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_fileRadarWithComments:(id)arg1 originator:(id)arg2;
- (void)radarFilerDidFinish:(id)arg1;
- (void)speedTracerDidFinish:(id)arg1;
- (void)_errorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)appleReachabilityChangedNotification:(id)arg1;
- (void)submitNow;
- (id)diagnosticReportingOptInAlert;
- (BOOL)shouldShowDiagnosticReportingOptInDialog;
- (void)showDiagnosticInformation:(id)arg1;
- (void)sendDiagnosticInformationToApple:(id)arg1;
- (void)dismissAlert:(id)arg1;
- (void)_handleDoNotAskAgainForAutoSubmitState:(BOOL)arg1;
- (void)reopen:(id)arg1;
- (void)sendToApple:(id)arg1;
- (void)save:(id)arg1;
- (void)saveProblemReportSystemProfile;
- (id)validatedComments;
- (void)saveProblemReportComments;
- (void)help:(id)arg1;
- (void)toggleDetailsDisclosure:(id)arg1;
- (void)toggleCommentsDisclosure:(id)arg1;
- (void)setDetailsViewIsDisclosed:(BOOL)arg1;
- (void)setCommentsViewIsDisclosed:(BOOL)arg1;
- (struct CGRect)_frameFittingScreen:(struct CGRect)arg1;
- (void)_withStackManipulation:(CDUnknownBlockType)arg1;
- (void)systemProfileChangedNotification:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)textDidChange:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateEnabledStateForRadarCreateButton;
- (void)_updateGUI;
- (void)_updateButtons;
- (void)_updateInstructions;
- (void)_updateStatus;
- (id)_attributedStringForURL:(id)arg1 linkText:(id)arg2;
- (id)displayName;
- (id)appName;
- (id)problemType;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithProblemReportURL:(id)arg1;

@end

