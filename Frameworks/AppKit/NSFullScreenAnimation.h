//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class _NSFullScreenTransitionOverlayWindow;

__attribute__((visibility("hidden")))
@interface NSFullScreenAnimation : NSAnimation
{
    _NSFullScreenTransitionOverlayWindow *overlayWindow;
    CDUnknownBlockType completionHandler;
}

@property(retain) _NSFullScreenTransitionOverlayWindow *overlayWindow; // @synthesize overlayWindow;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
- (void)dealloc;
- (void)setCurrentProgress:(float)arg1;

@end

