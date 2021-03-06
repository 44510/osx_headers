//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBezierPath, NSColor, NSMutableArray, NSObject<OS_dispatch_semaphore>;

@interface BarGraphView : NSView
{
    struct CGPoint _barSize;
    NSObject<OS_dispatch_semaphore> *_barsSemaphore;
    long long _barsSemaphoreOnce;
    BOOL _drawsShadow;
    int _maxBarCount;
    NSColor *_defaultColor;
    NSColor *_backgroundColor;
    id _target;
    SEL _doublecClickAction;
    NSMutableArray *_bars;
    NSBezierPath *_axesPath;
}

@property int maxBarCount; // @synthesize maxBarCount=_maxBarCount;
@property(retain) NSBezierPath *axesPath; // @synthesize axesPath=_axesPath;
@property(retain) NSMutableArray *bars; // @synthesize bars=_bars;
@property SEL doublecClickAction; // @synthesize doublecClickAction=_doublecClickAction;
@property __weak id target; // @synthesize target=_target;
@property BOOL drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) NSColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (void)addBarStacksWithPercent:(id)arg1 colors:(id)arg2;
- (void)addBarStackWithPercent:(double)arg1 color:(id)arg2;
- (void)addBarStackWithPercent:(double)arg1;
- (void)clear;
@property struct CGPoint barSize; // @dynamic barSize;
@property(readonly) NSObject<OS_dispatch_semaphore> *barsSemaphore;

@end

