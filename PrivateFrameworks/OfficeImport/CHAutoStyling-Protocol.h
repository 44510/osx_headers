//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHDMarker, OADFill, OADGraphicProperties, OADStroke;

@protocol CHAutoStyling <NSObject>
- (OADFill *)autoTextFill;
- (OADStroke *)autoStrokeForSeriesIndex:(unsigned long long)arg1;
- (void)resolveMarker:(CHDMarker *)arg1 withSeriesGraphicProperties:(OADGraphicProperties *)arg2 forSeriesIndex:(unsigned long long)arg3;
- (void)resolveLegendGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveAxisGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolvePlotAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveFloorGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveWallGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveChartAreaGraphicProperties:(OADGraphicProperties *)arg1;
- (void)resolveGraphicPropertiesOfErrorBar:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;
- (void)resolveGraphicPropertiesOfSeries:(OADGraphicProperties *)arg1 forSeriesIndex:(unsigned long long)arg2;

@optional
- (void)setAutoChartStrokeIsHollow:(BOOL)arg1;
- (void)setAutoChartFillIsHollow:(BOOL)arg1;
@end
