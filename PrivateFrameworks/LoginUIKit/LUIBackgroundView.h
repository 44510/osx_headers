//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, DPRemoteDesktopPicture;

@interface LUIBackgroundView : NSView
{
    int _style;
    id _target;
    SEL _action;
    CALayer *_imageLayer;
    CALayer *_desktopLayer;
    CALayer *_gradient1Layer;
    CALayer *_gradient2Layer;
    BOOL _fetching;
    DPRemoteDesktopPicture *_remoteDesktop;
    unsigned int _displayID;
    BOOL _useBlurForScreenLock;
}

@property id target; // @synthesize target=_target;
@property SEL action; // @synthesize action=_action;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (BOOL)_useBlurForScreenLock;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setStyle:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setGradientEnabled:(BOOL)arg1;
- (void)setDisplayID:(unsigned int)arg1;
- (void)setColor:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_updateLayers;
- (id)_defaultDesktopPictureLayer;

@end

