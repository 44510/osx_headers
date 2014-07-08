//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BulletedPasswordField, CleartextPasswordField, KeychainStore, NSButton, NSPanel, NSTextField, SFPasswordAssistantInspectorController, SFPasswordStrengthView;

@interface NewKeychainItem : NSObject
{
    NSPanel *panel;
    NSTextField *account;
    NSTextField *name;
    NSTextField *password;
    BulletedPasswordField *securePassword;
    CleartextPasswordField *clearPassword;
    NSButton *addButton;
    KeychainStore *_store;
    SFPasswordAssistantInspectorController *_passwordAsst;
    SFPasswordStrengthView *_pwdStrengthView;
}

- (void)selectPasswordField:(BOOL)arg1;
- (void)showTyping:(id)arg1;
- (void)cancel:(id)arg1;
- (void)addPassword:(id)arg1;
- (void)dealloc;
- (void)show:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)windowResignedKey:(id)arg1;
- (void)windowBecameKey:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)awakeFromNib;
- (id)initWithStore:(id)arg1;

@end

