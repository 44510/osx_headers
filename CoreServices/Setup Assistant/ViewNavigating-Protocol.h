//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HiCloudController, HiCloudWindowController, NSString, NavigateItem, SetupStateManager;

@protocol ViewNavigating <NSObject>
@property BOOL shouldReturnFromSidetrip;
@property(readonly, retain) id <HiCloudManager> manager;
@property(retain) SetupStateManager *setupStateManager;
@property(retain) HiCloudController *hiCloudController;
@property(retain) HiCloudWindowController *windowController;
@property(readonly, retain) NSString *thirdAlternateViewIdentifier;
@property(readonly, retain) NSString *secondAlternateViewIdentifier;
@property(readonly, retain) NSString *alternateViewIdentifier;
@property(readonly, retain) NSString *previousViewIdentifier;
@property(readonly, retain) NSString *nextViewIdentifier;
@property(retain) NavigateItem *thirdAlternateNavigateItem;
@property(retain) NavigateItem *secondAlternateNavigateItem;
@property(retain) NavigateItem *alternateNavigateItem;
@property(retain) NavigateItem *backwardNavigateItem;
@property(retain) NavigateItem *forwardNavigateItem;
@property(copy) NSString *pageTitle;
@property(retain) NSString *logicalSection;
@property NSString *identifier;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)thirdAlternatePaneWithHandler:(void (^)(NSViewController *, BOOL))arg1;
- (void)secondAlternatePaneWithHandler:(void (^)(NSViewController *, BOOL))arg1;
- (void)alternatePaneWithHandler:(void (^)(NSViewController *, BOOL))arg1;
- (void)backwardPaneWithHandler:(void (^)(NSViewController *, BOOL))arg1;
- (void)forwardPaneWithHandler:(void (^)(NSViewController *, BOOL))arg1;

@optional
- (NSString *)windowLevelApplicationUIString;
- (BOOL)wantsWindowLevelApplicationUI;
- (void)stopPerpetualStatusUI;
- (void)startPerpetualStatusUI;
- (void)stopSettingsApplicationUI;
- (void)startSettingsApplicationUI;
- (BOOL)shouldSkipPane;
- (void)willEnterPaneNavigatingForward:(BOOL)arg1;
@end

