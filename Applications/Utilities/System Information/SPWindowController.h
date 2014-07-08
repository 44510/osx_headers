//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSMutableDictionary, NSPanel, NSPathControl, NSProgressIndicator, NSScrollView, NSSplitView, NSTextField, NSTextView, SPOutlineView;

@interface SPWindowController : NSWindowController
{
    NSMutableDictionary *_dictionary;
    int _columnCount;
    SPOutlineView *_dataTypesOutlineView;
    NSProgressIndicator *_indicator;
    SPOutlineView *_outlineView;
    NSTextView *_textView;
    NSSplitView *_splitView;
    NSSplitView *_verticalSplitView;
    NSTextField *_hostNameTextField;
    NSTextField *_timeStampTextField;
    NSPanel *_progressPanel;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressTitleTextField;
    NSButton *_progressCancelButton;
    NSPanel *_uploadPanel;
    NSTextField *_uploadTextField;
    NSButton *_uploadContinueButton;
    NSPathControl *_pathControl;
    NSScrollView *_enclosingScrollView;
}

- (void)speakSerialNumber:(id)arg1;
- (void)startUpload:(id)arg1;
- (void)cancelUploadSheet:(id)arg1;
- (void)showUploadSheet:(id)arg1;
- (id)_attributedStringForString:(id)arg1;
- (void)cancelProgressSheet:(id)arg1;
- (void)stopShowingProgress;
- (void)updateProgressPercentage:(double)arg1;
- (void)startShowingProgressWithTitle:(id)arg1;
- (BOOL)outlineViewShouldDrawStripedRows:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)itemDoubleClicked:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)sortTableColumn:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)selectDetailLevel:(id)arg1;
- (void)refresh:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_displayResultsForDataType:(id)arg1;
- (void)_prepareToDisplayDataType:(id)arg1;
- (void)setSelectedDataType:(id)arg1;
- (id)selectedDataType;
- (void)_updatePathControl;
- (void)pathControlClicked:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

@end

