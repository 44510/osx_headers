//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult
{
    int _startEndpointType;
    int _endEndpointType;
    struct CGPoint _startLocation;
    struct CGPoint _endLocation;
    struct CGPoint _midpointLocation;
    struct CGPoint _controlPoint;
}

@property(readonly) struct CGPoint controlPoint; // @synthesize controlPoint=_controlPoint;
@property(readonly) struct CGPoint midpointLocation; // @synthesize midpointLocation=_midpointLocation;
@property(readonly) struct CGPoint endLocation; // @synthesize endLocation=_endLocation;
@property(readonly) struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property(readonly) int endEndpointType; // @synthesize endEndpointType=_endEndpointType;
@property(readonly) int startEndpointType; // @synthesize startEndpointType=_startEndpointType;
- (id).cxx_construct;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 startLocation:(struct CGPoint)arg4 startEndpointType:(int)arg5 endLocation:(struct CGPoint)arg6 endEndpointType:(int)arg7 midPointLocation:(struct CGPoint)arg8 controlPointLocation:(struct CGPoint)arg9;

@end

