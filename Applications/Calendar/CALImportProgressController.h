//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSProgressIndicator, NSTextField;

@interface CALImportProgressController : NSWindowController
{
    NSTextField *messageTextField;
    NSProgressIndicator *progressIndicator;
    BOOL _shouldCancel;
    BOOL _allowsCancel;
    BOOL _hasStartedDeterminateProgress;
    struct _NSModalSession *_modalSession;
    BOOL _inModalSession;
}

- (void).cxx_destruct;
- (BOOL)allowsCancel;
- (void)setAllowsCancel:(BOOL)arg1;
- (BOOL)importerShouldCancel;
- (void)breatheNow;
- (double)progressMaximum;
- (void)setProgressMaximum:(double)arg1;
- (double)progressValue;
- (void)setProgressValue:(double)arg1;
- (void)dismiss;
- (void)showWithMessage:(id)arg1;
- (void)setAsIndeterminate;
- (void)_startModalLoop;
- (void)cancelClicked:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end

