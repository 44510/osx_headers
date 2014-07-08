//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ShareKit/SHKBorderlessEffectWindow.h>

@class CALayer;

@interface SHKBlurWindow : SHKBorderlessEffectWindow
{
    CALayer *blurLayer;
    BOOL animatesTransitions;
}

@property BOOL animatesTransitions; // @synthesize animatesTransitions;
- (void).cxx_destruct;
- (void)startTransitionOut;
- (void)continueBlurWithIdentityLayerTransformAfterDelay:(double)arg1;
- (void)startBlurWithServiceScreenFrame:(struct CGRect)arg1 initialLayerTransform:(struct CGAffineTransform)arg2;
@property struct CGRect blurFrame;
- (id)initWithFrame:(struct CGRect)arg1 noSourceWindow:(BOOL)arg2;

@end

