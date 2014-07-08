//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IMWindowControlButton, NSImageView;

@interface IMWindowButtons : NSView
{
    IMWindowControlButton *_closeButton;
    IMWindowControlButton *_minimizeButton;
    IMWindowControlButton *_zoomButton;
    long long _trackingTag;
    BOOL _isFaded;
    BOOL _flippedOn;
    NSImageView *_backgroundImageView;
}

@property(readonly) NSImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)prepareToFade:(BOOL)arg1;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;

@end

