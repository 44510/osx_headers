//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSGradient;

@interface GradientView : NSView
{
    NSGradient *_gradient;
    double _angle;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

