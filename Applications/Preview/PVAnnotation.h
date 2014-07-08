//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class NSColor, NSDate, NSNumber, NSObject<PVMediaElement>, NSString, PDFAnnotationPopup;

@interface PVAnnotation : NSObject <NSCopying, NSCoding, NSPasteboardReading, NSPasteboardWriting>
{
    NSObject<PVMediaElement> *_parentElement;
    BOOL _selectionDrawingEnabled;
}

+ (struct CGRect)boundsOfAnnotations:(id)arg1 coordinateTransformer:(CDUnknownBlockType)arg2;
+ (void)translateAnnotations:(id)arg1 byX:(double)arg2 andY:(double)arg3 viewSpaceConverter:(CDUnknownBlockType)arg4;
+ (id)mostRecentlyModifiedAnnotationOfType:(unsigned long long)arg1 inArray:(id)arg2;
+ (void)setPersistentArrowStyle:(unsigned long long)arg1 forType:(unsigned long long)arg2;
+ (unsigned long long)persistentArrowStyleForType:(unsigned long long)arg1;
+ (unsigned long long)persistentTextStyleForType:(unsigned long long)arg1;
+ (void)setPersistentTextStyle:(unsigned long long)arg1 forType:(unsigned long long)arg2;
+ (unsigned long long)persistentTextAlignmentForType:(unsigned long long)arg1;
+ (void)setPersistentTextAlignment:(unsigned long long)arg1 forType:(unsigned long long)arg2;
+ (void)setPersistentFont:(id)arg1 forType:(unsigned long long)arg2;
+ (id)persistentFontForType:(unsigned long long)arg1;
+ (void)setPersistentShadowedState:(BOOL)arg1 forType:(unsigned long long)arg2;
+ (BOOL)persistentShadowedStateForType:(unsigned long long)arg1;
+ (void)setPersistentDashedState:(BOOL)arg1 forType:(unsigned long long)arg2;
+ (BOOL)persistentDashedStateForType:(unsigned long long)arg1;
+ (void)setPersistentLineWidth:(double)arg1 forType:(unsigned long long)arg2;
+ (double)persistentLineWidthForType:(unsigned long long)arg1;
+ (void)setPersistentInteriorColor:(id)arg1 forType:(unsigned long long)arg2;
+ (id)persistentInteriorColorForType:(unsigned long long)arg1;
+ (void)setPersistentColor:(id)arg1 forType:(unsigned long long)arg2;
+ (id)persistentColorForType:(unsigned long long)arg1;
+ (unsigned long long)mapTypeToTypeForColorGroup:(unsigned long long)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)presentablePropertyNameForKey:(id)arg1;
+ (id)dashPatternForLineWidth:(double)arg1;
+ (id)defaultMarkupTextContents;
+ (id)defaultTextContents;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)annotationOfType:(unsigned long long)arg1 withBounds:(struct CGRect)arg2;
+ (Class)bestPDFAnnotationClassToRepresentAKAnnotation:(id)arg1;
+ (Class)classForPDFAnnotationClass:(Class)arg1;
@property BOOL selectionDrawingEnabled; // @synthesize selectionDrawingEnabled=_selectionDrawingEnabled;
@property NSObject<PVMediaElement> *parentElement; // @synthesize parentElement=_parentElement;
- (struct CGImage *)CGImageRepresentation;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (BOOL)hitTestAtPoint:(struct CGPoint)arg1 inView:(id)arg2 isSelected:(BOOL)arg3;
- (void)drawInSelectedStateInView:(id)arg1;
- (void)drawThickSelectionBorderInView:(id)arg1;
- (void)drawHandleInView:(id)arg1 atPoint:(struct CGPoint)arg2;
@property(readonly) double selectionDrawingOutsetY;
@property(readonly) double selectionDrawingOutsetX;
@property(readonly) struct CGRect selectionBounds;
@property(readonly) struct CGRect drawingBounds;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (void)removeAllAppearanceStreams;
- (void)moveToPoint:(struct CGPoint)arg1;
@property(readonly) BOOL isFormElement;
- (struct CGPath *)newMarkupPathForHitTestingAtZoomFactor:(double)arg1;
- (struct CGPath *)newMarkupPath;
@property(readonly) NSString *markupText;
- (void)setMarkupCharacterIndexes:(id)arg1;
- (id)markupCharacterIndexes;
@property(retain) NSString *contents;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(readonly) BOOL supportsEndpoints;
@property(readonly) PDFAnnotationPopup *popup;
@property struct CGRect popupBounds;
@property BOOL popupIsOpen;
@property BOOL hasPopup;
- (BOOL)supportsPopup;
@property long long iconType;
@property(readonly) BOOL supportsIconType;
@property BOOL hasShadow;
@property(readonly) BOOL supportsShadow;
@property BOOL isDashed;
@property double lineWidth;
@property(readonly) BOOL supportsBorder;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isEditable;
@property(readonly) unsigned long long handleLocations;
@property(readonly) BOOL canMove;
@property(readonly) BOOL canResize;
@property struct CGRect bounds;
@property(readonly) id pageNumber;
@property(readonly) NSNumber *pageIndex;
@property(retain) NSColor *interiorColor;
@property(readonly) BOOL supportsInteriorColor;
@property(retain) NSColor *color;
@property(readonly) BOOL supportsColor;
@property(readonly) NSString *displayName;
@property(readonly) NSString *authorAndDateString;
@property(retain) NSDate *date;
@property(copy) NSString *author;
- (void)setNilValueForKey:(id)arg1;
@property long long markupType;
@property(readonly) BOOL isMarkupType;
@property(readonly) unsigned long long type;
@property(readonly) unsigned long long encodedParentElement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) BOOL supportsNSCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

