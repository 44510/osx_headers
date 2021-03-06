//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class AMSChannelSubLayer, AMSInOutLabelLayer, CAShapeLayer;

@interface AMSInOutChannelLayer : CALayer
{
    AMSChannelSubLayer *inputLayer;
    AMSChannelSubLayer *outputLayer;
    AMSInOutLabelLayer *inLabel;
    AMSInOutLabelLayer *outLabel;
    CAShapeLayer *markerLayer;
    BOOL editingChannelName;
}

@property(readonly) CAShapeLayer *markerLayer; // @synthesize markerLayer;
@property(readonly) AMSChannelSubLayer *outputLayer; // @synthesize outputLayer;
@property(readonly) AMSChannelSubLayer *inputLayer; // @synthesize inputLayer;
- (void)endEditingChannelName:(BOOL)arg1;
- (void)beginEditingChannelName;
- (void)highlightedChannelChanged:(id)arg1;
- (void)setNeedsDisplay;
- (void)reloadData;
- (void)setContentsScale:(double)arg1;
- (void)createMarkerLayer;
- (void)dealloc;
- (id)init;

@end

