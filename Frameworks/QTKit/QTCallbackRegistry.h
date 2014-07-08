//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface QTCallbackRegistry : NSObject
{
    struct __CFBag *_observers;
    int _observersLock;
}

+ (id)sharedCallbackRegistry;
- (id)callbackObserver:(id)arg1;
- (void)unregisterCallbackObserver:(id)arg1;
- (void)registerCallbackObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

