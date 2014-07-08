//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVMediaContainerBase.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString, PDFDocument, PVPrintSettingsSidecar;

@interface PVPDFPageContainer : PVMediaContainerBase
{
    BOOL _loadedAnnotations;
    NSMutableArray *_legacyBookmarksThatHaveBeenMigratedButNotYetSaved;
    PDFDocument *_pdfDocument;
    NSMutableArray *_pages;
    NSMutableArray *_keywords;
    id _writingProgressDelegate;
    NSMutableArray *_bookmarks;
    NSMutableSet *_bookmarkedPages;
    PVPrintSettingsSidecar *_printSettingsSidecar;
}

+ (BOOL)isValidFaxPrintPreviewFileURL:(id)arg1;
+ (BOOL)isPrintPreviewFileURL:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) PVPrintSettingsSidecar *printSettingsSidecar; // @synthesize printSettingsSidecar=_printSettingsSidecar;
@property(retain) PDFDocument *pdfDocument; // @synthesize pdfDocument=_pdfDocument;
- (void)_removePrintPreviewFiles;
- (void)_writeAKAnnotationsToPDFDocument:(id)arg1;
- (id)_pvPDFAKAnnotationsInPDFDocument:(id)arg1;
- (BOOL)_hasFormData;
- (void)documentEndPageWrite:(id)arg1;
- (void)_updateKeywordsInPDFDocument;
- (void)_documentUnlocked:(id)arg1;
- (Class)classForAnnotationClass:(Class)arg1;
- (id)_legacyBookmarksThatHaveBeenMigratedButNotYetSaved;
- (void)_finalizeLegacyBookmarkMigrationIfNecessary;
- (void)_migrateLegacyBookmarksIfNecessary;
- (id)bookmarksRepresentation:(id)arg1;
- (void)_updateBookmarksInPDFDocument;
- (BOOL)removeBookmarkFromPage:(id)arg1;
- (BOOL)bookmarkPage:(id)arg1;
- (BOOL)isPDFPageBookmarked:(id)arg1;
- (BOOL)isPageBookmarked:(id)arg1;
- (id)bookmarkForPage:(id)arg1;
@property(readonly) NSSet *bookmarkedPages;
@property(readonly) NSArray *bookmarks;
- (BOOL)askForPasswordOnEditing;
- (BOOL)checkForPermissions:(unsigned long long)arg1 passwordQueryNibName:(id)arg2;
- (void)removeObjectFromBookmarksAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inBookmarksAtIndex:(unsigned long long)arg2;
- (void)moveAnnotation:(id)arg1 toElement:(id)arg2;
- (void)removeAnnotationsAtIndexes:(id)arg1;
- (void)insertAnnotations:(id)arg1 atIndexes:(id)arg2;
- (struct _NSRange)indexRangeOfAnnotationsForElement:(id)arg1;
- (void)removeObjectFromElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2;
- (id)printPreviewSettingsData;
- (void)cropRectChangedTimerFired;
- (void)scheduleCropRectChangedNotification;
- (id)pageElementWithLabel:(id)arg1;
- (BOOL)containsPageElement:(id)arg1;
- (id)pageElementAtUnarrangedIndex:(unsigned long long)arg1;
- (id)pageElementWithPDFPageEqualTo:(id)arg1;
- (unsigned long long)indexOfElement:(id)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
- (void)ensureAnnotationsAreLoaded;
- (BOOL)validateSource:(id *)arg1;
- (id)keywords;
@property(readonly) BOOL allowsEverything;
@property(readonly) BOOL allowsPrinting;
@property(readonly) BOOL allowsCopying;
@property(readonly) BOOL isPDFDocumentLocked;
@property(readonly) unsigned long long encryptionPermissionMask;
- (BOOL)isEncrypted;
@property(readonly) long long documentPDFMinorVersion;
@property(readonly) long long documentPDFMajorVersion;
@property(readonly) NSDictionary *documentAttributes;
- (id)fileAttributes;
@property(readonly) NSString *documentTypeDescription;
- (unsigned long long)elementCount;
- (id)elements;
@property(readonly) BOOL hasOutline;
- (id)annotations;
- (void)cancelWriting;
- (BOOL)canCancelWriting;
- (BOOL)writePDFToURL:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
- (BOOL)writeElementsAtIndexes:(id)arg1 asImageType:(id)arg2 toURL:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4;
- (id)bestTypeForWriting;
- (void)_resetKeywordsCache;
- (void)removeObjectFromKeywordsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inKeywordsAtIndex:(unsigned long long)arg2;
- (BOOL)isContentLoadingContainer;
- (BOOL)isQuickLookContainer;
- (BOOL)isC3DContainer;
- (BOOL)isImageContainer;
- (BOOL)isPDFContainer;
- (id)printInfo;
- (void)duplicateDocumentWithDelegate:(id)arg1 didDuplicateSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(BOOL)arg5 error:(id *)arg6;

@end

