//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABZeroingWeakReference;

__attribute__((visibility("hidden")))
@interface ABSafeNotificationEntry : NSObject
{
    ABZeroingWeakReference *_target;
    SEL _selector;
    id <ABSafeNotificationSignature> _signature;
}

- (id)description;
- (void)reflectNotification:(id)arg1;
- (BOOL)isElligibleForNotification:(id)arg1;
@property(readonly, copy) id <ABSafeNotificationSignature> notificationSignature;
- (BOOL)isGarbage;
- (id)target;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 signature:(id)arg3;

@end

