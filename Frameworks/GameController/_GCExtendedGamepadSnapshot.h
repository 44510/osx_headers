//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/_GCExtendedGamepad.h>

#import "_GCSnapshot.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _GCExtendedGamepadSnapshot : _GCExtendedGamepad <_GCSnapshot>
{
    NSData *_snapshotData;
}

- (void).cxx_destruct;
- (id)initWithController:(id)arg1 snapshotData:(id)arg2;
- (id)initWithSnapshotData:(id)arg1;
- (id)init;
@property(copy) NSData *snapshotData; // @synthesize snapshotData=_snapshotData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

