//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface IPToolTipView : NSView
{
    id _content;
    struct IPToolTipInfo _entry;
    NSView *_ownerView;
    BOOL _hideOnExit;
    BOOL _inWindow;
    long long _trackingTag;
}

+ (struct CGSize)sizeForContent:(id)arg1;
- (id).cxx_construct;
- (void)setOwnerView:(id)arg1;
- (id)ownerView;
- (void)setEntry:(struct IPToolTipInfo)arg1;
- (struct IPToolTipInfo)entry;
- (void)setContent:(id)arg1;
- (id)content;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)inWindow;
- (void)setHideOnExit:(BOOL)arg1;
- (BOOL)hideOnExit;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)_frameChanged:(id)arg1;
- (void)_addTracking;

@end

