//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCUtils : NSObject
{
}

+ (void)copyProtocolsFromService:(struct __SCNetworkService *)arg1 toService:(struct __SCNetworkService *)arg2;
+ (struct __SCNetworkInterface *)interfaceInService:(struct __SCNetworkService *)arg1 withType:(struct __CFString *)arg2;
+ (struct __SCNetworkService *)serviceInArray:(struct __CFArray *)arg1 withID:(struct __CFString *)arg2;
+ (struct __SCNetworkProtocol *)createOrGetProtocol:(struct __CFString *)arg1 forService:(struct __SCNetworkService *)arg2;
+ (struct __CFArray *)copyServicesInSet:(struct __SCNetworkSet *)arg1 withHardwareKey:(id)arg2;
+ (struct __SCNetworkService *)serviceInSet:(struct __SCNetworkSet *)arg1 withHardwareKey:(id)arg2;
+ (struct __SCNetworkService *)serviceInSet:(struct __SCNetworkSet *)arg1 withName:(id)arg2;

@end

