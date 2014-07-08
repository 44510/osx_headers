//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSAccessibilityNavigableStaticText.h"
#import "NSUserInterfaceValidations.h"

@class NSAttributedString, NSColor, NSString;

@interface NSTextField : NSControl <NSUserInterfaceValidations, NSAccessibilityNavigableStaticText>
{
    id _delegate;
    SEL _errorAction;
    double _maxLayoutWidth;
}

+ (void)initialize;
- (id)accessibilityValue;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (BOOL)_shouldPrintByCallingDrawRect;
- (double)baselineOffsetFromBottom;
- (BOOL)_baselineIsSpecialCasingForMiniFont;
- (CDStruct_3c058996)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)_updateLayoutDependentMetricsIfNeeded;
@property double preferredMaxLayoutWidth;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
@property(readonly) BOOL acceptsFirstResponder;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property id <NSTextFieldDelegate> delegate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (void)selectText:(id)arg1;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)setTitleWithMnemonic:(id)arg1;
- (id)previousText;
- (id)nextText;
- (void)setNextText:(id)arg1;
- (void)setPreviousText:(id)arg1;
@property unsigned long long bezelStyle;
- (void)setImportsGraphics:(BOOL)arg1;
- (BOOL)importsGraphics;
- (void)setAllowsEditingTextAttributes:(BOOL)arg1;
- (BOOL)allowsEditingTextAttributes;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isEditable) BOOL editable;
@property(getter=isBezeled) BOOL bezeled;
@property(getter=isBordered) BOOL bordered;
- (void)setEnabled:(BOOL)arg1;
@property(copy) NSColor *textColor;
@property BOOL drawsBackground;
@property(copy) NSColor *backgroundColor;
@property(copy) NSAttributedString *placeholderAttributedString;
@property(copy) NSString *placeholderString;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonTextFieldInit;
- (void)setErrorAction:(SEL)arg1;
- (SEL)errorAction;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

