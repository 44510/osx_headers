//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface SSSessionSelectViewController : NSViewController
{
    NSWindow *waitingForAnswerSheet;
    NSProgressIndicator *waitingForAnswerProgress;
    NSButton *waitingButton;
    NSTextField *waitingMessageTextField;
    NSTextField *messageTextField;
    NSImageView *shareDisplayImage;
    NSImageView *remoteLoginImage;
    NSButton *shareDisplayButton;
    NSButton *remoteLoginButton;
    NSTextField *shareDisplayDescriptionField;
    NSTextField *remoteLoginDescriptionField;
    NSString *userOnMainDisplay;
    NSString *mainDisplayButtonText;
    id <SSSessionSelectViewControllerDelegate> delegate;
    NSString *authenticatingUser;
    NSString *machineName;
    NSString *_shareDisplayInformativeText;
}

+ (id)keyPathsForValuesAffectingLoginUserNameText;
+ (id)keyPathsForValuesAffectingMainText;
+ (id)keyPathsForValuesAffectingVirtualSessionInformativeText;
+ (id)keyPathsForValuesAffectingShareDisplayInformativeText;
@property(readonly, copy) NSString *shareDisplayInformativeText; // @synthesize shareDisplayInformativeText=_shareDisplayInformativeText;
@property(copy) NSString *machineName; // @synthesize machineName;
@property(copy) NSString *authenticatingUser; // @synthesize authenticatingUser;
@property id <SSSessionSelectViewControllerDelegate> delegate; // @synthesize delegate;
@property(copy) NSString *mainDisplayButtonText; // @synthesize mainDisplayButtonText;
@property(copy) NSString *userOnMainDisplay; // @synthesize userOnMainDisplay;
- (id)mainText;
- (id)loginUserNameText;
- (id)virtualSessionInformativeText;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showUserDeclined;
- (void)showWaitingForAnswerSheet;
- (void)acknowledgeUserDeclinedPressed:(id)arg1;
- (void)stopWaitingButtonPressed:(id)arg1;
- (void)selectVirtualDisplayPressed:(id)arg1;
- (void)selectConsolePressed:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

