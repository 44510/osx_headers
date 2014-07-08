//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNWeakReference, NSSet;

__attribute__((visibility("hidden")))
@interface AKCardViewFaceTimeAvailabilityWatcher : NSObject
{
    CNWeakReference *_dataSource;
}

- (void)faceTimeAudioServiceDidBecomeAvailable:(id)arg1;
- (void)faceTimeVideoServiceDidBecomeAvailable:(id)arg1;
- (void)startAllFaceTimeAvailabilityLookups;
@property(readonly) NSSet *uniqueIdentifiers;
- (id)dataSource;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

@end

