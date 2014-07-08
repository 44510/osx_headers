//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSImageView, NSMutableArray, NSProgressIndicator, NSString, NSTextField, NSTextView, NSWindow;

@interface PBMigrationController : NSViewController
{
    NSString *_plistToRemove;
    NSMutableArray *_photosToRemove;
    NSMutableArray *_failedPhotos;
    BOOL _encounteredFileErrors;
    BOOL _encounteredPlistErrors;
    BOOL _migrationComplete;
    NSWindow *_window;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_titleText;
    NSImageView *_iconView;
    NSWindow *_errorWindow;
    NSTextView *_errorTextView;
}

@property(retain) NSTextView *errorTextView; // @synthesize errorTextView=_errorTextView;
@property(retain) NSWindow *errorWindow; // @synthesize errorWindow=_errorWindow;
@property(retain) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain) NSTextField *titleText; // @synthesize titleText=_titleText;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)presentUserWithMigration;
- (void)errorShowInFinder:(id)arg1;
- (void)errorOK:(id)arg1;
- (void)_migrationThread;
- (BOOL)migrationEncounteredErrors;
- (BOOL)shouldMigrate;
- (id)init;
- (void)migrationComplete;

@end

