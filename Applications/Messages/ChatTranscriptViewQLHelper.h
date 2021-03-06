//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatTranscriptViewHelper.h"

#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"

@class NSArray, NSString, QLPreviewPanel;

@interface ChatTranscriptViewQLHelper : ChatTranscriptViewHelper <QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    QLPreviewPanel *_panel;
    NSArray *_attachments;
    long long _startIndex;
}

@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) QLPreviewPanel *panel; // @synthesize panel=_panel;
- (void).cxx_destruct;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

