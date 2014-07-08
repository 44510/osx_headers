//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CWScanManager : NSObject
{
    BOOL _isActive;
    long long _scanCounter;
    struct dispatch_queue_s *_scanQueue;
    struct dispatch_source_s *_scanTimer;
    double _scanInterval;
    NSArray *_ssidList;
    long long _ssidListIndex;
    id _delegate;
}

+ (id)displayedScanResultsForInterface:(id)arg1 networks:(id)arg2 anqpElements:(id)arg3 tetherDevices:(id)arg4;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)stopScanning;
- (void)startScanning;
- (void)setInterval:(double)arg1;
- (void)setSSIDList:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)performScan;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

