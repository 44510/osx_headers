//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSMutableArray, NSMutableDictionary, SetupAssistantSubView;

@interface SetupAssistant : NSWindowController
{
    id mContinueButton;
    id mGoBackButton;
    id mSubViewContainerView;
    id mSubViewNameTextField;
    id mInitialSubView;
    BOOL mContinueButtonIsDone;
    BOOL mAllowButtonsEnabled;
    BOOL mAllowQuitWithoutIntervention;
    BOOL _doLiveResizing;
    SetupAssistantSubView *mCurrentSubView;
    NSMutableArray *mVisitedSubViews;
    NSMutableDictionary *mGlobalSharedData;
    unsigned int mRoot_port;
}

@property BOOL allowQuitWithoutIntervention; // @synthesize allowQuitWithoutIntervention=mAllowQuitWithoutIntervention;
@property(readonly) SetupAssistantSubView *currentSubView; // @synthesize currentSubView=mCurrentSubView;
@property(readonly) SetupAssistantSubView *initialSubView; // @synthesize initialSubView=mInitialSubView;
- (void).cxx_destruct;
- (void)unregisterForSleepNotification;
- (void)registerForSleepNotification;
- (void)showInformationDialog:(int)arg1 title:(id)arg2 message:(id)arg3 ok:(id)arg4 cancel:(id)arg5 other:(id)arg6 didEndSelector:(SEL)arg7 selectorTarget:(void *)arg8;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)isOptionKeyDown;
- (id)getDoneButtonLabel;
- (id)getContinueButtonLabel;
- (void)setDoLiveResizing:(BOOL)arg1;
- (void)setAllowActiveButtons:(BOOL)arg1;
- (void)continueButtonClickedDelayed;
- (void)enableGoBackButton:(BOOL)arg1;
- (void)enableContinueButton:(BOOL)arg1;
- (void)continueButtonClicked:(id)arg1;
- (void)fakeClickOnContinueButton;
- (void)fakeClickOnGoBackButton;
- (void)goBackButtonClicked:(id)arg1;
- (void)switchToSubView:(id)arg1 direction:(int)arg2;
- (void)goToPreviousSubView;
- (void)goToNextSubView;
- (id)getPreviousSubViewForCurrentView;
- (id)getItemFromSharedDataForKey:(id)arg1;
- (BOOL)removeItemFromSharedDataForKey:(id)arg1;
- (void)removeAllItemsFromSharedGlobalData;
- (BOOL)addItemToSharedData:(id)arg1 forKey:(id)arg2;
- (id)getSharedGlobalData;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)init;

@end

