//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALCanvasItem.h"

@interface CALCanvasLine : CALCanvasItem
{
    struct CGPoint _start;
    struct CGPoint _end;
    double _phase;
    double *_dashes;
    BOOL _dashesEndOnFullDash;
    int _count;
}

+ (id)lineStartingAt:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (struct CGRect)bounds;
- (void)drawInOpenGL;
- (void)draw;
- (void)updateBezierRepresentation;
- (void)setDashesEndOnFullDash:(BOOL)arg1;
- (BOOL)dashesEndOnFullDash;
- (void)setDashes:(double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)setEnd:(struct CGPoint)arg1;
- (void)setStart:(struct CGPoint)arg1;
- (struct CGPoint)end;
- (struct CGPoint)start;
- (id)updateSize;
- (void)dealloc;
- (id)initWithTagID:(id)arg1 position:(struct CGPoint)arg2 delegate:(id)arg3 shown:(BOOL)arg4 selectable:(BOOL)arg5 start:(struct CGPoint)arg6 end:(struct CGPoint)arg7 userData:(id)arg8;
- (id)initWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;

@end

