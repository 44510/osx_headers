//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUSmallSummaryModel.h"

@class NSTreeController;

@interface AUSummaryModel : AUSmallSummaryModel
{
    NSTreeController *connectedDevicesTreeController;
}

@property(retain, nonatomic) NSTreeController *connectedDevicesTreeController; // @synthesize connectedDevicesTreeController;
- (void)loadTopoConnectedClientsIntoTree;
- (void)loadData;
- (id)init;

@end

