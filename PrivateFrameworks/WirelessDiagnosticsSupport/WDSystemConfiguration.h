//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WDSystemConfiguration : NSObject
{
    struct __SCDynamicStore *_storeRef;
    struct __SCPreferences *_prefsRef;
}

+ (id)consoleUserName;
- (BOOL)setDNSServerAddresses:(id)arg1 searchDomains:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;
- (BOOL)setProxies:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;
- (BOOL)configureIPv6AutomaticallyWithServiceID:(id)arg1 error:(id *)arg2;
- (BOOL)configureIPv6ManuallyWithIPAddress:(id)arg1 router:(id)arg2 prefixLength:(id)arg3 serviceID:(id)arg4 error:(id *)arg5;
- (BOOL)configureIPv4UsingDHCPWithServiceID:(id)arg1 error:(id *)arg2;
- (BOOL)configureIPv4ManuallyWithIPAddress:(id)arg1 router:(id)arg2 subnetMask:(id)arg3 serviceID:(id)arg4 error:(id *)arg5;
- (id)manualIPv6PrefixLengthForServiceID:(id)arg1;
- (id)manualIPv6RouterForServiceID:(id)arg1;
- (id)manualIPv6AddressForServiceID:(id)arg1;
- (id)manualIPv4SubnetMaskForServiceID:(id)arg1;
- (id)manualIPv4RouterForServiceID:(id)arg1;
- (id)manualIPv4AddressForServiceID:(id)arg1;
- (BOOL)isUsingAutomaticIPv6ConfigMethodForServiceID:(id)arg1;
- (BOOL)isUsingManualIPv6ConfigMethodForServiceID:(id)arg1;
- (id)ipv6ConfigMethodForServiceID:(id)arg1;
- (BOOL)isUsingDHCPIPv4ConfigMethodForServiceID:(id)arg1;
- (BOOL)isUsingManualIPv4ConfigMethodForServiceID:(id)arg1;
- (id)ipv4ConfigMethodForServiceID:(id)arg1;
- (id)dnsSearchDomainsForServiceID:(id)arg1;
- (id)dnsServerAddressesForServiceID:(id)arg1;
- (id)globalDNSSearchDomains;
- (id)globalDNSDomainName;
- (id)globalDNSServerAddresses;
- (id)globalIPv6PrefixLengths;
- (id)globalIPv6Router;
- (id)globalIPv6Addresses;
- (id)globalIPv4SubnetMasks;
- (id)globalIPv4Router;
- (id)globalIPv4Addresses;
- (id)ipv6SetupPrefixLengthForServiceID:(id)arg1;
- (id)ipv6SetupRouterForServiceID:(id)arg1;
- (id)ipv6SetupAddressesForServiceID:(id)arg1;
- (id)ipv4SetupSubnetMasksForServiceID:(id)arg1;
- (id)ipv4SetupRouterForServiceID:(id)arg1;
- (id)ipv4SetupAddressesForServiceID:(id)arg1;
- (id)ipv6StatePrefixLengthForServiceID:(id)arg1;
- (id)ipv6StateRouterForServiceID:(id)arg1;
- (id)ipv6StateAddressesForServiceID:(id)arg1;
- (id)ipv4StateSubnetMasksForServiceID:(id)arg1;
- (id)ipv4StateRouterForServiceID:(id)arg1;
- (id)ipv4StateAddressesForServiceID:(id)arg1;
- (id)primaryIPv6ServiceID;
- (id)primaryIPv4ServiceID;
- (id)primaryIPv6Interface;
- (id)primaryIPv4Interface;
- (id)wifiServiceID;
- (BOOL)isUsingCustomProxySettingsForServiceID:(id)arg1;
- (id)proxiesSetupConfigForServiceID:(id)arg1;
- (id)dnsSetupConfigForServiceID:(id)arg1;
- (BOOL)isUsingCustomDNSSettingsForServiceID:(id)arg1;
- (id)ipv6SetupConfigForServiceID:(id)arg1;
- (id)ipv4SetupConfigForServiceID:(id)arg1;
- (id)ipv6StateConfigForServiceID:(id)arg1;
- (id)ipv4StateConfigForServiceID:(id)arg1;
- (id)dnsGlobalStateConfig;
- (id)ipv6GlobalStateConfig;
- (id)ipv4GlobalStateConfig;
- (void)dealloc;
- (id)init;

@end

