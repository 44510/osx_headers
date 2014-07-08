//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController;

@interface GCMotion : NSObject
{
    struct GCAcceleration _gravity;
    struct GCAcceleration _userAcceleration;
    struct GCQuaternion _attitude;
    CDStruct_31142d93 _rotationRate;
    GCController *controller;
    CDUnknownBlockType valueChangedHandler;
}

@property(copy) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler;
@property(readonly) __weak GCController *controller; // @synthesize controller;
@property(readonly) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property(readonly) struct GCAcceleration userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly) struct GCAcceleration gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;
- (id)initWithController:(id)arg1;

@end

