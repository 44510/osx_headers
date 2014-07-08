//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSView<SafariDelegatingView>, NSWindow;

@protocol SafariViewDelegate <NSObject>

@optional
- (NSArray *)accessibilityChildrenForDelegatingView:(NSView<SafariDelegatingView> *)arg1;
- (NSArray *)childKeyViewsForDelegatingView:(NSView<SafariDelegatingView> *)arg1;
- (void)delegatingViewDidMoveToWindow:(NSView<SafariDelegatingView> *)arg1;
- (void)delegatingView:(NSView<SafariDelegatingView> *)arg1 willMoveToWindow:(NSWindow *)arg2;
@end

