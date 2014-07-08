//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString, NSImage;

@interface HUDImageButton : NSView
{
    NSImage *mNormalImage;
    NSImage *mPressedImage;
    NSImage *mDisabledImage;
    SEL mAction;
    id mTarget;
    BOOL mPressed;
    double mLastNotify;
    BOOL mDisabled;
    NSAttributedString *mTitle;
}

- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDown:(id)arg1;
- (void)notify;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setDisabledImage:(id)arg1;
- (void)setPressedImage:(id)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

