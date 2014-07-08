//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SNetworkReachabilityMonitor : NSObject
{
    NSMutableArray *_watchedHosts;
    struct __SCDynamicStore *_dynamicStoreRef;
    CDStruct_4210025a *_dynamicStoreContext;
    struct __CFRunLoopSource *_dynamicStoreRunLoopSource;
}

+ (void)shutdown;
+ (id)sharedNetworkReachabilityMonitor;
+ (void)initialize;
- (void)unwatchHost:(id)arg1;
- (id)watchHostWithName:(id)arg1 protocol:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)shutdown;
- (void)proxySettingsChanged;
- (id)proxyAddressForProtocol:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
