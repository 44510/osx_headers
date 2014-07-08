//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUDataModel.h"

@class AUNetworkOptions, NSMutableArray, NSPredicate, NSString;

@interface AUNetworkModel : AUDataModel
{
    BOOL loadingData;
    BOOL canChangeRouterMode;
    NSMutableArray *routerModes;
    int routerMode;
    BOOL enableDHCP;
    BOOL enableNAT;
    NSString *dhcpNATRange;
    BOOL firewallEnabled;
    BOOL showGuestDHCPRange;
    BOOL guestNetworkEnabled;
    NSMutableArray *dhcpReservations;
    NSMutableArray *portMappings;
    NSPredicate *portMappingIPv6Predicate;
    BOOL shouldHideNATOnlySettings;
    BOOL enableTimedAccessControl;
    BOOL enableFirewallTable;
    BOOL enableNetworkOptions;
    BOOL fixingGuestNetworkRange;
    AUNetworkOptions *networkOptions;
}

@property(retain, nonatomic) AUNetworkOptions *networkOptions; // @synthesize networkOptions;
@property(nonatomic) BOOL enableNetworkOptions; // @synthesize enableNetworkOptions;
@property(nonatomic) BOOL enableFirewallTable; // @synthesize enableFirewallTable;
@property(nonatomic) BOOL enableTimedAccessControl; // @synthesize enableTimedAccessControl;
@property(retain, nonatomic) NSPredicate *portMappingIPv6Predicate; // @synthesize portMappingIPv6Predicate;
@property(retain, nonatomic) NSMutableArray *portMappings; // @synthesize portMappings;
@property(retain, nonatomic) NSMutableArray *dhcpReservations; // @synthesize dhcpReservations;
@property(nonatomic) BOOL firewallEnabled; // @synthesize firewallEnabled;
@property(nonatomic) BOOL enableNAT; // @synthesize enableNAT;
@property(nonatomic) BOOL shouldHideNATOnlySettings; // @synthesize shouldHideNATOnlySettings;
@property(retain, nonatomic) NSString *dhcpNATRange; // @synthesize dhcpNATRange;
@property(nonatomic) BOOL showGuestDHCPRange; // @synthesize showGuestDHCPRange;
@property(nonatomic) BOOL guestNetworkEnabled; // @synthesize guestNetworkEnabled;
@property(nonatomic) BOOL enableDHCP; // @synthesize enableDHCP;
@property(nonatomic) int routerMode; // @synthesize routerMode;
@property(retain, nonatomic) NSMutableArray *routerModes; // @synthesize routerModes;
@property(nonatomic) BOOL canChangeRouterMode; // @synthesize canChangeRouterMode;
@property(nonatomic) BOOL loadingData; // @synthesize loadingData;
- (id)errors;
- (BOOL)valid;
- (BOOL)validateModel:(id)arg1;
- (void)setFirewallEntries:(id)arg1;
- (id)firewallEntries;
- (BOOL)saveData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)validateValue:(inout id *)arg1 forKeyPath:(id)arg2 error:(out id *)arg3;
- (void)loadData;
- (void)dealloc;
- (id)init;
- (void)adjustIPv6BlockIncomingForIPv6Config:(int)arg1 ipv6Mode:(int)arg2 shareIPConnection:(BOOL)arg3;
- (void)adjustGuestHostRange;
- (void)adjustDHCPOnlyRange:(id)arg1;
- (void)adjustDHCPNATRange;
- (void)adjustDHCPNATForRouterMode:(int)arg1;
- (void)adjustRouterModes;

@end

