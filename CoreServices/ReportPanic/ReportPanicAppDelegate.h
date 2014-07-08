//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"

@class NSButton, NSString, NSTextFieldCell, NSURL, NSWindow;

@interface ReportPanicAppDelegate : NSObject <NSApplicationDelegate>
{
    BOOL canExit;
    BOOL askedToExit;
    BOOL displayFixUI;
    NSString *panicApplication;
    NSString *panicIdentifier;
    NSURL *panicURL;
    id <ReportPanicInterface> reportPanicService;
    NSButton *infoButton;
    NSString *panicArticleURLString;
    NSURL *panicArticleURL;
    NSWindow *_window;
    NSTextFieldCell *_panicHeader;
    NSTextFieldCell *_panicMessage;
    NSButton *_ignoreButton;
    NSButton *_actionButton;
}

@property __weak NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property __weak NSButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property __weak NSTextFieldCell *panicMessage; // @synthesize panicMessage=_panicMessage;
@property __weak NSTextFieldCell *panicHeader; // @synthesize panicHeader=_panicHeader;
@property NSWindow *window; // @synthesize window=_window;
@property(retain) NSURL *panicArticleURL; // @synthesize panicArticleURL;
@property(retain) NSString *panicArticleURLString; // @synthesize panicArticleURLString;
@property(retain) NSString *panicIdentifier; // @synthesize panicIdentifier;
@property(retain) NSString *panicApplication; // @synthesize panicApplication;
@property BOOL displayFixUI; // @synthesize displayFixUI;
@property BOOL askedToExit; // @synthesize askedToExit;
@property BOOL canExit; // @synthesize canExit;
@property __weak NSButton *infoButton; // @synthesize infoButton;
- (void).cxx_destruct;
- (void)restartAlert;
- (void)info:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)action:(id)arg1;
- (void)ignore:(id)arg1;
- (void)finished;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)recordRemoval;
- (void)clearPanicCount:(id)arg1;
- (BOOL)isKnownAndFrequentPanic;
- (BOOL)startReachabilityChecks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
