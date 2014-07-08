//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABSafeNotificationReflectorCollection, NSNotificationCenter;

@interface ABSafeNotificationCenter : NSObject
{
    NSNotificationCenter *_center;
    ABSafeNotificationReflectorCollection *_reflectors;
}

+ (id)defaultCenter;
- (void)dumpStatistics;
- (void)dumpObservers;
- (void)removeSafeObserversInCollection:(id)arg1;
- (void)removeSafeObserver:(id)arg1;
- (void)removeSafeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (id)makeSignatureWithName:(id)arg1 object:(id)arg2;
- (id)addSafeObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

@end
