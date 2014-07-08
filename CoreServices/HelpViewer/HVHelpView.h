//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSMenuDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"

@class HVHelpViewController, NSFont, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSTrackingArea, NSURL, QLPreviewPanel, SearchableWebView, WebFrame;

@interface HVHelpView : NSView <NSMenuDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    SearchableWebView *_webView;
    NSTextField *_findTextField;
    NSTextField *_findStatusTextField;
    HVHelpViewController *_controller;
    NSString *_draggedPath;
    struct CGSize _minSize;
    BOOL _progressAnimating;
    NSMutableArray *_delayedActionQueue;
    BOOL _firstTime;
    WebFrame *_lastFrame;
    long long _selectedSearchMenuItemTag;
    NSFont *_systemFont;
    NSString *_macHelpTitle;
    BOOL _lastSearchSucceeded;
    NSMutableDictionary *_knownBooks;
    double _pageSizeMultiplierAtGestureStart;
    double _cumulativeMagnifyDelta;
    double _stickyTextMagnifyGestureDirection;
    NSTrackingArea *_mouseMovedTrackingArea;
    QLPreviewPanel *_previewPanel;
    struct CGRect _zoomFromRect;
    NSURL *_previewItemURL;
}

@property(retain) QLPreviewPanel *previewPanel; // @synthesize previewPanel=_previewPanel;
@property(retain) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;
@property struct CGRect zoomFromRect; // @synthesize zoomFromRect=_zoomFromRect;
@property(readonly) SearchableWebView *webView; // @synthesize webView=_webView;
@property HVHelpViewController *controller; // @synthesize controller=_controller;
- (struct CGRect)_centeredOriginRectFromPoint:(struct CGPoint)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 customViewForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)zoomOverlayFromPoint:(struct CGPoint)arg1 withURL:(id)arg2;
- (void)saveFileWrapperToDownloadsFolder:(id)arg1 originatingURL:(id)arg2;
- (id)stringForSelection;
- (void)makeSearchTextFieldFirstResponder:(id)arg1;
- (void)setupFirstResponder:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)dismissOverlayIfContainsMouseDown:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)showFindBar:(id)arg1;
- (void)makeTextSmaller:(id)arg1;
- (void)makeTextLarger:(id)arg1;
- (id)forwardList;
- (id)backList;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isOpaque;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)print:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (id)currentHistoryLocation;
- (id)currentURL;
- (void)setMinSize:(struct CGSize)arg1;
- (struct CGSize)minSize;
- (id)draggedPath;
- (void)setDraggedPath:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)webView:(id)arg1 addMessageToConsole:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 drawFooterInRect:(struct CGRect)arg2;
- (float)webViewFooterHeight:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 saveFrameView:(id)arg2 showingPanel:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

