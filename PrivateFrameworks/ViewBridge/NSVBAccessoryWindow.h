//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSEvent, NSRemoteViewBase, NSVBAccessoryWindowBackstopResponder;

@interface NSVBAccessoryWindow : NSWindow
{
    NSRemoteViewBase *_remoteView;
    NSVBAccessoryWindowBackstopResponder *_backstopResponder;
    NSEvent *_unhandledKeyEvent;
    unsigned int _willUpdateAccessibilityChildren:1;
    unsigned int _notificationsRegistered:1;
}

@property unsigned int notificationsRegistered; // @synthesize notificationsRegistered=_notificationsRegistered;
- (void)clearUnhandledKeyEvent;
- (id)unhandledKeyEvent;
- (void)keyDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void)maintainAccessoryViewNotifications:(BOOL)arg1;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_keyViewLoopsMayCrossWindows;
- (id)_orderedDrawerAndWindowKeyLoopGroupingViews;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (void)_hierarchyDidChangeInView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)_accessoryViewFrameDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 forRemoteView:(id)arg2;

@end

