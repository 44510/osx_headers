//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

@class NSPrefPanesManager;

@interface PreferencesApp : NSApplication
{
    NSPrefPanesManager *mPrefPanesManager;
}

+ (long long)currentLoadMode;
+ (BOOL)isDebugMode;
+ (BOOL)isIn64BitMode;
- (void)sendEvent:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)setShowAll:(BOOL)arg1;
- (BOOL)showAll;
- (id)valueInOrderedPrefPanesWithName:(id)arg1;
- (id)orderedPrefPanes;
- (id)preferencesWindow;
- (id)currentPanel;
- (id)authorizePanel:(id)arg1;
- (id)setCurrentPanel:(id)arg1;
- (void)relaunchInMode:(long long)arg1;
- (void)relaunch;

@end

