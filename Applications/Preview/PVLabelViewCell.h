//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSActionCell.h"

@class NSMutableArray;

@interface PVLabelViewCell : NSActionCell
{
    NSMutableArray *_partItems;
    long long _selectedParts;
    long long _hoveredPart;
    unsigned long long _imagePosition;
    BOOL _allowsMultipleSelection;
    long long _focusedPart;
}

@property BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property unsigned long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property long long hoveredPart; // @synthesize hoveredPart=_hoveredPart;
@property long long focusedPart; // @dynamic focusedPart;
- (void)performClick:(id)arg1;
@property long long numParts; // @dynamic numParts;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)mouseExited:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)mouseEntered:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)_handleMouseMovedForEvent:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_currentLabelName;
- (id)_nameForLabelPart:(long long)arg1;
- (long long)_partAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (void)_drawPart:(long long)arg1 withFrame:(struct CGRect)arg2;
- (void)_drawBackgroundForPartRect:(struct CGRect)arg1 isPressedOrHovered:(BOOL)arg2;
- (struct CGRect)_boundsForLabel:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)_labelAttributes;
- (struct CGRect)part:(long long)arg1 boundsWithFrame:(struct CGRect)arg2;
- (BOOL)_isHoveredPart:(long long)arg1;
@property long long selectedParts; // @dynamic selectedParts;
- (void)setLabel:(id)arg1 forPart:(long long)arg2;
- (id)labelForPart:(long long)arg1;
- (void)setImage:(id)arg1 forPart:(long long)arg2;
- (id)imageForPart:(long long)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)_valueChanged:(id)arg1;
- (void)_deselectPart:(long long)arg1;
- (void)_selectPart:(long long)arg1;
- (BOOL)_isSelectedPart:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonDealloc;
- (void)_commonInit;

@end

