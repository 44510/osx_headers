//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DelayedHoverButton.h"

@interface ShareButton : DelayedHoverButton
{
    BOOL _shouldAlwaysBeShown;
    BOOL _isSelected;
    long long _animationStep;
}

+ (id)cachedShareHoverImage;
+ (id)cachedShareImage;
@property long long animationStep; // @synthesize animationStep=_animationStep;
@property BOOL isSelected; // @synthesize isSelected=_isSelected;
@property BOOL shouldAlwaysBeShown; // @synthesize shouldAlwaysBeShown=_shouldAlwaysBeShown;
- (void)animateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateIsHovered:(BOOL)arg1;

@end

