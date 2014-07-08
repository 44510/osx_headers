//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"

@class NSMutableSet, NSString;

@interface _MCActivityMonitorMultiTarget : NSObject <MCActivityTarget>
{
    id <MCActivityTarget> _primaryTarget;
    NSMutableSet *_allTargets;
}

- (void).cxx_destruct;
- (id)displayName;
- (id)allTargets;
- (void)setPrimaryTarget:(id)arg1;
- (id)primaryTarget;
- (BOOL)removeActivityTarget:(id)arg1;
- (BOOL)addActivityTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

