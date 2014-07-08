//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVPDFPageContainer.h"

#import "PVFileConversionDelegate.h"

@class NSArray, NSString, NSURL, PDFDocument, PVPSFileConversionOperation;

@interface PVPSFileContainer : PVPDFPageContainer <PVFileConversionDelegate>
{
    NSURL *_originalDocumentURL;
    NSURL *_resultingURL;
    BOOL _reportAsPDFType;
    BOOL _conversionDidFinish;
    PVPSFileConversionOperation *_psConversionOp;
    NSArray *_conversionResults;
    BOOL _didFail;
}

@property(readonly) PVPSFileConversionOperation *conversionOperation; // @synthesize conversionOperation=_psConversionOp;
@property(readonly) BOOL isConversionFinished; // @synthesize isConversionFinished=_conversionDidFinish;
@property(readonly) BOOL didFail; // @synthesize didFail=_didFail;
@property(retain) NSArray *conversionResults; // @synthesize conversionResults=_conversionResults;
@property(readonly) NSURL *resultingURL; // @synthesize resultingURL=_resultingURL;
@property(readonly) NSURL *originalDocumentURL; // @synthesize originalDocumentURL=_originalDocumentURL;
- (void)fileConversion:(id)arg1 didFinishWithResult:(id)arg2 didSucceed:(BOOL)arg3;
- (BOOL)isPDFContainer;
- (BOOL)isContentLoadingContainer;
- (void)ensureAnnotationsAreLoaded;
- (BOOL)validateSource:(id *)arg1;
- (void)dealloc;
- (id)initWithPSURL:(id)arg1 PDFURL:(id)arg2 conversionResults:(id)arg3 windowController:(id)arg4 options:(id)arg5 validate:(BOOL)arg6 error:(id *)arg7;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(BOOL)arg5 error:(id *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) PDFDocument *pdfDocument;
@property(readonly) Class superclass;

@end

