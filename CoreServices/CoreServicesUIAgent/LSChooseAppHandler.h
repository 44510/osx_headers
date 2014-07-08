//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSChooseAppHandlerAccessoryViewControllerDelegate.h"
#import "NSOpenSavePanelDelegate.h"

@class LSChooseAppHandlerAccessoryViewController, NSDictionary, NSOpenPanel, NSString;

@interface LSChooseAppHandler : NSObject <NSOpenSavePanelDelegate, LSChooseAppHandlerAccessoryViewControllerDelegate>
{
    id _delegate;
    NSDictionary *_dict;
    CDStruct_4c969caf _clientAuditToken;
    LSChooseAppHandlerAccessoryViewController *_accessoryViewController;
    NSOpenPanel *_currentPanel;
}

+ (id)applicationsDirectoryURL;
+ (int)openURL:(id)arg1 withApplication:(id)arg2 clientAuditToken:(const CDStruct_4c969caf *)arg3;
- (void).cxx_destruct;
- (void)chooseAppAccessoryViewControllerDidChangeOptions:(id)arg1 shouldUpdateBrowserView:(BOOL)arg2;
- (void)panelSelectionDidChange:(id)arg1;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)chooseApp;
- (void)dealloc;
- (id)initWithDict:(id)arg1 delegate:(id)arg2 clientAuditToken:(const CDStruct_4c969caf *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

