//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface IPGrowBar : NSView
{
    double _min;
    double _max;
    NSColor *_fillColor;
    id _delegate;
    int _edge;
    BOOL _delegateHasWillResize;
    BOOL _delegateHasDidResize;
    BOOL _delegateHasBeginResize;
    BOOL _delegateHasEndResize;
}

- (void)dealloc;
- (void)setEdge:(int)arg1;
- (int)edge;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setFillColor:(id)arg1;
- (id)fillColor;
- (void)setMax:(double)arg1;
- (double)max;
- (void)setMin:(double)arg1;
- (double)min;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetCursorRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
