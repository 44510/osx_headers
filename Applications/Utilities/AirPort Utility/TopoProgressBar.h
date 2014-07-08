//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface TopoProgressBar : CALayer
{
    id _owningView;
    float _progressValue;
}

+ (void)deallocImageCache;
+ (id)newImageSlice:(id)arg1 fromRect:(struct CGRect)arg2;
+ (int)initImageCache;
@property(nonatomic) float progressValue; // @synthesize progressValue=_progressValue;
- (id)composeProgressBar;
- (void)layoutSublayers;
- (void)dealloc;
- (struct CGSize)preferredFrameSize;
- (void)contentsScaleHasBeenChangedFromOldScale:(double)arg1 toNewScale:(double)arg2;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
@property(nonatomic) id owningView;
- (id)initWithOwningView:(id)arg1;

@end

