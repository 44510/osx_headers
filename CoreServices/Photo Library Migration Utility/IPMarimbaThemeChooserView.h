//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IPMarimbaHUDController, IPMarimbaThumbView, NSDictionary, NSMutableArray;

@interface IPMarimbaThemeChooserView : NSView
{
    long long _styleCount;
    long long _selectedStyleIndex;
    BOOL _fastSelection;
    IPMarimbaHUDController *_controller;
    NSMutableArray *_thumbViews;
    IPMarimbaThumbView *_playingMovie;
    long long _playingIndex;
    NSDictionary *_textAttrs;
    BOOL _showedDialog;
    id _target;
    SEL _action;
    id _doubleClickTarget;
    SEL _doubleClickAction;
}

- (void)axUIElement:(id)arg1 performAction:(id)arg2;
- (id)axUIElement:(id)arg1 actionDescription:(id)arg2;
- (id)axUIElementActions:(id)arg1;
- (id)axUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)axUIElementFrame:(id)arg1;
- (id)axChildren;
- (struct CGRect)_styleRectForThemeAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)_drawGradient:(struct CGRect)arg1 startColor:(id)arg2 endColor:(id)arg3 context:(struct CGContext *)arg4;
- (void)setDoubleClickAction:(SEL)arg1;
- (void)setDoubleClickTarget:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (long long)selectedIndex;
- (void)clearThumbs;
- (void)addStylesForController:(id)arg1 selectedStyle:(id)arg2;
- (void)mouseMoved:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (int)_mouseToStyleIndex:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)setFastSelection:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

