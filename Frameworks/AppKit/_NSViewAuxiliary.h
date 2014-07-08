//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIFilter, NSAppearance, NSArray, NSBezierPath, NSColor, NSColorSpace, NSDictionary, NSMenu, NSMutableArray, NSMutableSet, NSShadow, NSString, NSSurface, NSViewController, _NSBindingAdaptor, _NSIdleTimer, _NSViewAnimator, _NSViewLayoutAux;

@interface _NSViewAuxiliary : NSObject
{
    struct {
        unsigned int _liveResizeImageCanBeCachedInStart:1;
        unsigned int _liveResizeActive:1;
        unsigned int _usesQuickdraw:1;
        unsigned int _hidden:1;
        unsigned int _hiddenOrHasHiddenAncestor:1;
        unsigned int _reallyNeedsDisplayForBounds:1;
        unsigned int _focusRingType:2;
        unsigned int _drawWithTintWhenHidden:1;
        unsigned int _impactsWindowMoving:1;
        unsigned int _drawsOwnDescendants:1;
        unsigned int _drawnByAncestor:1;
        unsigned int _setFrameWillAutoInvalidate:1;
        unsigned int _drawingByHIView:1;
        unsigned int _supressViewWillDrawRecursion:1;
        unsigned int _revealoverComputationEnabled:1;
        unsigned int _revealoverComputationNeeded:1;
        unsigned int _revealoversWanted:1;
        unsigned int _hasDrawDelegate:1;
        unsigned int _fontSmoothingBackgroundColorSet:1;
        unsigned int _ignoreForKeyViewLoop:1;
        unsigned int _searchingForKeyViewReplacement:1;
        unsigned int _hasMultiClipDrawingHelper:1;
        unsigned int _displayingAllDirty:1;
        unsigned int _focusRingNeedsDisplayOutsideSelf:1;
        unsigned int _invalidTrackingRects:1;
        unsigned int _invalidCursorRects:1;
        unsigned int _wantsLayer:1;
        unsigned int _layerBacked:1;
        unsigned int _layerNeedsDisplay:1;
        unsigned int _dontSuppressLayerAnimation:1;
        unsigned int _canDrawConcurrently:1;
    } _vFlags2;
    struct {
        unsigned int _appkitManagesLayer:1;
        unsigned int _shouldRemoveAtEndOfAnimation:1;
        unsigned int _viewGoingFromHiddenToUnhidden:1;
        unsigned int _cachedVisibleRectValueIsValid:1;
        unsigned int _layerTreeRendererSurfaceGone:1;
        unsigned int _layerTreeRendererNeedsUpdate:1;
        unsigned int _layerTreeRendererPaused:1;
        unsigned int _hasDrawMatrix:1;
        unsigned int _detachingFromWindow:1;
        unsigned int _anySubviewExceedsSelfsBoundsBitIsValid:1;
        unsigned int _anySubviewExceedsSelfsBounds:1;
        unsigned int _drawsNothing:1;
        unsigned int _registeredForViewDidChangeNotification:1;
        unsigned int _overridesNeedsDisplay:1;
        unsigned int _someDescendantMightOverrideNeedsDisplay:1;
        unsigned int _isWebClipView:1;
        unsigned int _checkedIfWebFrameView:1;
        unsigned int _isWebFrameView:1;
        unsigned int _layersFrozenForTransplant:1;
        unsigned int _anyDescendantCanDrawConcurrently:1;
        unsigned int _cachedShouldUseTrackingAreasForToolTips:1;
        unsigned int _shouldUseTrackingAreasForToolTips:1;
        unsigned int _layerContentsRedrawPolicy:3;
        unsigned int _layerContentsPlacement:4;
        unsigned int _explicitSurfaceColorSpace:1;
    } _vFlags3;
    struct {
        unsigned int _acceptsTouches:1;
        unsigned int _wantsRestingTouches:1;
        unsigned int _liveAnimationActive:1;
        unsigned int _surfaceSyncPostponed:1;
        unsigned int _needsRedrawBeforeFirstLiveResizeCache:1;
        unsigned int _viewDying:1;
        unsigned int _hasNSViewBackingLayer:1;
        unsigned int _automaticFocusRingDisabled:1;
        unsigned int _unused:1;
        unsigned int _layoutIsClean:1;
        unsigned int _subviewLayoutIsClean:1;
        unsigned int _layingOutFromConstraints:1;
        unsigned int _hasInvalidRestorableState:1;
        unsigned int _hasEverHadInvalidRestorableState:1;
        unsigned int _layoutFlushingDisabled:1;
        unsigned int _contentSizeConstraintsAreClean:1;
        unsigned int _constraintsAreClean:1;
        unsigned int _subviewLayoutConstraintsAreClean:1;
        unsigned int _hasDetectedNonSavvyLayoutOverride:1;
        unsigned int _hasEverBeenRotatedOrScaledFromBase:1;
        unsigned int _isDrawingIntoLayer:1;
        unsigned int _wantsBestResolutionOpenGLSurface:1;
        unsigned int _isSurfaceBacked:1;
        unsigned int _drewIntoBackingSurface:1;
        unsigned int _semanticContext:3;
        unsigned int _semanticContextExplicitSomewhereInChain:1;
        unsigned int _hasInputContext:1;
        unsigned int _checkedForInputContext:1;
    } _vFlags4;
    struct {
        unsigned int _hasLastIdleLiveResizeInvalidationDate:1;
        unsigned int _hasLiveResizeCachedImage:1;
        unsigned int _supportsDirectLayerContentsCache:2;
        unsigned int _animatingFrameSize:1;
        unsigned int _hasIncompatibleAppearanceOverride:1;
        unsigned int _dontArchiveAsSubview:1;
        unsigned int _usesPointIntegralizationForLayout:1;
        unsigned int _shouldCallDrawLayer:1;
        unsigned int _hasCanDrawSubviewsIntoLayerAncestor:1;
        unsigned int _hasAutoCanDrawSubviewsIntoLayer:1;
        unsigned int _unused1:1;
        unsigned int _unused2:1;
        unsigned int _unused3:1;
        unsigned int _hasAutoSetWantsLayer:1;
        unsigned int _autoSettingWantsLayer:1;
        unsigned int _backgroundFiltersUseCIFilter:1;
        unsigned int _contentFiltersUseCIFilter:1;
        unsigned int _compositingFilterIsCIFilter:1;
        unsigned int _layerUsesCIFilter:1;
        unsigned int _hasSuspendedWindowServerLayerHosting:1;
        unsigned int _clipsToBounds:1;
        unsigned int _willInvalidateFocus:1;
        unsigned int _hasAccessibilityUIElementSpecifier:1;
    } _vFlags5;
    unsigned int _isScrolling:1;
    unsigned int _cachedWantsToPrefetchContent:1;
    unsigned int _hasCachedVisibleRect:1;
    unsigned int _descendentHasCachedVisibleRect:1;
    unsigned int _trackingAreasDirty:4;
    unsigned int _isMagnifying:1;
    unsigned int _opaqueIsPropagatedToCAView:1;
    unsigned int _gesturesEnabled:1;
    unsigned int _excludeSubviewsInCacheDisplayInRect:1;
    unsigned int _dontAskSuperForReferenceColorCheck:1;
    unsigned int _hasVibrancyFilter:1;
    unsigned int _registeredWithBackdropView:1;
    unsigned int _hasCachedContainingBackdropView:1;
    unsigned long long _needsGeometryInWindowDidChangeNotificationCount;
    struct CGRect _cachedVisibleRect;
    _NSBindingAdaptor *_bindingAdaptor;
    struct _NSViewTrackingRect *_trackingRects;
    NSMenu *_menu;
    _NSViewLayoutAux *_layoutAux;
    struct CGPoint topLeft;
    struct CGRect _errorOffsets;
    struct CGSize oldSize;
    _NSViewAnimator *_animator;
    NSDictionary *_animationsDictionary;
    struct _CAView *_layerTreeRenderer;
    double _alphaValue;
    NSArray *_contentFilters;
    NSArray *_backgroundFilters;
    CIFilter *_compositingFilter;
    NSShadow *_shadow;
    NSSurface *_surface;
    NSColorSpace *_surfaceColorSpace;
    NSMutableSet *_trackingAreas;
    unsigned int _lastCAViewFlags;
    unsigned int _userInterfaceItemIdentifierInternalNumber;
    NSString *_userInterfaceItemIdentifier;
    NSBezierPath *_clipPath;
    struct {
        float last;
        float min;
        float max;
        float mean;
        float total;
        int count;
    } _drawRectTimeStats;
    CDUnknownBlockType _updateLayerHandler;
    NSAppearance *_appearance;
    NSAppearance *_cachedEffectiveAppearance;
    double _cornerRadius;
    NSColor *_backgroundColor;
    long long _enumeratingSubviewsCount;
    struct CGRect _preparedContentRect;
    struct CGRect _committedPreparedContentRect;
    _NSIdleTimer *_idleTimerMonitor;
    NSViewController *_viewController;
    NSMutableArray *_gestureRecognizers;
}

@end

