//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreAudioKit/CAGraphView.h>

@class NSBezierPath, NSColor;

__attribute__((visibility("hidden")))
@interface CAAttenuationView : CAGraphView
{
    double pointRadius;
    BOOL pointSelected;
    double gainValue;
    double referenceDistanceValue;
    unsigned int dataSize;
    NSColor *curveColor;
    NSBezierPath *mCurvePath;
}

- (unsigned int)dataSize;
- (void)plotAttenuationData:(struct AUDistanceAttenuation_Data *)arg1;
- (struct AUDistanceAttenuation_Data *)prepareAttenuationData:(struct AUDistanceAttenuation_Data *)arg1;
- (id)stringForHorizontalValue:(double)arg1;
- (void)setMaxDistance:(double)arg1;
- (double)referenceDistance;
- (void)setReferenceDistance:(double)arg1;
- (double)gain;
- (void)setGain:(double)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

