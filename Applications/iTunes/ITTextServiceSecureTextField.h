//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSecureTextField.h"

#import "ITTextServiceFocusHandlingProtocol.h"
#import "NSTextFieldDelegate.h"

@interface ITTextServiceSecureTextField : NSSecureTextField <ITTextServiceFocusHandlingProtocol, NSTextFieldDelegate>
{
    struct weak_ptr<ITTextServiceMacOS> mITTextService;
    BOOL mBecomingFirstResponder;
}

+ (Class)cellClass;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)controlTextDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (shared_ptr_8092bbf7)owningITTextServiceUnignoredAncestorView;
- (shared_ptr_bd1bd18b)owningITTextService;
- (void)cancelOperation:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)handleITEditTextResignFocus;
- (BOOL)handleITEditTextBecomeFocus;
- (id)initWithFrame:(struct CGRect)arg1 owningITTextService:(shared_ptr_bd1bd18b)arg2;

@end

