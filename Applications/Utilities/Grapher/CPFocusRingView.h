//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

@interface CPFocusRingView : NSView
{
    BOOL mLargeFocus;
    NSButton *mEquationsButton;
}

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)display;
- (void)setNeedsDisplay:(BOOL)arg1;
- (struct CGRect)frameInSuperview;
- (void)drawInteriorWithRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)hasFocus;
- (void)dealloc;
- (void)pickEquationPalettePopupItem:(id)arg1;
- (void)installEqPalettePopupButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)windowDidChangeStatus:(id)arg1;
- (BOOL)hasLargeFocus;

@end

