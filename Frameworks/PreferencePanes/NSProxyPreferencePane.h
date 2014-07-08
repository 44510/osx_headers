//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PreferencePanes/NSPreferencePane.h>

#import "PreferencePaneHostProtocol.h"

@class NSRemoteView, NSString, NSXPCConnection;

@interface NSProxyPreferencePane : NSPreferencePane <PreferencePaneHostProtocol>
{
    NSString *_remoteViewClass;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSXPCConnection *_connection;
    NSRemoteView *_remoteView;
}

@property(retain) NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain) NSString *path; // @synthesize path=_path;
@property(retain) NSString *remoteViewClass; // @synthesize remoteViewClass=_remoteViewClass;
- (void)presentPKSheetForPluginWithAttributes:(id)arg1 pkIdentifier:(id)arg2 serviceName:(id)arg3 serviceSubclassName:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)switchToPanel:(id)arg1 anchor:(id)arg2;
- (void)switchToPanel:(id)arg1;
- (void)setSuddenTerminationEnabled:(BOOL)arg1;
- (void)handleOpenParameter:(const struct AEDesc *)arg1;
@property(readonly) NSXPCConnection *connection; // @dynamic connection;
- (void)authorize;
- (void)openDocumentAtPath:(id)arg1;
- (void)revealElementForKey:(id)arg1;
- (id)helpMenuItems;
- (int)shouldUnselect;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didUnhide;
- (void)willUnhide;
- (void)didHide;
- (void)willHide;
- (void)didUnselect;
- (void)willUnselect;
- (void)didSelect;
- (void)willSelect;
- (void)willSelectWithReply:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)assignMainView;
- (id)mainNibName;
- (id)loadMainView;
- (id)initWithPrefPaneBundle:(id)arg1;

@end

