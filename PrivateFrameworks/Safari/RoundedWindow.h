//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSView, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface RoundedWindow : NSWindow
{
    NSVisualEffectView *_backdropView;
}

+ (id)keyPathsForValuesAffectingCornerRadius;
+ (id)keyPathsForValuesAffectingCornersAreRounded;
- (void).cxx_destruct;
@property BOOL cornersAreRounded;
@property(readonly) double cornerRadius;
@property(readonly, nonatomic) NSView *mainContentView;
- (id)_cornerMask;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end
