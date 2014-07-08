//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSColor, NSObject, NSRemoteViewBase, NSXPCInterface;

@protocol NSRemoteViewDelegate

@optional
- (BOOL)windowOfViewShouldResignKey:(NSRemoteViewBase *)arg1;
- (BOOL)windowOfViewShouldBecomeKey:(NSRemoteViewBase *)arg1;
- (BOOL)viewShouldDragOldestAncestorWindow:(NSRemoteViewBase *)arg1;
- (BOOL)view:(NSRemoteViewBase *)arg1 shouldResize:(struct CGSize)arg2;
- (void)viewDidRetreatToConfigPhase:(NSRemoteViewBase *)arg1;
- (void)viewDidAdvanceToRunPhase:(NSRemoteViewBase *)arg1;
- (void)viewDidInvalidate:(NSRemoteViewBase *)arg1;
- (void)viewWillInvalidate:(NSRemoteViewBase *)arg1;
- (NSColor *)view:(NSRemoteViewBase *)arg1 willHaveServiceFontSmoothingBackgroundColor:(NSColor *)arg2;
- (NSObject *)exportedObject;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)serviceViewControllerInterface;
@end

