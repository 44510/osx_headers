//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IPMarimbaTextEditor;

@interface IPTextOverlayBackground : NSView
{
    IPMarimbaTextEditor *_editor;
    struct CGRect _borderRect;
}

- (id).cxx_construct;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBorder:(struct CGRect)arg1;
- (void)setEditor:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;

@end

