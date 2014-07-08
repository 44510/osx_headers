//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSLayoutConstraint, TTagInfo, TViewOverColorCircle;

@interface TTagsPrefCellView : NSTableCellView
{
    NSButton *_sidebarCheckBox;
    NSLayoutConstraint *_colorCircleWidthConstraint;
    double _oldColorCircleWidth;
    TViewOverColorCircle *_viewOverColorCircle;
    struct TNSRef<NSTrackingArea *> _trackingArea;
    _Bool _mouseInDot;
    TTagInfo *_tagInfo;
}

@property(nonatomic) TViewOverColorCircle *viewOverColorCircle; // @synthesize viewOverColorCircle=_viewOverColorCircle;
@property(readonly, nonatomic) NSButton *sidebarCheckBox; // @synthesize sidebarCheckBox=_sidebarCheckBox;
@property(retain, nonatomic) TTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateImage;
- (void)mouseExited:(id)arg1;
- (void)revertHoverState;
- (void)mouseEntered:(id)arg1;
- (id)draggingImageComponents;
- (void)disableTrackingArea;
- (void)enableTrackingArea;
- (void)dealloc;
- (void)viewDidMoveToWindow;

@end

