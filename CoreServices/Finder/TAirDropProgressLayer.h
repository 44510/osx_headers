//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLayer.h"

@interface TAirDropProgressLayer : TLayer
{
    double _endAngle;
    _Bool _workAround10834738;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property double endAngle; // @synthesize endAngle=_endAngle;
- (void)addBogusAnimationFor10834738;
- (void)drawInContext:(struct CGContext *)arg1;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)setEndAngleAnimated:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (id)initForIKImageBrowserView;

@end

