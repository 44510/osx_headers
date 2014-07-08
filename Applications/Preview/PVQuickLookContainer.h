//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVMediaContainerBase.h"

@class NSMutableArray, NSString, QLPreviewDocument, QLPreviewView;

@interface PVQuickLookContainer : PVMediaContainerBase
{
    QLPreviewDocument *_quickLookDocument;
    QLPreviewView *_quickLookView;
    BOOL _observingIsLoaded;
    NSString *_password;
    NSMutableArray *_elements;
}

@property(copy) NSString *password; // @synthesize password=_password;
@property(readonly) QLPreviewView *quickLookView; // @synthesize quickLookView=_quickLookView;
@property(readonly) QLPreviewDocument *quickLookDocument; // @synthesize quickLookDocument=_quickLookDocument;
- (void)cancelWriting;
- (BOOL)canCancelWriting;
- (BOOL)writePDFToURL:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
- (BOOL)writeElementsAtIndexes:(id)arg1 asImageType:(id)arg2 toURL:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4;
- (id)bestTypeForWriting;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (id)bookmarks;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (struct _NSRange)indexRangeOfAnnotationsForElement:(id)arg1;
- (id)annotations;
- (void)ensureAnnotationsAreLoaded;
- (void)removeObjectFromElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfElement:(id)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
- (id)elements;
- (BOOL)validateSource:(id *)arg1;
- (id)documentAttributes;
- (id)fileAttributes;
- (BOOL)isContentLoadingContainer;
- (BOOL)isQuickLookContainer;
- (BOOL)isC3DContainer;
- (BOOL)isImageContainer;
- (BOOL)isPDFContainer;
- (void)waitUntilQuickLookDocumentIsLoaded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(BOOL)arg5 error:(id *)arg6;

@end

