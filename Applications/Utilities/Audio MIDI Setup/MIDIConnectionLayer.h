//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAShapeLayer.h"

@class EndpointConnection, NewMIDIStudioSetupView;

@interface MIDIConnectionLayer : CAShapeLayer
{
    EndpointConnection *connection;
    NewMIDIStudioSetupView *owner;
    BOOL selected;
}

- (void)updatePath;
@property(getter=isSelected) BOOL selected; // @dynamic selected;
- (BOOL)selected;
- (id)initWithConnection:(id)arg1 owner:(id)arg2;

@end

