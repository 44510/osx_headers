//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ReaderInstallation.h"

@class AutoLayoutCompatibleView, BookmarksView, BrowserWKView, ContinuousPageView, NSMutableArray, NSString, ReaderWKView, ResizableContentContainer;

__attribute__((visibility("hidden")))
@interface TabContentView : NSView <ReaderInstallation>
{
    ResizableContentContainer *_resizableContentContainer;
    BookmarksView *_bookmarksView;
    NSView *_readerContainerView;
    ReaderWKView *_readerWKView;
    NSMutableArray *_sortedBannerViews;
    BrowserWKView *_browserWKView;
    BOOL _isClosed;
    ContinuousPageView *_continuousBrowserPageView;
    BrowserWKView *_browserWKViewCachedInContinuousMode;
    AutoLayoutCompatibleView *_opaqueViewBehindTitlebar;
    NSView *_topSitesView;
    double _topContentInset;
}

@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(retain, nonatomic) BrowserWKView *browserWKViewCachedInContinuousMode; // @synthesize browserWKViewCachedInContinuousMode=_browserWKViewCachedInContinuousMode;
@property(readonly, nonatomic) BookmarksView *bookmarksView; // @synthesize bookmarksView=_bookmarksView;
@property(readonly, nonatomic) NSView *topSitesView; // @synthesize topSitesView=_topSitesView;
@property(readonly) ReaderWKView *readerWKView; // @synthesize readerWKView=_readerWKView;
@property(readonly) BrowserWKView *browserWKView; // @synthesize browserWKView=_browserWKView;
@property(readonly) ResizableContentContainer *resizableContentContainer; // @synthesize resizableContentContainer=_resizableContentContainer;
- (void).cxx_destruct;
- (void)windowDidSetTitlebarBlurringDisabled:(BOOL)arg1;
- (void)_layOutOpaqueViewBehindTitlebar;
@property(readonly, nonatomic) BOOL shouldDisableTitlebarBlurringForCurrentContentView;
- (void)_adjustSubviewsForTopContentInset;
- (void)_currentContentViewDidChange;
@property(readonly, nonatomic) struct CGRect contentLayoutFrame;
- (void)replaceBrowserWKViewWithWKView:(id)arg1 replaceSubview:(BOOL)arg2;
- (id)_tabViewItem;
- (BOOL)_isInFullScreenMode;
- (BOOL)handleScrollEvent:(id)arg1;
- (void)didTransitionToBrowserWKView:(id)arg1 inContinuousBrowserPageView:(id)arg2;
- (BOOL)isInContinuousMode;
- (void)uninstallContinuousBrowserPageView;
- (void)installContinuousBrowserPageView:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)uninstallReaderView:(id)arg1 closedByUser:(BOOL)arg2;
- (void)installReaderView:(id)arg1;
- (BOOL)readerIsInstalled;
- (void)endDeferringWKViewInWindowChanges;
- (void)beginDeferringWKViewInWindowChanges;
- (void)close;
- (void)bannerDidUninstallWithView:(id)arg1;
- (void)bannerDidInstallWithView:(id)arg1;
- (void)uninstallTopSitesView;
- (void)installTopSitesView:(id)arg1;
- (void)uninstallBookmarksView;
- (void)magnifyWithEvent:(id)arg1;
- (void)installBookmarksView:(id)arg1;
- (void)updateCustomSwipeViews;
- (id)currentContentView;
- (void)adjustSubviews;
- (void)scrollWheel:(id)arg1;
- (BOOL)isOpaque;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andBrowserWKView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

