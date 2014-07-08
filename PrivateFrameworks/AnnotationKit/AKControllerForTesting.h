//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKController.h>

@class AKActionController, AKAttributeController, AKCursorController_Mac, AKFontUIController_Mac, AKIntelligentSketchController, AKMainEventHandler, AKModelController, AKSignatureModelController, AKToolController, AKUndoController, NSView;

@interface AKControllerForTesting : AKController
{
    id <AKControllerDelegateProtocol> _testingDelegate;
    AKModelController *_testingModelController;
    AKActionController *_testingActionController;
    AKToolController *_testingToolController;
    AKAttributeController *_testingAttributeController;
    AKUndoController *_testingUndoController;
    AKMainEventHandler *_testingMainEventHandler;
    NSView *_testingToolbarView;
    NSView *_testingOverlayView;
    AKIntelligentSketchController *_testingIntelligentSketchController;
    AKSignatureModelController *_testingSignatureModelController;
    AKCursorController_Mac *_testingCursorController;
    AKFontUIController_Mac *_testingFontUIController;
}

@property(retain) AKFontUIController_Mac *testingFontUIController; // @synthesize testingFontUIController=_testingFontUIController;
@property(retain) AKCursorController_Mac *testingCursorController; // @synthesize testingCursorController=_testingCursorController;
@property(retain) AKSignatureModelController *testingSignatureModelController; // @synthesize testingSignatureModelController=_testingSignatureModelController;
@property(retain) AKIntelligentSketchController *testingIntelligentSketchController; // @synthesize testingIntelligentSketchController=_testingIntelligentSketchController;
@property(retain) NSView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property(retain) NSView *testingToolbarView; // @synthesize testingToolbarView=_testingToolbarView;
@property(retain) AKMainEventHandler *testingMainEventHandler; // @synthesize testingMainEventHandler=_testingMainEventHandler;
@property(retain) AKUndoController *testingUndoController; // @synthesize testingUndoController=_testingUndoController;
@property(retain) AKAttributeController *testingAttributeController; // @synthesize testingAttributeController=_testingAttributeController;
@property(retain) AKToolController *testingToolController; // @synthesize testingToolController=_testingToolController;
@property(retain) AKActionController *testingActionController; // @synthesize testingActionController=_testingActionController;
@property(retain) AKModelController *testingModelController; // @synthesize testingModelController=_testingModelController;
@property(retain) id <AKControllerDelegateProtocol> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void).cxx_destruct;
- (id)fontUIController;
- (id)cursorController;
- (id)signatureModelController;
- (id)intelligentSketchController;
- (id)mainEventHandler;
- (id)undoController;
- (id)attributeController;
- (id)toolController;
- (id)actionController;
- (id)overlayView;
- (id)toolbarView;
- (id)modelController;
- (id)delegate;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)validateSender:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)setOverlayShouldPixelate:(BOOL)arg1;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2;
- (id)init;

@end
