//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IP_ReachableHost : NSObject
{
    struct __SCNetworkReachability *mReachabilityRef;
    NSString *mHostName;
    BOOL mHasNotified;
    BOOL mHostAvailable;
}

- (BOOL)hasNotified;
- (void)dealloc;

@end

