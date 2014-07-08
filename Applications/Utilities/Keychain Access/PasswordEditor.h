//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACLEditor, KeychainItemBasic, NSButton, NSData, NSImageView, NSTextField, NSTextView, NSView, NSWindow, SFPasswordAssistantInspectorController;

@interface PasswordEditor : NSObject
{
    NSWindow *_window;
    NSTextView *_comment;
    NSTextField *_account;
    NSImageView *_icon;
    NSTextField *_kind;
    NSTextField *_name;
    NSTextField *_password;
    NSTextField *_where;
    NSButton *_showPassword;
    NSButton *_saveButton;
    NSView *_aclView;
    ACLEditor *_aclEditor;
    NSData *_pw;
    long long _pwstrlen;
    KeychainItemBasic *_item;
    BOOL _passwordChanged;
    BOOL _commentNotificationOn;
    BOOL _passwordHasFocus;
    BOOL _isDirty;
    long long _saveChanges;
    SFPasswordAssistantInspectorController *_passwordAsst;
    id _passwordAssitButton;
    struct __TISInputSource *_currentInputSource;
}

- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (long long)saveChangesAlert;
- (void)clearSecret;
- (void)hideSecret;
- (void)passwordDidChange:(id)arg1;
- (void)commentDidChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)populateAttributes;
- (void)saveClicked:(id)arg1;
- (void)copyPasswordClicked:(id)arg1;
- (void)showPasswordClicked:(id)arg1;
- (id)password;
- (void)keychainLockNotification:(id)arg1;
- (void)windowResignedKey:(id)arg1;
- (void)windowBecameKey:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)forceClose;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)show:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithItem:(id)arg1;

@end

