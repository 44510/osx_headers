//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MKAnnotationRepresentation.h"
#import "MKLocatableObject.h"

@class GEORouteMatch, MKAnnotationManager, MKCalloutView, MKUserLocationAnnotationViewProxy, NSColor, NSImage, NSString, VKAnchorWrapper, _MKAnnotationViewAnchor;

@interface MKAnnotationView : NSView <MKAnnotationRepresentation, MKLocatableObject>
{
    BOOL _customTransformApplied;
    BOOL _internalTransformApplied;
    BOOL _animatingToCoordinate;
    BOOL _tracking;
    CDStruct_2c43369c _presentationCoordinate;
    double _presentationCourse;
    CDUnknownBlockType _presentationCoordinateChangedCallback;
    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    double _rotationRadians;
    _MKAnnotationViewAnchor *_anchor;
    GEORouteMatch *_routeMatch;
    double _mapRotationRadians;
    BOOL _explicitlyHidden;
    BOOL _hiddenForOffscreen;
    BOOL _hiddenForInvalidPoint;
    double _mapPitchRadians;
    unsigned long long _mapDisplayStyle;
    MKAnnotationManager *_annotationManager;
    id <MKAnnotation> _annotation;
    MKCalloutView *_calloutView;
    NSView *_leftCalloutAccessoryView;
    NSView *_rightCalloutAccessoryView;
    NSView *_detailCalloutAccessoryView;
    NSString *_reuseIdentifier;
    NSImage *_image;
    unsigned long long _mapType;
    unsigned long long _zIndex;
    struct CGPoint _centerOffset;
    struct CGPoint _calloutOffset;
    struct CGPoint _leftCalloutOffset;
    struct CGPoint _rightCalloutOffset;
    unsigned long long _dragState;
    CDUnknownBlockType _calloutHitTest;
    struct {
        unsigned int disabled:1;
        unsigned int selected:1;
        unsigned int canShowCallout:1;
        unsigned int isHighlighted:1;
        unsigned int canDisplayDisclosureInCallout:1;
        unsigned int canDisplayPlacemarkInCallout:1;
        unsigned int draggable:1;
    } _flags;
    NSColor *_leftCalloutAccessoryViewBackgroundColor;
}

+ (BOOL)_followsTerrain;
+ (unsigned long long)_selectedZIndex;
+ (unsigned long long)_zIndex;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)droppedPinTitle;
+ (id)currentLocationTitle;
@property(nonatomic, getter=_isHiddenForInvalidPoint, setter=_setHiddenForInvalidPoint:) BOOL hiddenForInvalidPoint; // @synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint;
@property(nonatomic, getter=_mapDisplayStyle, setter=_setMapDisplayStyle:) unsigned long long mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property(nonatomic, getter=_mapPitchRadians, setter=_setMapPitchRadians:) double mapPitchRadians; // @synthesize mapPitchRadians=_mapPitchRadians;
@property(nonatomic, getter=_mapRotationRadians, setter=_setMapRotationRadians:) double mapRotationRadians; // @synthesize mapRotationRadians=_mapRotationRadians;
@property(retain, nonatomic, setter=_setRouteMatch:) GEORouteMatch *_routeMatch; // @synthesize _routeMatch;
@property(retain, nonatomic) NSColor *leftCalloutAccessoryViewBackgroundColor; // @synthesize leftCalloutAccessoryViewBackgroundColor=_leftCalloutAccessoryViewBackgroundColor;
@property(retain, nonatomic) NSView *detailCalloutAccessoryView; // @synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView;
@property(retain, nonatomic) NSView *rightCalloutAccessoryView; // @synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView;
@property(retain, nonatomic) NSView *leftCalloutAccessoryView; // @synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView;
@property(nonatomic) struct CGPoint rightCalloutOffset; // @synthesize rightCalloutOffset=_rightCalloutOffset;
@property(nonatomic) struct CGPoint leftCalloutOffset; // @synthesize leftCalloutOffset=_leftCalloutOffset;
@property(copy, nonatomic) CDUnknownBlockType _calloutHitTest; // @synthesize _calloutHitTest;
@property(nonatomic, getter=_isTracking, setter=_setTracking:) BOOL _tracking; // @synthesize _tracking;
@property(nonatomic, getter=_isAnimatingToCoordinate, setter=_setAnimatingToCoordinate:) BOOL _animatingToCoordinate; // @synthesize _animatingToCoordinate;
@property(nonatomic, setter=_setPresentationCourse:) double _presentationCourse; // @synthesize _presentationCourse;
@property(copy, nonatomic, setter=_setPresentationCoordinateChangedCallback:) CDUnknownBlockType _presentationCoordinateChangedCallback; // @synthesize _presentationCoordinateChangedCallback;
@property(nonatomic, setter=_setAnnotationManager:) __weak MKAnnotationManager *_annotationManager; // @synthesize _annotationManager;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (BOOL)accessibilityIsIgnored;
@property struct CGPoint center;
- (void)_didUpdatePosition;
- (void)_updateFromMap;
- (double)_pointsForDistance:(double)arg1;
- (id)_vkMarker;
- (id)_containerView;
- (BOOL)_canChangeOrientation;
- (unsigned long long)_orientationCount;
- (BOOL)_hasAlternateOrientation;
- (void)_transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (void)_enableRotationForHeadingMode:(double)arg1;
- (id)_annotationContainer;
- (void)setHidden:(BOOL)arg1;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (void)_resetZIndex;
- (void)_setZIndex:(unsigned long long)arg1;
- (void)_setZIndex:(unsigned long long)arg1 notify:(BOOL)arg2;
- (unsigned long long)_zIndex;
- (void)_setMapType:(unsigned long long)arg1;
- (unsigned long long)_mapType;
- (BOOL)isPersistent;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (BOOL)_canDisplayPlacemarkInCallout;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (BOOL)_canDisplayDisclosureInCallout;
- (void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned long long dragState;
@property(nonatomic, getter=isDraggable) BOOL draggable;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) struct CGRect _significantFrame;
@property(readonly, nonatomic, getter=_significantBounds) struct CGRect significantBounds;
- (struct CGRect)_mapkit_visibleRect;
@property(readonly, nonatomic) MKUserLocationAnnotationViewProxy *_userLocationProxy;
@property(readonly, nonatomic) VKAnchorWrapper *anchor;
@property(nonatomic, setter=_setPresentationCoordinate:) CDStruct_c3b9c2ee _presentationCoordinate; // @synthesize _presentationCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(nonatomic) struct CGPoint calloutOffset;
@property(nonatomic) struct CGPoint centerOffset;
- (struct CGPoint)_draggingDropOffset;
@property(nonatomic) BOOL canShowCallout;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(retain, nonatomic) NSImage *image;
- (id)_contentLayer;
- (id)hitTest:(struct CGPoint)arg1;
- (void)_setCalloutView:(id)arg1;
- (id)_calloutView;
@property(retain, nonatomic) id <MKAnnotation> annotation;
- (void)prepareForReuse;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

