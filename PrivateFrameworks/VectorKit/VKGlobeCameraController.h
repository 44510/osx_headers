//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import "VKInteractiveCameraController.h"

@class GEOMapRegion, NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController : VKScreenCameraController <VKInteractiveCameraController>
{
    struct GlobeView *_globeView;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
}

@property(nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (double)zoomForMapRegion:(id)arg1;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double pitch;
- (void)updateCameraManager;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setGesturing:(BOOL)arg1;
- (void)_update3DState;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (BOOL)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)stopGlobeAnimations;
- (void)stopSearchResultAnimation;
- (BOOL)isFlyoverTourStarted;
- (void)stopFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showSearchResultAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withZoom:(double)arg2;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3;
- (void)rotateTo:(double)arg1 animated:(BOOL)arg2;
- (BOOL)snapMapIfNecessary:(const struct VKPoint *)arg1 animated:(BOOL)arg2;
- (double)altitude;
- (void)setCenterCoordinate:(CDStruct_071ac149)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) CDStruct_071ac149 centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (struct CGPoint)_scaledScreenPointForPoint:(struct CGPoint)arg1;
- (struct Vector2i)_cursorFromScreenPoint:(struct CGPoint)arg1;
- (struct CGPoint)_centerScreenPoint;
- (void)updateGlobeFromCamera;
- (long long)maximumNormalizedZoomLevel;
- (long long)minimumNormalizedZoomLevel;
- (long long)tileSize;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (BOOL)currentZoomLevelAllowsRotation;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

