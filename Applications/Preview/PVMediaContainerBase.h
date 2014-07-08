//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDocument.h"

#import "AKControllerDelegateProtocol.h"
#import "PVMediaContainer.h"

@class AKController, IKSaveOptions, NSDictionary, NSMapTable, NSMutableSet, NSPrintInfo, NSString, NSTimer, NSURL, NSUUID, PVImageSizeCalculator, PVWindowController;

@interface PVMediaContainerBase : NSDocument <PVMediaContainer, AKControllerDelegateProtocol>
{
    PVWindowController *_parentWindowController;
    NSUUID *_UUID;
    unsigned long long _ordinalID;
    BOOL _isValidated;
    BOOL _isLoaded;
    NSURL *_invariantURL;
    NSString *_undoGroupPresentablePropertyName;
    BOOL _undoGroupHasChangesToMultipleProperties;
    NSMapTable *_undoGroupOldPropertiesPerAnnotation;
    NSMutableSet *_undoGroupInsertedAnnotations;
    NSPrintInfo *_documentPrintInfo;
    IKSaveOptions *_saveAsOptions;
    BOOL _saveAsUIWasOpenPanel;
    BOOL _isBeingClosed;
    BOOL _isBeingDuplicated;
    BOOL _shouldFakeNilFileURL;
    BOOL _disableChangeCounting;
    BOOL _isAutosaving;
    BOOL _hasNeverBeenEdited;
    PVImageSizeCalculator *_saveSizeCalculator;
    BOOL _canCalculateEstimatedSize;
    AKController *_annotationController;
    NSMutableSet *_observedAnnotations;
    double _akModelBaseScaleFactor;
}

+ (void)_handleConflictsForDocument:(id)arg1 atURL:(id)arg2 modalForWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)arg1;
+ (BOOL)autosavesInPlace;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)isTempFolderURL:(id)arg1;
+ (BOOL)isValidFaxPrintPreviewFileURL:(id)arg1;
+ (BOOL)isBookKitFileURL:(id)arg1;
+ (BOOL)isOtherSpecialFileURL:(id)arg1;
+ (BOOL)isPrintPreviewFileURL:(id)arg1;
+ (BOOL)isUntitledFileURL:(id)arg1;
+ (BOOL)isPreviewTempFileURL:(id)arg1;
+ (BOOL)isRegularFileURL:(id)arg1;
+ (id)untitledFilesFolder;
@property(retain) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property double akModelBaseScaleFactor; // @synthesize akModelBaseScaleFactor=_akModelBaseScaleFactor;
@property(retain) PVImageSizeCalculator *saveSizeCalculator; // @synthesize saveSizeCalculator=_saveSizeCalculator;
@property BOOL saveAsUIWasOpenPanel; // @synthesize saveAsUIWasOpenPanel=_saveAsUIWasOpenPanel;
@property(retain) IKSaveOptions *saveAsOptions; // @synthesize saveAsOptions=_saveAsOptions;
@property BOOL hasNeverBeenEdited; // @synthesize hasNeverBeenEdited=_hasNeverBeenEdited;
@property BOOL isAutosaving; // @synthesize isAutosaving=_isAutosaving;
@property BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property BOOL isValidated; // @synthesize isValidated=_isValidated;
@property(retain) NSURL *invariantURL; // @synthesize invariantURL=_invariantURL;
@property PVWindowController *parentWindowController; // @synthesize parentWindowController=_parentWindowController;
- (void)cancelWriting;
- (BOOL)canCancelWriting;
- (BOOL)writePDFToURL:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
- (BOOL)writeElementsAtIndexes:(id)arg1 asImageType:(id)arg2 toURL:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4;
- (id)bestTypeForWriting;
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
- (id)documentAttributes;
- (id)fileAttributes;
- (BOOL)validateSource:(id *)arg1;
- (BOOL)isContentLoadingContainer;
- (BOOL)isQuickLookContainer;
- (BOOL)isC3DContainer;
- (BOOL)isImageContainer;
- (BOOL)isPDFContainer;
- (id)Date;
- (id)author;
- (id)pageNumber;
- (id)lastElement;
- (id)firstElement;
- (BOOL)isValidFaxPrintPreviewFile;
- (BOOL)isBookKitFile;
- (BOOL)isOtherSpecialFile;
- (BOOL)isPrintPreviewFile;
- (BOOL)isUntitledFile;
- (BOOL)isPreviewTempFile;
- (BOOL)isRegularFile;
- (void)setAnnotationProperties:(id)arg1;
- (void)observeUndoManagerCheckpoint:(id)arg1;
@property(readonly) BOOL maintainsInvariantSource;
- (void)stopObservingAnnotations:(id)arg1;
- (void)startObservingAnnotations:(id)arg1;
- (id)errorForFailedValidationOfURL:(id)arg1;
- (void)controllerWillShowSignatureCaptureView:(id)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (void)controllerWillExitToolMode:(id)arg1;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerWillEnterToolMode:(id)arg1;
- (void)controller:(id)arg1 didPlaceSingleShotAnnotation:(id)arg2 onPageModelController:(id)arg3;
- (void)controller:(id)arg1 willPlaceSingleShotAnnotation:(id)arg2 onProposedPageModelController:(id *)arg3;
- (void)setPreferredCursor:(id)arg1 forAnnotationController:(id)arg2;
- (id)undoManagerForAnnotationController:(id)arg1;
- (struct CGRect)postioningRectForCandidatePicker;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)PDFPrintOperation;
- (id)_PDFExportPrintInfo;
- (void)imageSizeCalculator:(id)arg1 completedImage:(id)arg2;
- (void)saveOptionsChanged:(id)arg1;
- (BOOL)canCalculateEstimatedSize;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)setPrintInfo:(id)arg1;
- (id)printInfo;
- (void)close;
- (void)shouldCloseWindowController:(id)arg1 delegate:(id)arg2 shouldCloseSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)windowForSheet;
- (void)addWindowController:(id)arg1;
- (void)makeWindowControllers;
- (BOOL)checkAutosavingPossibilityAndReturnError:(id *)arg1;
- (BOOL)checkAutosavingSafetyAndReturnError:(id *)arg1;
- (BOOL)editingShouldAutomaticallyDuplicate;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)autosavingFileType;
- (void)_automaticallyDuplicateThenUpdateChangeCount:(unsigned long long)arg1;
- (id)duplicateAndReturnError:(id *)arg1;
- (void)duplicateDocumentWithDelegate:(id)arg1 didDuplicateSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)saveDocumentWithDelegate:(id)arg1 didSaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (id)fileAttributesToWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (id)fileTypeFromLastRunSavePanel;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)shouldRunSavePanelWithAccessoryView;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)canAsynchronouslyWriteToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3;
- (void)autosaveWithImplicitCancellability:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)autosaveDocumentWithDelegate:(id)arg1 didAutosaveSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)moveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 delegate:(id)arg4 didSaveSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)saveToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveDocument:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)dataRepresentationOfType:(id)arg1;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)updateChangeCount:(unsigned long long)arg1;
- (void)_resetInvariantIfNecessary;
- (void)_createInvariantIfNecessary;
- (void)_updateDocumentEditedAndAnimate:(BOOL)arg1;
- (void)_synchronizeWindowTitles;
- (BOOL)isEntireFileLoaded;
- (void)setFileTypeWithUndoAndSave:(id)arg1;
- (id)fileURL;
- (void)ensureAnnotationControllerExists;
- (id)defaultSaveAsProperties;
- (id)subtitleForElement:(id)arg1;
- (long long)printPreviewClientPID;
- (BOOL)isEncrypted;
@property(readonly) NSURL *sourceURL;
- (id)fileReferenceURL;
- (id)url;
- (unsigned long long)ordinalID;
- (id)uniqueID;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)_removeTemporaryFiles;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 parentWindowController:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(BOOL)arg5 error:(id *)arg6;
- (void)replacePersistentViewStateWithID:(id)arg1 forURL:(id)arg2;
- (void)stopViewStateFlushTimerAndFlushImmediately;
- (void)writeViewStateToPersistentStorageForURL:(id)arg1;
- (void)readViewStateFromPersistentStorage;
@property(retain) NSDictionary *UIPropertiesDictionary;
@property BOOL subtoolbarShown;
@property long long presentationMode;
@property long long pageViewMode;
@property struct CGPoint zoomCenter;
@property unsigned long long elementIndex;
@property BOOL autoResizes;
@property double uiZoomFactor;
- (id)uiAdditionsPropertyDictionary;
@property(retain) NSDictionary *lastWrittenUiAdditionsPropertyDictionary;
@property(retain) NSTimer *viewStateFlushTimer;
- (void)_startViewStateFlushTimer;
- (void)_viewStateFlushTimerFired:(id)arg1;
- (void)_pruneOldViewStatePrefs;
- (void)_writeViewState:(id)arg1 forURL:(id)arg2;
@property(readonly) BOOL freeTextAnnotationFontSizeIsAffectedByViewSize;
@property(nonatomic) double freeTextAnnotationFontSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

