//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSString, NSTextField, iCloudAOSDelegate;

@interface iCloudLoginRepromptViewController : iCloudViewControllerBase
{
    NSTextField *password;
    NSTextField *validationErrorTextField;
    BOOL didRebuke;
    BOOL userOptsOut;
    unsigned long long validationFailures;
    BOOL _alreadySignedInSuccesfully;
    NSString *_signedInAccount;
    iCloudAOSDelegate *_validateDelegate;
}

@property(retain) iCloudAOSDelegate *validateDelegate; // @synthesize validateDelegate=_validateDelegate;
@property BOOL alreadySignedInSuccesfully; // @synthesize alreadySignedInSuccesfully=_alreadySignedInSuccesfully;
@property(retain) NSString *signedInAccount; // @synthesize signedInAccount=_signedInAccount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) BOOL continueButtonEnabled;
- (void)_clearCommerceAccountInfoFromManager;
- (void)_resetAccumulatedState;
- (BOOL)_allowAuthenticationAttemptBasedOnFieldState;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (id)_localizedMessageForErrorID:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)pressedDontUse:(id)arg1;
- (void)iForgotButtonPressed:(id)arg1;
- (void)returnPressedOnPasswordField:(id)arg1;
- (void)appleIDInfoSheetDidEnd:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_headerAttributedText;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)init;
- (id)thirdAlternateViewIdentifier;
- (id)alternateViewIdentifier;
- (id)nextViewIdentifier;

@end
