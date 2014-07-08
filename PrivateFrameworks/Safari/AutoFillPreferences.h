//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class CreditCardDataEditor, MiscFormsDataEditor, NSButton, PasswordsEditor;

__attribute__((visibility("hidden")))
@interface AutoFillPreferences : PreferencesModule
{
    NSButton *autoFillAddressFieldsCheckBox;
    NSButton *autoFillPasswordsCheckBox;
    NSButton *autoFillOtherFormsCheckBox;
    NSButton *autoFillCreditCardDataCheckBox;
    NSButton *editMyCardButton;
    NSButton *editPasswordsButton;
    NSButton *editOtherFormDataButton;
    NSButton *editCreditCardDataButton;
    MiscFormsDataEditor *miscFormsDataEditor;
    PasswordsEditor *passwordsEditor;
    CreditCardDataEditor *_creditCardDataEditor;
}

+ (void)setAutoFillPreferenceWithSecurityCheck:(id)arg1 value:(BOOL)arg2 windowForSheet:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)_informativeTextForWarningWhenEnablingAutoFill:(id)arg1;
+ (id)_messageTextForWarningWhenEnablingAutoFill:(id)arg1;
- (void).cxx_destruct;
- (id)helpAnchor;
- (void)awakeFromNib;
- (void)willBeDisplayed;
- (void)editCreditCardData:(id)arg1;
- (void)editOtherFormData:(id)arg1;
- (void)editPasswords:(id)arg1;
- (void)editMyCard:(id)arg1;
- (void)toggleAutoFillCreditCardData:(id)arg1;
- (void)toggleAutoFillOtherForms:(id)arg1;
- (void)toggleAutoFillPasswords:(id)arg1;
- (void)toggleAutoFillAddressFields:(id)arg1;
- (void)updateViews;

@end

