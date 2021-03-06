//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface FloatingPickerView : NSView
{
    struct CGPoint mPointerTip;
    long long mTrackingTag;
    BOOL _useTracking;
}

- (id).cxx_construct;
- (void)setUseTracking:(BOOL)arg1;
- (BOOL)useTracking;
- (void)setPointerTip:(struct CGPoint)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidMoveToWindow;
- (void)_frameChanged:(id)arg1;
- (void)_addTracking;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end

