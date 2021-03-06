//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMPlugIn.h"

@class IMToolbarWindowFrame, NSEvent, NSNotification, NSNumber, NSUndoManager, NSWindow;

@protocol IMReaderWindowPlugInProxy <IMPlugIn>

@optional
- (void)plugInWindowDidExitFullScreen:(NSNotification *)arg1;
- (void)plugInWindowDidEnterFullScreen:(NSNotification *)arg1;
- (void)plugInWindowWillExitPostFullScreen:(NSNotification *)arg1;
- (void)plugInWindowWillExitFullScreen:(NSNotification *)arg1;
- (void)plugInWindowWillEnterPostFullScreen:(NSNotification *)arg1;
- (void)plugInWindowWillEnterFullScreen:(NSNotification *)arg1;
- (BOOL)notifiesWhenContentReadyForDisplay;
- (void)contentViewAddedToWindowFrame:(IMToolbarWindowFrame *)arg1;
- (void)prepareToToggleFullScreenWithCompletionBlock:(void (^)(void))arg1;
- (BOOL)handleZoomWindow:(NSWindow *)arg1;
- (NSNumber *)handleKeyDownEvent:(NSEvent *)arg1;
- (NSUndoManager *)windowWillReturnUndoManager:(NSWindow *)arg1;
@end

