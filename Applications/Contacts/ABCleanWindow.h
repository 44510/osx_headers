//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface ABCleanWindow : NSWindow
{
    _Bool _ab_allowSlowMotionAnimation;
}

@property _Bool ab_allowSlowMotionAnimation; // @synthesize ab_allowSlowMotionAnimation=_ab_allowSlowMotionAnimation;
- (double)animationResizeTime:(struct CGRect)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

