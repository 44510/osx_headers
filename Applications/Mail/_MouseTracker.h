//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@interface _MouseTracker : NSObject
{
    BOOL _mouseOver;
    NSView *_view;
    long long _trackingRectTag;
    struct CGRect _trackingRect;
}

@property(nonatomic) BOOL mouseOver; // @synthesize mouseOver=_mouseOver;
@property(readonly, nonatomic) long long trackingRectTag; // @synthesize trackingRectTag=_trackingRectTag;
@property(readonly, nonatomic) struct CGRect trackingRect; // @synthesize trackingRect=_trackingRect;
@property(readonly, nonatomic) __weak NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateMouseIsOver;
- (void)dealloc;
- (id)initWithTrackingRect:(struct CGRect)arg1 inView:(id)arg2;

@end

