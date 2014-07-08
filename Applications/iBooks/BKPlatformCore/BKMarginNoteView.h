//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AEAnnotationTheme, CALayer;

@interface BKMarginNoteView : NSView
{
    BOOL _wantsShadow;
    int _noteMarkerSide;
    AEAnnotationTheme *_theme;
    double _viewInset;
    CALayer *_noteLayer;
    id <BKMarginNoteViewDelegate> _delegate;
}

@property(readonly, nonatomic) id <BKMarginNoteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) CALayer *noteLayer; // @synthesize noteLayer=_noteLayer;
@property(readonly, nonatomic) BOOL wantsShadow; // @synthesize wantsShadow=_wantsShadow;
@property(nonatomic) int noteMarkerSide; // @synthesize noteMarkerSide=_noteMarkerSide;
@property(nonatomic) double viewInset; // @synthesize viewInset=_viewInset;
@property(retain, nonatomic) AEAnnotationTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isEditable;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)p_animateLayerScale:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 withDuration:(double)arg4;
- (void)p_animateLayerScaleY:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 withDuration:(double)arg4;
- (void)p_animateLayerScaleX:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 withDuration:(double)arg4;
- (void)p_animateLayer:(id)arg1 toShadowOpacity:(double)arg2 withDuration:(double)arg3;
- (void)p_animateLayer:(id)arg1 toOpacity:(double)arg2 withDuration:(double)arg3;
- (void)p_animateLayer:(id)arg1 toPosition:(struct CGPoint)arg2 withDuration:(double)arg3;
- (void)p_animateLayer:(id)arg1 toBounds:(struct CGRect)arg2 withDuration:(double)arg3;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)p_windowDidChangeBackingProperties:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 side:(int)arg2 theme:(id)arg3 wantsShadow:(BOOL)arg4 delegate:(id)arg5;

@end

