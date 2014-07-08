//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMultiPreviewResizingView.h"

@class FBLanguagePicker, NSArray, NSParagraphStyle, NSScrollView, NSString, NSTextView;

@interface FBMultiPreviewSampleView : FBMultiPreviewResizingView
{
    NSString *_sampleLanguage;
    NSString *_sampleString;
    NSTextView *_sampleTextView;
    NSScrollView *_sampleScrollView;
}

@property NSScrollView *sampleScrollView; // @synthesize sampleScrollView=_sampleScrollView;
@property NSTextView *sampleTextView; // @synthesize sampleTextView=_sampleTextView;
@property(copy) NSString *sampleString; // @synthesize sampleString=_sampleString;
@property(copy) NSString *sampleLanguage; // @synthesize sampleLanguage=_sampleLanguage;
- (id)fontForFace:(id)arg1;
- (id)selectedLanguageTag;
@property(readonly) NSArray *languageTags;
- (BOOL)allowsSizeToFit;
- (double)defaultSize;
- (id)sizePreferenceKey;
- (BOOL)validateMenuItem:(id)arg1;
- (void)changeSize:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (void)selectScript:(id)arg1;
@property(readonly) NSParagraphStyle *defaultStyle;
- (void)updateSizeDisplay:(id)arg1;
@property(readonly) FBLanguagePicker *languagePicker;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateDisplay:(id)arg1;
- (id)_textStorage;
- (void)_facesChanged:(id)arg1;
- (void)_changeSampleLanguage:(id)arg1;
- (void)_adjustSampleTextView;

// Remaining properties
@property(copy) NSArray *faces;

@end

