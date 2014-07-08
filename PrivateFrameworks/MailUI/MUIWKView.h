//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKView.h"

#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "QLSeamlessCloserDelegate.h"
#import "QLSeamlessOpenerDelegate.h"

@class MUIWKViewController, NSArray, NSDraggingSession, NSString, WKProcessGroup;

@interface MUIWKView : WKView <NSDraggingDestination, NSDraggingSource, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessCloserDelegate, QLSeamlessOpenerDelegate>
{
    BOOL _isDragging;
    BOOL _isDraggingAttachments;
    NSArray *_attachmentControllersToQuicklook;
    MUIWKViewController *_controller;
    NSDraggingSession *_dragSession;
    WKProcessGroup *_processGroup;
}

@property(retain, nonatomic) WKProcessGroup *processGroup; // @synthesize processGroup=_processGroup;
@property(nonatomic) BOOL isDraggingAttachments; // @synthesize isDraggingAttachments=_isDraggingAttachments;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) NSDraggingSession *dragSession; // @synthesize dragSession=_dragSession;
@property(nonatomic) __weak MUIWKViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSArray *attachmentControllersToQuicklook; // @synthesize attachmentControllersToQuicklook=_attachmentControllersToQuicklook;
- (void).cxx_destruct;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;
- (void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3 windowLevel:(long long *)arg4;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (BOOL)quickLookAttachmentControllers:(id)arg1;
- (void)_displayAlertForUndownloadedAttachments:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)printOperationWithPrintInfo:(id)arg1;
- (id)selectionAndClickInformationForClickAtPoint:(struct CGPoint)arg1;
- (id)selectedAttachmentControllers;
- (id)selectionAndClickInformationFromSelectionContextDictionary:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)viewDidMoveToSuperview;
- (BOOL)autoscroll:(id)arg1;
- (void)updateLayer;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeKeyView;
- (id)defaultStringForToolTip:(long long)arg1 view:(id)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)showWebInspector:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

