//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TIconAndTextCell.h>

@class FI_IActionButtonCell;

__attribute__((visibility("hidden")))
@interface FI_TIconAndTextWithActionCell : FI_TIconAndTextCell
{
    struct TNSRef<FI_IActionButtonCell *> _actionButtonCell;
    double _textToActionBtnSpacing;
}

@property(nonatomic) double textToActionBtnSpacing; // @synthesize textToActionBtnSpacing=_textToActionBtnSpacing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)addTrackingAreasForView:(id)arg1 inFrame:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)actionButtonFrameForBounds:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (_Bool)isMouseInActionButton:(id)arg1;
- (struct CGRect)cellFrameFromMouseEvent:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setActionBtnAction:(SEL)arg1;
- (void)setActionBtnTarget:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) FI_IActionButtonCell *actionButtonCell; // @dynamic actionButtonCell;
- (void)setControlView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)initCommon;

@end

