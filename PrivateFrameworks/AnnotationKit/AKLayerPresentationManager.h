//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AKPageController, AKPageModelController, CALayer, NSMapTable;

@interface AKLayerPresentationManager : NSObject
{
    BOOL _shouldPixelate;
    BOOL _isObservingModel;
    AKPageController *_pageController;
    CALayer *_rootLayer;
    double _currentScaleFactor;
    NSMapTable *_annotationsToAnnotationLayers;
    NSMapTable *_annotationsToAdornmentLayers;
    CALayer *_cropAnnotationLayer;
    CALayer *_cropAdornmentLayer;
    AKPageModelController *_pageModelController;
}

@property BOOL isObservingModel; // @synthesize isObservingModel=_isObservingModel;
@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property(retain) CALayer *cropAdornmentLayer; // @synthesize cropAdornmentLayer=_cropAdornmentLayer;
@property(retain) CALayer *cropAnnotationLayer; // @synthesize cropAnnotationLayer=_cropAnnotationLayer;
@property(retain) NSMapTable *annotationsToAdornmentLayers; // @synthesize annotationsToAdornmentLayers=_annotationsToAdornmentLayers;
@property(retain) NSMapTable *annotationsToAnnotationLayers; // @synthesize annotationsToAnnotationLayers=_annotationsToAnnotationLayers;
@property double currentScaleFactor; // @synthesize currentScaleFactor=_currentScaleFactor;
@property(nonatomic) BOOL shouldPixelate; // @synthesize shouldPixelate=_shouldPixelate;
@property(retain) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
- (void).cxx_destruct;
- (void)_removeAdornmentLayerForAnnotation:(id)arg1;
- (void)_addAdornmentLayerForAnnotation:(id)arg1;
- (void)_removeLayerForAnnotation:(id)arg1;
- (void)_addLayerForAnnotation:(id)arg1;
- (void)_stopObservingModel;
- (void)_startObservingModel;
- (double)_hiDPIScaleFactor;
- (void)_applyUpdatesWithScale:(double)arg1 toLayers:(id)arg2 isLiveUpdate:(BOOL)arg3;
- (void)_setNeedsDisplayOnNewLayer:(id)arg1;
- (void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg1;
- (void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)layerForAnnotation:(id)arg1;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

@end

