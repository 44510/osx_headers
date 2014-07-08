//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CAShapeLayer, CATextLayer, MIDIDeviceWidget, NSMutableArray, NSMutableDictionary;

@interface MIDIDeviceLayer : CALayer
{
    MIDIDeviceWidget *mDeviceWidget;
    CALayer *iconLayer;
    CATextLayer *deviceNameLayer;
    CAShapeLayer *nameColorLayer;
    CALayer *outlineLayer;
    NSMutableArray *portLayers;
    NSMutableArray *portNameLayers;
    CALayer *portLayer;
    NSMutableArray *connections;
    NSMutableDictionary *portLayerMappings;
    id owner;
    BOOL selected;
}

- (struct CGPoint)toolTipCenterLocation;
- (id)toolTipString;
- (void)addConnection:(id)arg1;
- (void)clearConnections;
- (id)connectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numConnectedDevices;
- (void)setEndpointSelected:(id)arg1 selected:(BOOL)arg2;
- (void)setEndpointConnected:(id)arg1 connected:(BOOL)arg2;
- (id)layerForEndpoint:(id)arg1;
- (struct CGPoint)locationForEndpoint:(id)arg1;
- (id)deviceWidget;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
@property BOOL selected; // @dynamic selected;
- (void)setSelectedAppearance:(BOOL)arg1;
- (BOOL)isSelected;
- (void)updateLayer;
- (void)updateColor;
- (void)setIconSize:(float)arg1;
- (void)updateNamePath;
- (void)addEntityLayersForDevice:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (id)owner;
- (void)dealloc;
- (id)initWithDeviceWidget:(id)arg1 owner:(id)arg2;

@end

