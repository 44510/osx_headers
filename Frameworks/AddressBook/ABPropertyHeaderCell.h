//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderCell.h"

@class NSPopUpButtonCell, NSTableColumn;

@interface ABPropertyHeaderCell : NSTableHeaderCell
{
    NSPopUpButtonCell *_popup;
    NSTableColumn *_currentColumn;
}

- (id)popup;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isPoint:(struct CGPoint)arg1 inRectangle:(struct CGRect)arg2;
- (void)selectItemWithIdentifier:(id)arg1;
- (void)_selectItem:(id)arg1;
- (void)addItemWithTitle:(id)arg1 andIdentifier:(id)arg2;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)setTitle:(id)arg1 ofItemWithIdentifier:(id)arg2;
- (long long)indexOfIdentifier:(id)arg1;
- (void)removeAllItems;
- (void)setFont:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4 inColumn:(id)arg5;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

@end

