//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SMInspector.h"

@class LineGraphView, NSMutableArray, NSPopUpButton, NSTextField, NSView;

@interface SMNetworkInfo : SMInspector
{
    NSTextField *_packetsIn;
    NSTextField *_packetsOut;
    NSTextField *_dataIn;
    NSTextField *_dataOut;
    NSTextField *_packetsInSec;
    NSTextField *_packetsOutSec;
    NSTextField *_dataInSec;
    NSTextField *_dataOutSec;
    NSTextField *_netHigh;
    unsigned long long _previousCounter[4];
    float _graphScale;
    LineGraphView *_topGraph;
    LineGraphView *_bottomGraph;
    NSPopUpButton *_graphType;
    NSView *_dockView;
    LineGraphView *_dockTopGraph;
    LineGraphView *_dockBottomGraph;
    long long _previousTimeStamp;
    NSMutableArray *_bytesInPerSecondHistory;
    NSMutableArray *_bytesOutPerSecondHistory;
    NSMutableArray *_packetsInPerSecondHistory;
    NSMutableArray *_packetsOutPerSecondHistory;
}

@property(retain) NSMutableArray *packetsOutPerSecondHistory; // @synthesize packetsOutPerSecondHistory=_packetsOutPerSecondHistory;
@property(retain) NSMutableArray *packetsInPerSecondHistory; // @synthesize packetsInPerSecondHistory=_packetsInPerSecondHistory;
@property(retain) NSMutableArray *bytesOutPerSecondHistory; // @synthesize bytesOutPerSecondHistory=_bytesOutPerSecondHistory;
@property(retain) NSMutableArray *bytesInPerSecondHistory; // @synthesize bytesInPerSecondHistory=_bytesInPerSecondHistory;
@property long long previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;
@property float graphScale; // @synthesize graphScale=_graphScale;
@property(retain) LineGraphView *dockBottomGraph; // @synthesize dockBottomGraph=_dockBottomGraph;
@property(retain) LineGraphView *dockTopGraph; // @synthesize dockTopGraph=_dockTopGraph;
@property(retain) NSView *dockView; // @synthesize dockView=_dockView;
@property(retain) NSPopUpButton *graphType; // @synthesize graphType=_graphType;
@property(retain) LineGraphView *bottomGraph; // @synthesize bottomGraph=_bottomGraph;
@property(retain) LineGraphView *topGraph; // @synthesize topGraph=_topGraph;
- (void).cxx_destruct;
- (void)updateSysSysmonRequest:(id)arg1;
- (void)updateWithSysmonRow:(id)arg1 timeStamp:(long long)arg2 tabIsVisible:(BOOL)arg3;
- (void)graphTypeChanged:(id)arg1;
- (void)updateTextColors;
- (void)awakeFromNib;
- (void)_occlusionStateDidChangeNotification:(id)arg1;

@end

