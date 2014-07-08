//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageTextFieldCell.h"

@class NSButtonCell;

@interface TSidebarItemCell : NSImageTextFieldCell
{
    struct TFENode _node;
    int _zoneKind;
    _Bool _selected;
    NSButtonCell *_actionButtonCell;
    _Bool _rolloverActionButton;
    _Bool _trackingActionButton;
    int _actionKind;
    _Bool _isEditing;
    _Bool _hasCloudIcon;
}

+ (void)drawActionButton:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 inView:(id)arg3 actionButtonCell:(id)arg4 action:(int)arg5 mouseState:(int)arg6 highlighted:(_Bool)arg7;
+ (struct TFCGImage *)actionButtonLegacyCGImage:(long long)arg1;
+ (void)drawSidebarIcon:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 highlighted:(_Bool)arg4;
+ (struct TString)imageName:(const struct TString *)arg1 forSize:(struct CGSize)arg2;
+ (const struct TFENode *)nodeForItem:(id)arg1;
+ (struct CGRect)roughActionButtonRectForCell:(const struct CGRect *)arg1;
+ (unsigned long long)frameRateMicroseconds;
+ (BOOL)prefersTrackingUntilMouseUp;
@property(nonatomic) _Bool hasCloudIcon; // @synthesize hasCloudIcon=_hasCloudIcon;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) int zoneKind; // @synthesize zoneKind=_zoneKind;
@property(readonly, nonatomic) int actionKind; // @synthesize actionKind=_actionKind;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)prepareForDisplay:(int)arg1 isICloudLibrary:(_Bool)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)stopAnimatingIfNeeded;
- (void)startAnimatingIfNeeded;
- (_Bool)hasActionButton;
- (struct CGRect)actionButtonFrameForCellFrame:(struct CGRect)arg1;
- (id)actionButtonLegacyImage;
- (int)actionButtonMouseState;
- (void)actionButtonCoreUIOrLegacyImage:(int)arg1 coreUIName:(const struct __CFString **)arg2 appKitImageName:(id *)arg3 color:(struct TColor *)arg4 legacyImageID:(long long *)arg5 animate:(_Bool *)arg6;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct TString)imageName:(const struct TString *)arg1;
- (double)optimalWidthForHeight:(double)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)name;
- (_Bool)isZone;
- (id)description;
- (id)dataForIdentifier:(id)arg1;
- (long long)rowIndex;
- (id)sidebarController;
- (id)sidebar;
- (void)setControlView:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(const struct TFENode *)arg1 orZone:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)drawActionButton:(struct CGRect)arg1 inView:(id)arg2;
- (id)actionButtonCell;
- (_Bool)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(_Bool)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)addTrackingAreasForView:(id)arg1 inFrame:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)invalidateActionButtonAreaWithEvent:(id)arg1;

@end

