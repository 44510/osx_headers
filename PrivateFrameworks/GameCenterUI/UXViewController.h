//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class GKUITheme, NSString, NSView, UXNavigationController, UXNavigationItem;

@interface UXViewController : NSViewController
{
    UXNavigationController *_navigationController;
    UXNavigationItem *_navigationItem;
    NSString *_subtitle;
    NSView *_initialFirstResponder;
    UXViewController *_presentedViewController;
}

+ (id)keyPathsForValuesAffectingTheme;
+ (id)_gkKeyWindowRootViewController;
@property(retain) UXViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) NSView *initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
@property(retain, nonatomic) UXNavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic) UXNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)presentError:(id)arg1;
- (void)_didEndSheet;
- (void)_willEndSheet;
- (void)_didBeginSheet;
- (void)_willBeginSheet;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)backButtonTitle;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)attachTitleToView;
- (void)attachTitleToViewWithSubtitle:(BOOL)arg1;
@property(readonly, retain, nonatomic) GKUITheme *theme;
- (id)_gkInGameUIUnavailableAlertWithRestrictionMode:(long long)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (id)_gkPresentAlertForError:(id)arg1 title:(id)arg2 defaultMessage:(id)arg3;
- (id)_gkPresentConfirmationAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 dismissHandler:(CDUnknownBlockType)arg4;
- (id)_gkPresentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

