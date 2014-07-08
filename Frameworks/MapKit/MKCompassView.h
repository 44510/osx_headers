//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAGradientLayer, CALayer, CATextLayer;

@interface MKCompassView : NSView
{
    BOOL _wasDragged;
    BOOL _innerCLick;
    struct CGPoint _clickPosition;
    BOOL _enabled;
    CALayer *rotationLayer;
    CALayer *tiltLayer;
    CATextLayer *textLayer;
    CAGradientLayer *gradientLayer;
    id <MKCompassViewDelegate> compassDelegate;
}

@property __weak id <MKCompassViewDelegate> compassDelegate; // @synthesize compassDelegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateHighlight;
- (void)viewDidMoveToWindow;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCompassFlatWithMapPitch:(double)arg1;
- (void)resetNeedleToNorthWithMapYaw:(double)arg1;
- (void)updateAccessibilityDescriptionWithAngle:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)setupCompassForDPI:(BOOL)arg1;
- (BOOL)canBecomeKeyView;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsIgnored;

@end

