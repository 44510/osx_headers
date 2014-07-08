//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CLSimulationManager : NSObject
{
    double _locationDistance;
    double _locationInterval;
    double _locationSpeed;
    int _locationRepeatBehavior;
    int _locationDeliveryBehavior;
}

@property(nonatomic) int locationDeliveryBehavior; // @synthesize locationDeliveryBehavior=_locationDeliveryBehavior;
@property(nonatomic) int locationRepeatBehavior; // @synthesize locationRepeatBehavior=_locationRepeatBehavior;
@property(nonatomic) double locationSpeed; // @synthesize locationSpeed=_locationSpeed;
@property(nonatomic) double locationInterval; // @synthesize locationInterval=_locationInterval;
@property(nonatomic) double locationDistance; // @synthesize locationDistance=_locationDistance;
- (void)flush;
- (void)setSimulatedWifiPower:(BOOL)arg1;
- (void)stopWifiSimulation;
- (void)startWifiSimulation;
- (void)setWifiScanResults:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(BOOL)arg1;
- (void)stopCellSimulation;
- (void)startCellSimulation;
- (void)setSimulatedCell:(id)arg1;
- (void)clearSimulatedCells;
- (void)stopLocationSimulation;
- (void)startLocationSimulation;
- (void)appendSimulatedLocation:(id)arg1;
- (void)clearSimulatedLocations;
- (void)loadScenarioFromURL:(id)arg1;
- (void)selectScenario:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (id)availableScenarios;
- (id)scenariosPath;
- (id)init;

@end

