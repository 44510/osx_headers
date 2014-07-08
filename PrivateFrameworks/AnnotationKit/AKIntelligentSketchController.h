//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKSmoothPathViewDelegate.h"
#import "NSPopoverDelegate.h"

@class AKAnnotation, AKCandidatePickerViewController, AKController, AKSmoothPathView, CHDrawing, NSPopover, NSString;

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate, NSPopoverDelegate>
{
    AKSmoothPathView *_intelligentSketchOverlayView;
    double _veryHighConfidenceLevel;
    AKController *_controller;
    CHDrawing *_lastDrawing;
    AKAnnotation *_candidateAnnotation;
    NSPopover *_candidatePopover;
    AKCandidatePickerViewController *_candidateViewController;
}

@property(retain) AKCandidatePickerViewController *candidateViewController; // @synthesize candidateViewController=_candidateViewController;
@property(retain) NSPopover *candidatePopover; // @synthesize candidatePopover=_candidatePopover;
@property __weak AKAnnotation *candidateAnnotation; // @synthesize candidateAnnotation=_candidateAnnotation;
@property(retain) CHDrawing *lastDrawing; // @synthesize lastDrawing=_lastDrawing;
@property __weak AKController *controller; // @synthesize controller=_controller;
@property double veryHighConfidenceLevel; // @synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel;
@property(retain, nonatomic) AKSmoothPathView *intelligentSketchOverlayView; // @synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (id)_trianglePathForDrawing:(id)arg1 withExif:(long long)arg2;
- (void)_logAllResults:(id)arg1;
- (BOOL)_isResultVeryHighConfidence:(id)arg1;
- (id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawing:(id)arg2;
- (id)_bestConvertedBounds:(struct CGRect)arg1 outBounds:(struct CGRect *)arg2;
- (long long)_toolTagForCHRecognitionResult:(id)arg1;
- (void)_idealPositioningOptionsForAnnotation:(id)arg1 fromDrawing:(id)arg2 rect:(struct CGRect *)arg3 edge:(unsigned long long *)arg4 orientation:(long long *)arg5;
- (void)_teardownCandidatePicker;
- (void)_showCandidatePickerWithTypes:(id)arg1 forDrawing:(id)arg2;
- (void)inputView:(id)arg1 didCollectDrawing:(id)arg2;
- (void)inputViewWillStartDrawing:(id)arg1;
- (void)logLastDrawingToDisk;
- (void)dismissCandidatePicker;
- (BOOL)isShowingCandidatePicker;
- (void)updateStrokeAttributes;
- (void)handleForwardedEvent:(id)arg1;
- (void)removeOverlay;
- (void)showOverlay;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
