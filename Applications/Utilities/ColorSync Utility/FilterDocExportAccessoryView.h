//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FilterDoc, NSButton, NSMutableArray, NSPopUpButton, NSSavePanel, NSSlider, NSTabView, NSTextField;

@interface FilterDocExportAccessoryView : NSView
{
    NSPopUpButton *formatPopup;
    FilterDoc *_document;
    unsigned long long _current;
    NSSavePanel *_saveAsPanel;
    unsigned long long _operation;
    NSMutableArray *imageTitles;
    NSMutableArray *allTitles;
    NSMutableArray *imageIDs;
    NSMutableArray *allIDs;
    NSButton *bmpAlphaCheckBox;
    NSTextField *bmpHiddenLabel;
    NSTabView *fomatTabView;
    NSTextField *exrHiddenLabel;
    NSTextField *formatText;
    NSButton *gifAlphaCheckBox;
    NSTextField *gifHiddenLabel;
    NSButton *jp2AlphaCheckBox;
    NSTextField *jp2HiddenLabel;
    NSTextField *jp2LeastText;
    NSTextField *jp2LosslessText;
    NSSlider *jp2QualitySlider;
    NSTextField *jp2QualityText;
    NSTextField *jpegBestText;
    NSTextField *jpegHiddenLabel;
    NSTextField *jpegLeastText;
    NSSlider *jpegQualitySlider;
    NSTextField *jpegQualityText;
    NSButton *pdfEncryptCheckBox;
    NSTextField *pdfHiddenLabel;
    NSPopUpButton *pdfQuartzFilterPopup;
    NSTextField *pdfQuartzFilterText;
    NSButton *pictAlphaCheckBox;
    NSTextField *pictHiddenLabel;
    NSButton *pngAlphaCheckBox;
    NSPopUpButton *pngDepthPopup;
    NSTextField *pngDepthText;
    NSTextField *pngHiddenLabel;
    NSView *pngMovableView;
    NSTextField *pscriptHiddenLabel;
    NSPopUpButton *pscriptQuartzFilterPopup;
    NSTextField *pscriptQuartzFilterText;
    NSButton *pshopAlphaCheckBox;
    NSPopUpButton *pshopDepthPopup;
    NSTextField *pshopDepthText;
    NSTextField *pshopHiddenLabel;
    NSView *pshopMovableView;
    NSTextField *radianceHiddenLabel;
    NSButton *sgiAlphaCheckBox;
    NSTextField *sgiHiddenLabel;
    NSButton *targaAlphaCheckBox;
    NSTextField *targaHiddenLabel;
    NSButton *tiffAlphaCheckBox;
    NSPopUpButton *tiffCompressionPopup;
    NSTextField *tiffCompressionText;
    NSPopUpButton *tiffDepthPopup;
    NSTextField *tiffDepthText;
    NSTextField *tiffHiddenLabel;
    NSView *tiffMovableView;
}

- (void)tiffDepthPopupAction:(id)arg1;
- (void)tiffCompressionPopupAction:(id)arg1;
- (void)tiffAlphaCheckBoxAction:(id)arg1;
- (void)targaAlphaCheckBoxAction:(id)arg1;
- (void)sgiAlphaCheckBoxAction:(id)arg1;
- (void)pshopDepthPopupAction:(id)arg1;
- (void)pshopAlphaCheckBoxAction:(id)arg1;
- (void)pscriptQuartzFilterPopupAction:(id)arg1;
- (void)pngDepthPopupAction:(id)arg1;
- (void)pngAlphaCheckBoxAction:(id)arg1;
- (void)pictAlphaCheckBoxAction:(id)arg1;
- (void)pdfQuartzFilterPopupAction:(id)arg1;
- (void)pdfEncryptCheckBoxAction:(id)arg1;
- (void)jpegQualitySliderAction:(id)arg1;
- (void)jp2QualitySliderAction:(id)arg1;
- (void)jp2AlphaCheckBoxAction:(id)arg1;
- (void)gifAlphaCheckBoxAction:(id)arg1;
- (void)formatPopupAction:(id)arg1;
- (void)bmpAlphaCheckBoxAction:(id)arg1;
- (void)panelDidEnd:(long long)arg1 contextInfo:(id)arg2 operation:(unsigned long long)arg3;
- (void)selectCurrentDocumentFiletype:(id)arg1;
- (void)openExportPanel:(id)arg1 operation:(unsigned long long)arg2;
- (void)addUserChoice:(struct __CFDictionary *)arg1;
- (id)retrieveFilter:(id)arg1;
- (void)loadQuartzFilterPopups;
- (void)loadFormatPopup:(id)arg1 ids:(id)arg2;
- (void)enableAplhaOption:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

