//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSImage, NSMutableArray, NSObject<OS_dispatch_queue>, NSStatusItem, NSTimer;

@interface SPStatusItemView : NSControl
{
    struct _MDSearchViewFlags _flags;
    unsigned int _showMenuId;
    double _spaceChangedTime;
    NSImage *_selectedImage;
    NSImage *_unselectedImage;
    NSImage *_indexingImageNormal;
    NSImage *_indexingImagePressed;
    long long _selectedImageBackgroundStyle;
    long long _unselectedImageBackgroundStyle;
    double _backingScaleFactor;
    NSTimer *_lostKeyFocusTimer;
    BOOL _statusItemImageReplicationDisabled;
    BOOL _needsPadding;
    BOOL _highlightShownWithSpot;
    NSObject<OS_dispatch_queue> *_eventCollectorQueue;
    BOOL _eventFocusTaken;
    NSStatusItem *_statusItem;
    NSMutableArray *_eventCollector;
    id _eventMonitor;
    struct CPSProcessSerNum _eventMonitorPSN;
}

+ (void)_queryStartup;
+ (struct CGRect)searchViewRect;
+ (struct CGRect)searchViewRectWithPadding:(BOOL)arg1;
+ (BOOL)shouldBeDisabled;
+ (double)upTime;
+ (void)initialize;
@property(nonatomic) BOOL eventFocusTaken; // @synthesize eventFocusTaken=_eventFocusTaken;
@property(nonatomic) struct CPSProcessSerNum eventMonitorPSN; // @synthesize eventMonitorPSN=_eventMonitorPSN;
@property(retain, nonatomic) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(retain, nonatomic) NSMutableArray *eventCollector; // @synthesize eventCollector=_eventCollector;
@property NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void).cxx_destruct;
- (void)windowDidOrderOut;
- (void)_eventMonitorCleanup;
- (void)_eventMonitorStopAndProcess;
- (void)_eventMonitorStop;
- (void)_eventMonitorStart;
- (id)_eventCollectorPopEvents;
- (void)_eventCollectorAddEvent:(id)arg1;
- (void)_eventCollectorReset;
@property(readonly) NSObject<OS_dispatch_queue> *eventCollectorQueue;
- (void)_screenChanged:(id)arg1;
- (void)_serverDiedSafe:(id)arg1;
- (void)_serverDied:(id)arg1;
- (void)_windowBecomeMain:(id)arg1;
- (void)_windowBecomeKey:(id)arg1;
- (void)_lostKeyFocus:(id)arg1;
- (void)_lostKeyFocusTimeout:(id)arg1;
- (void)_anotherMenuWentUp:(id)arg1;
- (void)openMenu;
- (void)closeMenu;
- (void)mouseUp:(id)arg1;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)_toggleAfterSwitchingToScreen:(id)arg1;
- (void)_toggle;
- (void)drawRect:(struct CGRect)arg1;
- (void)_spaceChanged:(id)arg1;
- (void)_hideMenu;
- (void)_showMenu;
- (void)_showMenuFail;
- (void)_showMenuNow;
- (BOOL)_load_HIMenuBarRequestVisibility;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_loadIndexingImages;
- (BOOL)_loadImages;
- (void)_asyncLoadImages;
- (void)_colorVariantChanged:(id)arg1;
- (void)_clearImageCacheIfChange;
- (void)_clearImageCache;
- (void)_loadSearchViewDot;
- (double)backingScaleFactor;
- (id)screen;
- (void)unhighlight;
- (void)highlight;
- (BOOL)isHighlighted;
- (BOOL)isWindowShowing;

@end

