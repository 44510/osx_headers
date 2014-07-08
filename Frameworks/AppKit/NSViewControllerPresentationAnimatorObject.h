//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSViewControllerPresentationAnimator.h"

@class NSString, NSViewController;

@interface NSViewControllerPresentationAnimatorObject : NSObject <NSViewControllerPresentationAnimator>
{
    NSViewController *_fromViewController;
    NSViewController *_toViewController;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(retain) NSViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void)dealloc;
- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

