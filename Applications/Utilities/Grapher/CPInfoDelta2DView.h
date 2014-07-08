//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPInfoCoordinate2DView.h"

@class GVector;

@interface CPInfoDelta2DView : CPInfoCoordinate2DView
{
    BOOL mUseVector;
    GVector *mVector;
}

- (void)hideDestinationCoordinates;
- (void)showDestinationCoordinates:(double *)arg1;
- (void)hideOriginCoordinates;
- (void)showOriginCoordinates:(double *)arg1;
- (void)hideCoordinates;
- (void)showCoordinates:(double *)arg1;
- (void)updateCoord;
- (void)updateCoordsOfSystems:(id)arg1 ofCartesianVector:(id)arg2;
- (void)setCoord:(id)arg1:(id)arg2:(id)arg3 ofSystem:(id)arg4 ofCartesianVector:(id)arg5;
- (void)setName:(id)arg1 ofAxis:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;

@end

