//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLayouting.h"
#import "NSCoding.h"

@class CPDefinitionTree, GScale, GSpace, NSArray, NSBezierPath, NSImage, NSMutableArray, NSMutableDictionary, NSView;

@interface GView : NSObject <GLayouting, NSCoding>
{
    struct CGRect mFrame;
    struct CGRect mBounds;
    unsigned long long mDim;
    GSpace *mSpace;
    CPDefinitionTree *mParentDefinitionTree;
    NSMutableArray *mObjects;
    NSMutableArray *mCursors;
    NSArray *mScales;
    GScale *mCurrentScale;
    BOOL mScaleWithWindow;
    NSMutableDictionary *mAttributes;
    id mTempFirstAxis;
    NSImage *mTempClippedImage;
    BOOL mTempPenDown;
    NSBezierPath *mTempPath;
    NSImage *mTempImage;
    NSView *mView;
    struct CGSize mDuplicateOffset;
    struct CGSize mPasteOffset;
}

+ (struct CGRect)correctedRect:(struct CGRect)arg1;
+ (id)viewWithFrame:(struct CGRect)arg1;
+ (id)defaultViewAttributes;
- (void)contentDidChange;
- (id)internalName;
- (void)selectionDidChange:(id)arg1;
- (void)duplicateSelectedObjects;
- (BOOL)dropFiles:(id)arg1 at:(struct CGPoint)arg2 reference:(BOOL)arg3;
- (void)dropContentOfPasteboard:(id)arg1 at:(struct CGPoint)arg2;
- (void)pasteContentOfPasteboard:(id)arg1;
- (void)pasteContentOfPasteboard:(id)arg1 givenPosition:(BOOL)arg2 at:(struct CGPoint)arg3;
- (void)setDuplicating:(BOOL)arg1;
- (BOOL)canPasteContentOfPasteboard:(id)arg1;
- (id)recognizedPasteboardTypes;
- (BOOL)canInsertImages;
- (id)objectsFromData:(id)arg1;
- (void)copySelectedObjectsToPasteboard:(id)arg1;
- (id)dataForSelectedObjects;
- (id)viewPboardType;
- (void)takeLayoutFrom:(id)arg1;
- (void)addLayoutTo:(id)arg1;
- (struct CGPoint)lowerLeftCornerOfRect:(struct CGRect)arg1;
- (void)closeImage;
- (id)openImageWithRect:(struct CGRect)arg1;
- (void)drawImageFromCorner:(id)arg1;
- (struct CGPoint)lowerLeftCorner;
- (id)newImage;
- (BOOL)isFlipped;
- (void)unlockClip;
- (void)lockClip;
- (void)closePath;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)liftPen;
- (id)endPath;
- (void)startPath;
- (void)removeIntegratedArea;
- (BOOL)canRemoveIntegratedArea;
- (void)ungroupSelectedObjects;
- (void)groupSelectedObjects;
- (void)groupObjects:(id)arg1;
- (void)moveSelectedObjectsBackward;
- (void)moveSelectedObjectsForward;
- (void)moveSelectedObjectsToBack;
- (void)moveSelectedObjectsToFront;
- (void)moveObjectFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)setHairCross:(double *)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)addCursor:(id)arg1;
- (void)removeCursors;
- (void)recolorSelectedObjectsWithColorList:(id)arg1 attribute:(id)arg2;
- (void)moveSelectedObjectsBy:(struct CGSize)arg1;
- (void)deleteSelectedObjects;
- (void)deleteObjects:(id)arg1;
- (void)deleteObject:(id)arg1;
- (void)selectObjectsInRect:(struct CGRect)arg1 extend:(BOOL)arg2 multiple:(BOOL)arg3;
- (void)deselectAll;
- (void)selectAll;
- (void)setAllSelected:(BOOL)arg1;
- (id)selectedObjects;
- (void)orthonormalize;
- (void)center;
- (void)getFrameCartesianRanges:(struct _GRange *)arg1;
- (void)getFrameSize:(double *)arg1;
- (void)adjust;
- (void)zoom:(double)arg1;
- (void)adjustLimitCoord:(double *)arg1 kind:(int *)arg2 withMargin:(char *)arg3 coord:(double *)arg4 withObjectCoord:(double)arg5 kind:(int)arg6 max:(BOOL)arg7;
- (void)zoomBetween:(double *)arg1 and:(double *)arg2 notify:(BOOL)arg3;
- (void)zoomBetween:(double *)arg1 and:(double *)arg2;
- (void)zoomRect:(struct CGRect)arg1;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (BOOL)scaleShouldChange;
- (void)restoreAxisGridVisibility;
- (void)saveAxisGridVisibility;
- (void)boundsDidChange;
- (void)boundsDidChangeTriggerUndo:(BOOL)arg1;
- (void)boundsWillChange;
- (void)boundsWillChangeTriggerUndo:(BOOL)arg1;
- (BOOL)boundsShouldChange;
- (BOOL)unprojectPoint:(struct CGPoint)arg1 to:(double *)arg2;
- (struct CGPoint)project:(double *)arg1;
- (void)frameToCartesianCoord:(double *)arg1;
- (void)cartesianToFrameCoord:(double *)arg1;
- (void)addGrid:(id)arg1;
- (void)addAxis:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)insertObject:(id)arg1 inFrontOf:(id)arg2;
- (void)insertObject:(id)arg1 behind:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (void)objectsNeedsUpdate;
- (void)updateAxisLog;
- (void)updateAxisRanges;
- (unsigned long long)objectCount;
- (void)setScaleWithWindow:(BOOL)arg1;
- (BOOL)scaleWithWindow;
- (void)setScale:(id)arg1;
- (id)scaleWithInternalName:(id)arg1;
- (id)scale;
- (id)scales;
- (id)attributes;
- (void)setAttribute:(id)arg1 to:(id)arg2;
- (id)attribute:(id)arg1;
- (id)cursors;
- (id)objects;
- (id)space;
- (unsigned long long)dimension;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)boundsForFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDefinitionTree:(id)arg1;
- (id)definitionTree;
- (struct CGRect)frame;
- (struct CGRect)bounds;
- (void)dealloc;
- (void)setView:(id)arg1;
- (id)view;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)awake;
- (void)resetDuplicateOffset;
- (void)updateAxisRanges:(id)arg1;
- (void)alignObjects:(id)arg1;
- (BOOL)canAlignObjects;
- (id)objectsToAlign;

@end

