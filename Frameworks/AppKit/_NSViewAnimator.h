//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSObjectAnimator.h>

__attribute__((visibility("hidden")))
@interface _NSViewAnimator : _NSObjectAnimator
{
}

- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)subviews;
- (id)superview;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)removeFromSuperviewWithoutNeedingDisplay;
- (void)removeFromSuperview;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)frameSize;
- (struct CGPoint)frameOrigin;
- (struct CGRect)frame;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (BOOL)_useCoreAnimationFrameChanges;
- (BOOL)_isLayerBackedAtNotTheRootLayer;
- (void)setShadow:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setFrameRotation:(double)arg1;
- (void)setFrameCenterRotation:(double)arg1;
- (void)setContentFilters:(id)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setBackgroundFilters:(id)arg1;
- (void)setAlphaValue:(double)arg1;
- (BOOL)_shouldDoLayerAnimation;
- (BOOL)_shouldDoAnimation;

@end

