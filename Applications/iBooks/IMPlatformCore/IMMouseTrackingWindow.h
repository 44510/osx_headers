//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSView;

@interface IMMouseTrackingWindow : NSWindow
{
    NSView *_targetView;
    CDStruct_3c058996 _edgeBuffer;
    long long _trackingRect;
    BOOL _mouseInView;
    id <IMMouseTrackingWindowDelegate> _trackingDelegate;
}

@property __weak id <IMMouseTrackingWindowDelegate> trackingDelegate; // @synthesize trackingDelegate=_trackingDelegate;
@property(readonly) NSView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (id)backgroundColor;
- (void)parentWindowDidResignMain:(id)arg1;
- (void)parentWindowDidBecomeMain:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)_adjustFrame;
- (void)dealloc;
- (id)initWithView:(id)arg1 outsideBuffer:(CDStruct_3c058996)arg2 styleMask:(unsigned long long)arg3 backing:(unsigned long long)arg4 defer:(BOOL)arg5 screen:(id)arg6;

@end

