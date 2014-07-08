//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIIsolateableSingleViewGadget.h>

#import "CalUIResizingTextFieldDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "QLSeamlessOpenerDelegate.h"

@class EKUIAttachmentTableView, EKUIPlusButton, EKUITextButton, NSArray, NSDictionary, NSLayoutConstraint, NSString, NSView;

@interface EKUIAttachmentGadget : EKUIIsolateableSingleViewGadget <QLSeamlessOpenerDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, CalUIResizingTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource>
{
    NSArray *_attachments;
    EKUITextButton *_addAttachmentLabel;
    NSLayoutConstraint *_heightConstraint;
    EKUIAttachmentTableView *_tableView;
    NSView *_container;
    EKUIPlusButton *_plusButton;
    NSArray *_attachmentConstraints;
    NSDictionary *_viewMetrics;
    NSLayoutConstraint *_betweenTableLabelConstraint;
    NSLayoutConstraint *_betweenPlusLabelConstraint;
}

+ (id)interestedChangeKeys;
@property(retain) NSLayoutConstraint *betweenPlusLabelConstraint; // @synthesize betweenPlusLabelConstraint=_betweenPlusLabelConstraint;
@property(retain) NSLayoutConstraint *betweenTableLabelConstraint; // @synthesize betweenTableLabelConstraint=_betweenTableLabelConstraint;
@property(retain) NSDictionary *viewMetrics; // @synthesize viewMetrics=_viewMetrics;
@property(retain) NSArray *attachmentConstraints; // @synthesize attachmentConstraints=_attachmentConstraints;
@property(retain) EKUIPlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain) NSView *container; // @synthesize container=_container;
@property(retain) EKUIAttachmentTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) EKUITextButton *addAttachmentLabel; // @synthesize addAttachmentLabel=_addAttachmentLabel;
@property(retain) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)updateActiveQLDelegate;
- (void)_updateQLPanelToCurrentSelection:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)quickLookSelectedFiles;
- (BOOL)_shouldShowPlusButton;
- (BOOL)_shouldShowAddAttachmentsLabel;
- (void)_launchFilePicker:(id)arg1;
- (void)removeSelectedFiles;
- (void)attachmentTableDoubleClick:(id)arg1;
- (void)updateTableViewConstraints;
- (id)_getAttachmentsAtIndices:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)rowHeight;
- (long long)_numberOfRows;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)claimedPboardTypes;
- (double)horizontalInset;
- (BOOL)isEditable;
- (void)updateConstraints;
- (void)setExpanded:(BOOL)arg1;
- (void)updateAttachments;
- (void)updateWithChanges:(id)arg1;
- (BOOL)hasData;
- (id)control;
- (double)maxHeight;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

