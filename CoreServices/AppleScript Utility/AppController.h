//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor;

@interface AppController : NSObject
{
    id _guiScriptingEnable;
    id _scriptEditorPopup;
    id _scriptMenuEnable;
    id _scriptMenuShowApp;
    id _scriptMenuShowAppText;
    id _scriptMenuShowLibrary;
    NSColor *_enabledColor;
    NSColor *_disabledColor;
}

- (void)awakeFromNib;
- (void)scriptMenuRefresh;
- (void)scriptEditorRefresh;
- (void)scriptMenuShowLibrary:(id)arg1;
- (void)scriptMenuShowAppAtTop:(id)arg1;
- (void)scriptMenuShowAppAtBottom:(id)arg1;
- (void)scriptMenuEnable:(id)arg1;
- (void)scriptMenuSync:(BOOL)arg1;
- (void)scriptEditorPopup:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)guiScriptingEnable:(id)arg1;
- (void)guiScriptingButton:(id)arg1;
- (void)folderActionsButton:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)showAboutBox:(id)arg1;
- (void)guiScriptingNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

