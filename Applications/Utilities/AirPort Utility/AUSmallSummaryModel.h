//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUDataModel.h"

@class NSArrayController, NSMutableArray, NSNumber, NSString, TopoAirPortDeviceNode;

@interface AUSmallSummaryModel : AUDataModel
{
    BOOL itsADuelly;
    BOOL wirelessInfoPresent;
    NSNumber *baseStationProductID;
    NSString *fullProductName;
    NSString *baseStationName;
    NSString *ipAddress;
    NSString *lanIpAddress;
    NSString *connectionQuality;
    NSString *serialNumber;
    NSMutableArray *firmwareVersions;
    NSString *firmwareVersion;
    NSString *newestFirmwareVersion;
    NSString *firmwareSourceVersion;
    NSString *status;
    NSString *networkName;
    NSString *wanMacAddress;
    NSString *fiveGHzMacAddress;
    NSString *twoPointFourGHzMacAddress;
    NSString *connectedDevicesSummary;
    TopoAirPortDeviceNode *node;
    NSString *twoDotFourChannel;
    NSString *fiveChannel;
    NSMutableArray *connectedDevices;
    NSMutableArray *connectedDeviceTree;
    NSArrayController *problemsController;
    NSArrayController *connectedDevicesController;
}

@property(retain, nonatomic) NSArrayController *connectedDevicesController; // @synthesize connectedDevicesController;
@property(retain, nonatomic) NSArrayController *problemsController; // @synthesize problemsController;
@property(retain, nonatomic) NSMutableArray *connectedDeviceTree; // @synthesize connectedDeviceTree;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices;
@property(retain, nonatomic) NSString *fiveChannel; // @synthesize fiveChannel;
@property(retain, nonatomic) NSString *twoDotFourChannel; // @synthesize twoDotFourChannel;
@property(nonatomic) TopoAirPortDeviceNode *node; // @synthesize node;
@property(nonatomic) BOOL wirelessInfoPresent; // @synthesize wirelessInfoPresent;
@property(retain, nonatomic) NSString *connectedDevicesSummary; // @synthesize connectedDevicesSummary;
@property(nonatomic) BOOL itsADuelly; // @synthesize itsADuelly;
@property(retain, nonatomic) NSString *twoPointFourGHzMacAddress; // @synthesize twoPointFourGHzMacAddress;
@property(retain, nonatomic) NSString *fiveGHzMacAddress; // @synthesize fiveGHzMacAddress;
@property(retain, nonatomic) NSString *wanMacAddress; // @synthesize wanMacAddress;
@property(retain, nonatomic) NSString *networkName; // @synthesize networkName;
@property(retain, nonatomic) NSString *status; // @synthesize status;
@property(retain, nonatomic) NSString *firmwareSourceVersion; // @synthesize firmwareSourceVersion;
@property(retain, nonatomic) NSString *newestFirmwareVersion; // @synthesize newestFirmwareVersion;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion;
@property(retain, nonatomic) NSMutableArray *firmwareVersions; // @synthesize firmwareVersions;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber;
@property(retain, nonatomic) NSString *connectionQuality; // @synthesize connectionQuality;
@property(retain, nonatomic) NSString *lanIpAddress; // @synthesize lanIpAddress;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress;
@property(retain, nonatomic) NSString *baseStationName; // @synthesize baseStationName;
@property(retain, nonatomic) NSString *fullProductName; // @synthesize fullProductName;
@property(retain, nonatomic) NSNumber *baseStationProductID; // @synthesize baseStationProductID;
- (void)populateFirmwareMenu:(id)arg1 withTarget:(id)arg2;
- (BOOL)valid;
- (id)errors;
- (BOOL)saveData;
- (long long)indexOfProblemWithProblemCode:(unsigned int)arg1;
- (void)loadConnectedClientsIntoTree;
- (void)loadData;
- (void)_addProblems:(id)arg1;
- (void)dealloc;
- (id)init;

@end

