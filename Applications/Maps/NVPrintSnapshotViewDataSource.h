//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString, NVRoute, NVRouteStep;

__attribute__((visibility("hidden")))
@interface NVPrintSnapshotViewDataSource : NSObject
{
    NVRouteStep *_step;
    NVRoute *_route;
    NSImage *_pinImage;
    NSImage *_snapshotImage;
    long long _type;
    NSString *_pinLabel;
    CDStruct_34734122 _pinPosition;
    CDStruct_02837cd9 _geoBounds;
}

@property(copy) NSString *pinLabel; // @synthesize pinLabel=_pinLabel;
@property long long type; // @synthesize type=_type;
@property(retain) NSImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain) NSImage *pinImage; // @synthesize pinImage=_pinImage;
@property CDStruct_c3b9c2ee pinPosition; // @synthesize pinPosition=_pinPosition;
@property(retain) NVRoute *route; // @synthesize route=_route;
@property CDStruct_90e2a262 geoBounds; // @synthesize geoBounds=_geoBounds;
@property(retain) NVRouteStep *step; // @synthesize step=_step;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlace:(id)arg1 pinLabel:(id)arg2;
- (id)initWithRoute:(id)arg1 index:(unsigned long long)arg2;

@end

