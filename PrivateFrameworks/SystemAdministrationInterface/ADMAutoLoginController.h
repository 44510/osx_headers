//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADMLoginPrefs, NSPopUpButton, NSSecureTextField, NSTextField, NSWindow;

@interface ADMAutoLoginController : NSObject
{
    NSWindow *_autologinSheet;
    NSPopUpButton *_autologinSheetPopUp;
    NSSecureTextField *_autologinSheetPassword;
    NSTextField *_autologinNameSingle;
    ADMLoginPrefs *_loginPrefs;
}

+ (id)sharedAutoLoginController;
@property(retain) ADMLoginPrefs *loginPrefs; // @synthesize loginPrefs=_loginPrefs;
@property(retain) NSTextField *autologinNameSingle; // @synthesize autologinNameSingle=_autologinNameSingle;
@property(retain) NSSecureTextField *autologinSheetPassword; // @synthesize autologinSheetPassword=_autologinSheetPassword;
@property(retain) NSPopUpButton *autologinSheetPopUp; // @synthesize autologinSheetPopUp=_autologinSheetPopUp;
@property(retain) NSWindow *autologinSheet; // @synthesize autologinSheet=_autologinSheet;
- (void).cxx_destruct;
- (void)autologinSheetCancel:(id)arg1;
- (void)autologinSheetOk:(id)arg1;
- (void)showAutologinSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 selectUserName:(id)arg4;

@end

