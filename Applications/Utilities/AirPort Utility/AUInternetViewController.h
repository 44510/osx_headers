//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AUControlFocusProtocol.h"
#import "AUModelDelegate.h"
#import "AUSettingsViewControllerProtocol.h"

@class AUInternetModel, NSBox, NSButton, NSPopUpButton, NSString, NSTabView, NSTextField, NSUndoManager, NSView;

@interface AUInternetViewController : NSViewController <AUSettingsViewControllerProtocol, AUModelDelegate, AUControlFocusProtocol>
{
    AUInternetModel *dataModel;
    NSPopUpButton *configureViaPopUpButton;
    NSTextField *dhcpIPAddress;
    NSTextField *dhcpSubnetMask;
    NSTextField *dhcpRouterAddress;
    NSTextField *dhcpDNS1;
    NSTextField *dhcpDNS2;
    NSTextField *dhcpDomainName;
    NSTextField *dhcpIPAddressLabel;
    NSTextField *dhcpSubnetMaskLabel;
    NSTextField *dhcpRouterAddressLabel;
    NSTextField *dhcpDNS1Label;
    NSTextField *dhcpDNS2Label;
    NSTextField *dhcpDomainNameLabel;
    NSTextField *dhcpIPv6AddressLabel;
    NSTextField *dhcpIPv6Address;
    NSTextField *dhcpIPv6DNSLabel;
    NSTextField *dhcpIPv6DNS1;
    NSTextField *dhcpIPv6DNS2;
    NSTextField *staticIPAddress;
    NSTextField *staticSubnetMask;
    NSTextField *staticRouterAddress;
    NSTextField *staticDNS1;
    NSTextField *staticDNS2;
    NSTextField *staticDomainName;
    NSTextField *staticIPAddressLabel;
    NSTextField *staticSubnetMaskLabel;
    NSTextField *staticRouterAddressLabel;
    NSTextField *staticDNS1Label;
    NSTextField *staticDNS2Label;
    NSTextField *staticDomainNameLabel;
    NSTextField *staticIPv6AddressLabel;
    NSTextField *staticIPv6Address;
    NSTextField *staticIPv6DNSLabel;
    NSTextField *staticIPv6DNS1;
    NSTextField *staticIPv6DNS2;
    NSTextField *pppoeAccountName;
    NSTextField *pppoePassword;
    NSTextField *pppoeServiceName;
    NSTextField *pppoeAccountNameLabel;
    NSTextField *pppoePasswordLabel;
    NSTextField *pppoeServiceNameLabel;
    NSTextField *pppoeIPAddress;
    NSTextField *pppoeSubnetMask;
    NSTextField *pppoeRouterAddress;
    NSTextField *pppoeDNS1;
    NSTextField *pppoeDNS2;
    NSTextField *pppoeDomainName;
    NSTextField *pppoeIPv6AddressLabel;
    NSTextField *pppoeIPv6Address;
    NSTextField *pppoeIPv6DNSLabel;
    NSTextField *pppoeIPv6DNS1;
    NSTextField *pppoeIPv6DNS2;
    NSTextField *pppoeIPAddressLabel;
    NSTextField *pppoeSubnetMaskLabel;
    NSTextField *pppoeRouterAddressLabel;
    NSTextField *pppoeDNS1Label;
    NSTextField *pppoeDNS2Label;
    NSTextField *pppoeDomainNameLabel;
    NSView *advancedOptionsView;
    NSTextField *advancedOptionsLabel;
    NSBox *advancedOptionsLine;
    NSView *advancedPPPoEView;
    NSTextField *advancedPPPoEConnectionStyleLabel;
    NSPopUpButton *advancedPPPoEConnectionStyleMenu;
    NSTextField *advancedPPPoEDisconnectValuesLabel;
    NSPopUpButton *advancedPPPoEDisconnectValuesMenu;
    NSView *advancedIPv6ConfigView;
    NSTextField *advancedIPv6ConfigLabel;
    NSPopUpButton *advancedIPv6ConfigMenu;
    NSView *advancedIPv6ModeView;
    NSTextField *advancedIPv6ModeLabel;
    NSPopUpButton *advancedIPv6ModeMenu;
    NSTabView *advancedIPv6ConfigTabView;
    NSTabView *advancedIPv6WANAddressTabView;
    NSTextField *advancedIPv6ManualWANAddressLabel;
    NSTextField *advancedIPv6ManualWANAddressValue;
    NSTextField *advancedIPv6AutoWANAddressLabel;
    NSTextField *advancedIPv6AutoWANAddressValue;
    NSTabView *advancedIPv6WANGatewayTabView;
    NSTextField *advancedIPv6ManualWANGatewayLabel;
    NSTextField *advancedIPv6ManualWANGatewayValue;
    NSTextField *advancedIPv6AutoWANGatewayLabel;
    NSTextField *advancedIPv6AutoWANGatewayValue;
    NSView *advancedIPv6TunnelRemoteEndView;
    NSTextField *advancedIPv6TunnelRemoteIPv4Label;
    NSTextField *advancedIPv6TunnelRemoteIPv4Value;
    NSTabView *advancedIPv6PrefixDelegationTabView;
    NSTextField *advancedIPv6AutoPrefixDelegationLabel;
    NSTextField *advancedIPv6AutoPrefixDelegationValue;
    NSTextField *advancedIPv6ManualPrefixDelegationLabel;
    NSTextField *advancedIPv6ManualPrefixDelegationValue;
    NSTabView *advancedIPv6LANIPTabView;
    NSTextField *advancedIPv6AutoLANIPAddressLabel;
    NSTextField *advancedIPv6AutoLANIPAddressValue;
    NSTextField *advancedIPv6ManualLANIPAddressLabel;
    NSTextField *advancedIPv6ManualLANIPAddressValue;
    NSView *advancedIPv6ShareConnectionView;
    NSButton *advancedIPv6ShareConnection;
    NSTextField *advancedWABInformationalText;
    NSButton *advancedEnableWABCheckbox;
    NSView *advancedEnableWABContainerView;
    NSTextField *advancedWABHostnameLabel;
    NSTextField *advancedWABHostnameValue;
    NSTextField *advancedWABUsernameLabel;
    NSTextField *advancedWABUsernameValue;
    NSTextField *advancedWABPasswordLabel;
    NSTextField *advancedWABPasswordValue;
    NSView *advancedWABContainerView;
    NSButton *advancedSaveButton;
    NSButton *advancedCancelButton;
    NSUndoManager *undoManager;
    id <AUSettingsViewControllerDelegate> _delegate;
}

@property(nonatomic) id <AUSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *advancedIPv6TunnelRemoteEndView; // @synthesize advancedIPv6TunnelRemoteEndView;
@property(retain, nonatomic) NSView *advancedPPPoEView; // @synthesize advancedPPPoEView;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager;
@property(retain, nonatomic) AUInternetModel *dataModel; // @synthesize dataModel;
- (void)controlTextDidChange:(id)arg1;
- (void)advancedOptionsCancel:(id)arg1;
- (void)advancedOptionsOK:(id)arg1;
- (void)showAdvancedOptions:(id)arg1;
- (void)restoreDataModel:(id)arg1;
- (void)advancedOptionsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)focusOnControlForSetting:(id)arg1;
- (id)_controlForSetting:(id)arg1;
- (void)showAdvancedOptionsAfterDelayAndFocusOnControl:(id)arg1;
- (void)renewDHCPLease:(id)arg1;
- (void)dataModelDidLoadData:(id)arg1;
- (id)settingsErrors;
- (BOOL)settingsValid;
- (void)saveSettings;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSString *title;
- (void)awakeFromNib;
- (void)dealloc;
- (void)cleanUpObservers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)resizeAdvancedOptionsContent;
- (void)resizeAdvancedOptionsContentAndSheet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

