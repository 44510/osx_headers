//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScriptableWindowController.h"

#import "NSWindowDelegate.h"

@class NSPasteboard, NSString, NSTextField, TClipView;

@interface TClipController : TScriptableWindowController <NSWindowDelegate>
{
    NSTextField *statusField;
    TClipView *clipView;
}

+ (id)keyPathsForValuesAffectingClipType;
+ (id)keyPathsForValuesAffectingStatusString;
@property(readonly, retain) NSString *clipType;
@property(readonly, retain) NSString *templateStatusString;
@property(readonly, retain) NSString *statusString;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)show;
@property(retain) NSPasteboard *pasteboard;
- (id)windowNibName;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

