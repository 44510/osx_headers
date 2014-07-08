//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSMapTable, NSWindow;

@interface NSHelpManager : NSObject
{
    NSMapTable *_helpMapTable;
    NSMapTable *_keyMapTable;
    NSMapTable *_bundleMapTable;
    NSWindow *_helpWindow;
    NSWindow *_shadowWindow;
    NSWindow *_evtWindow;
    NSBundle *_helpBundle;
}

+ (BOOL)isContextHelpModeActive;
+ (void)setContextHelpModeActive:(BOOL)arg1;
+ (id)sharedHelpManager;
+ (BOOL)_activateHelpModeBasedOnEvent:(id)arg1;
+ (BOOL)_keyboardIsOldNeXT;
+ (void)_setCtrlAltForHelpDesired:(BOOL)arg1;
+ (BOOL)_isCtrlAltForHelpDesired;
- (BOOL)registerBooksInBundle:(id)arg1;
- (void)findString:(id)arg1 inBook:(id)arg2;
- (void)openHelpAnchor:(id)arg1 inBook:(id)arg2;
- (BOOL)showContextHelpForObject:(id)arg1 locationHint:(struct CGPoint)arg2;
- (id)contextHelpForObject:(id)arg1;
- (void)removeContextHelpForObject:(id)arg1;
- (void)setContextHelp:(id)arg1 forObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (BOOL)registerHelpBook;
- (void)showHelpFile:(id)arg1 context:(long long)arg2;
- (void)_cleanupHelpForQuit;
- (void)_prepareHelpWindow:(id)arg1 locationHint:(struct CGPoint)arg2;
- (void)_placeHelpWindowNear:(struct CGPoint)arg1;
- (struct CGRect)_screenRectContainingPoint:(struct CGPoint)arg1;
- (void)_setBundleForHelpSearch:(id)arg1;
- (id)_resolveHelpKeyForObject:(id)arg1;
- (id)_helpKeyForObject:(id)arg1;
- (id)_helpBundleForObject:(id)arg1;
- (void)_removeHelpKeyForObject:(id)arg1;
- (void)_setHelpKey:(id)arg1 forObject:(id)arg2;
- (id)_helpWindow;
- (BOOL)_orderOutHelpWindowAfterEventMask:(unsigned long long)arg1;
- (BOOL)_orderOutHelpWindow;
- (void)_orderFrontHelpWindow;

@end

