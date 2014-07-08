//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSButton, NSImageView, NSString, NSTextField, iCloudAOSDelegate, iCloudManager;

@interface iCloudLoginViewController : iCloudViewControllerBase
{
    NSTextField *appleID;
    NSTextField *password;
    NSTextField *validationErrorTextField;
    NSButton *iForgotButton;
    NSButton *createNewiCloudButton;
    NSButton *useDifferentIDsButton;
    NSImageView *cloudImageView;
    NSImageView *appStoreImageView;
    NSImageView *iTunesImageView;
    NSString *separateStoreAccountID;
    NSString *separateStoreAccountPassword;
    int mode;
    BOOL didRebuke;
    unsigned long long validationFailures;
    BOOL allowiCloudLogin;
    BOOL _alreadySignedInSuccesfully;
    unsigned long long selectediCloudSetting;
    unsigned long long useiCloudState;
    unsigned long long dontUseiCloudState;
    iCloudManager *_manager;
    iCloudAOSDelegate *_validateDelegate;
}

+ (id)keyPathsForValuesAffectingContinueButtonEnabled;
+ (id)keyPathsForValuesAffectingDontUseiCloudState;
+ (id)keyPathsForValuesAffectingUseiCloudState;
+ (id)keyPathsForValuesAffectingAllowiCloudLogin;
@property(retain) iCloudAOSDelegate *validateDelegate; // @synthesize validateDelegate=_validateDelegate;
@property BOOL alreadySignedInSuccesfully; // @synthesize alreadySignedInSuccesfully=_alreadySignedInSuccesfully;
- (id)manager;
@property unsigned long long selectediCloudSetting; // @synthesize selectediCloudSetting;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) BOOL continueButtonEnabled;
@property unsigned long long dontUseiCloudState; // @synthesize dontUseiCloudState;
@property unsigned long long useiCloudState; // @synthesize useiCloudState;
@property(readonly) BOOL allowiCloudLogin; // @synthesize allowiCloudLogin;
- (void)_adjustServiceImagesForMode:(int)arg1 animated:(BOOL)arg2;
- (void)_clearCommerceAccountInfoFromManager;
- (void)_resetAccumulatedState;
- (BOOL)_allowAuthenticationAttemptBasedOnFieldState;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)_localizedMessageForErrorID:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)_changeToMode:(int)arg1 animateImages:(BOOL)arg2;
- (void)_changeToMode:(int)arg1;
- (void)returnPressedOnPasswordField:(id)arg1;
- (void)useDifferentIDsButtonPressed:(id)arg1;
- (void)newiCloudAccountButtonPressed:(id)arg1;
- (void)iForgotButtonPressed:(id)arg1;
- (void)appleIDInfoSheetDidEnd:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_headerAttributedText;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (id)init;
- (void)awakeFromNib;
- (id)thirdAlternateViewIdentifier;
- (id)alternateViewIdentifier;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

@end

