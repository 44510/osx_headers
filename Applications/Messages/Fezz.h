//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FezHotKeyHandler.h"
#import "NSActivityApplicationDelegate.h"
#import "NSApplicationDelegate.h"
#import "NSMenuDelegate.h"
#import "SOURLFetcherDelegate.h"
#import "SOUnreadCountHelperDelegate.h"

@class NSAlert, NSArray, NSDictionary, NSMenuItem, NSMutableArray, NSMutableDictionary, NSString, NSWindow, SOUnreadCountHelper, StatusController;

@interface Fezz : NSObject <FezHotKeyHandler, NSActivityApplicationDelegate, NSApplicationDelegate, NSMenuDelegate, SOUnreadCountHelperDelegate, SOURLFetcherDelegate>
{
    NSMenuItem *_smileyMenuItem;
    NSMenuItem *_balloonMenuItem;
    NSMenuItem *_firstServiceStatusItem;
    NSMenuItem *_statusSeparatorMenuItem;
    NSMenuItem *_myStatusMenuItem;
    NSMenuItem *_firstPeopleListMenuItem;
    NSMenuItem *_changeMyPictureMenuItem;
    NSMenuItem *_servicesMenuItem;
    NSMenuItem *_editAddLinkSeparatorMenuItem;
    NSMenuItem *_editAddLinkMenuItem;
    NSMenuItem *_viewShowSeparatorMenuItem;
    NSMenuItem *_viewShowBuddyPicturesMenuItem;
    NSMenuItem *_viewShowAudioStatusMenuItem;
    NSMenuItem *_viewShowVideoStatusMenuItem;
    NSMenuItem *_viewShowOfflineBuddiesMenuItem;
    NSMenuItem *_viewUseGroupsMenuItem;
    NSMenuItem *_viewUssOfflineGroupsMenuItem;
    NSMenuItem *_viewSortBuddiesMenuItem;
    NSMenuItem *_viewMessagesOptionsMenuItem;
    NSMenuItem *_buddiesShowInfoMenuItem;
    NSMenuItem *_buddiesShowProfileMenuItem;
    NSMenuItem *_buddiesShowInBuddyListMenuItem;
    NSMenuItem *_buddiesAddABuddyMenuItem;
    NSMenuItem *_buddiesRemoveABuddyMenuItem;
    NSMenuItem *_buddiesStartNewChatMenuItem;
    NSMenuItem *_buddiesSharingSeparatorMenuItem;
    NSMenuItem *_buddiesInviteToVideoChatMenuItem;
    NSMenuItem *_buddiesInviteToAudioChatMenuItem;
    NSMenuItem *_buddiesShareMyScreenMenuItem;
    NSMenuItem *_buddiesShareRemoteScreenMenuItem;
    NSMenuItem *_buddiesEndScreenSharingMenuItem;
    NSMenuItem *_buddiesAuthSeparatorMenuItem;
    NSMenuItem *_buddiesBlockPersonMenuItem;
    NSMenuItem *_buddiesRequestAuthorizationMenuItem;
    NSMenuItem *_buddiesNewGroupSeparatorMenuItem;
    NSMenuItem *_buddiesCreateNewGroupWithPeople;
    NSMenuItem *_formatMenuItem;
    NSMenuItem *_diagnosticsModeMenuItem;
    NSMenuItem *_collectLogsMenuItem;
    NSMenuItem *_collectLogsMenuSeparatorItem;
    StatusController *_statusController;
    StatusController *_dockStatusController;
    NSArray *_inviteData;
    NSMutableArray *_aeQueue;
    BOOL _connectedToDaemon;
    NSMenuItem *_switchToMenuItem;
    long long _switchToMenuIndex;
    NSWindow *_chooserWindow;
    NSAlert *_aliasValidationAlert;
    NSMutableDictionary *_hotKeyInfo;
    NSMutableDictionary *_chatWindowControllerToChatMap;
    NSDictionary *_buddyIconDownloadInfo;
    BOOL _finishedLaunching;
    BOOL _finishedDelayedLaunching;
    BOOL _finishedDeferredLaunching;
    BOOL _hasSetupAVController;
    BOOL _terminating;
    BOOL _isTogglingWindow;
    NSMutableArray *_filesToOpen;
    SOUnreadCountHelper *_unreadCountHelper;
    BOOL _isInLegacyMode;
    NSMenuItem *_avMenuItem;
    long long _indexOfAVMenu;
    NSMenuItem *_deleteConversationMenuItem;
    NSMenuItem *_closeConversationMenuItem;
    NSMenuItem *_closeAllConversationsMenuItem;
}

+ (BOOL)hasUnsentMessages;
+ (unsigned long long)_totalUnreadMessageCount;
+ (unsigned long long)numberOfUnreadMessages;
+ (void)connectToDaemon;
+ (void)triggerStartConnecting;
+ (void)dismissCouldNotConnectDialog;
+ (void)showCouldNotConnectDialog;
+ (id)sharedInstance;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (int)drainTALCompletionHandlers;
+ (long long)restorableStateStorageVersion;
@property(nonatomic) BOOL isInLegacyMode; // @synthesize isInLegacyMode=_isInLegacyMode;
@property(retain, nonatomic) NSMenuItem *closeAllConversationsMenuItem; // @synthesize closeAllConversationsMenuItem=_closeAllConversationsMenuItem;
@property(retain, nonatomic) NSMenuItem *closeConversationMenuItem; // @synthesize closeConversationMenuItem=_closeConversationMenuItem;
@property(retain) NSMenuItem *deleteConversationMenuItem; // @synthesize deleteConversationMenuItem=_deleteConversationMenuItem;
@property(nonatomic) long long indexOfAVMenu; // @synthesize indexOfAVMenu=_indexOfAVMenu;
@property(retain, nonatomic) NSMenuItem *avMenuItem; // @synthesize avMenuItem=_avMenuItem;
- (void)setImageAtURL:(id)arg1 forIMHandle:(id)arg2 allowEditing:(BOOL)arg3;
- (void)_cleanUpDownloadWithError:(BOOL)arg1;
- (void)_setImage:(id)arg1 forIMHandle:(id)arg2 allowEditing:(BOOL)arg3;
- (void)urlFetcher:(id)arg1 fetchFailedWithError:(id)arg2;
- (void)urlFetcher:(id)arg1 fetchedResult:(id)arg2;
- (id)statusController;
- (id)chooserWindow;
- (void)showProfileForIMHandle:(id)arg1;
- (void)showInfoForIMHandle:(id)arg1;
- (void)doAddBuddyCommandForIMHandle:(id)arg1 withWindow:(id)arg2;
- (void)handleHotKey:(long long)arg1;
- (void)markChatGUIDAsRead:(id)arg1;
- (BOOL)isChatActive:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)openFilesAfterLaunch;
- (id)_openFile:(id)arg1;
- (void)_unreadCountChanged:(id)arg1;
- (void)checkDaemonConnection;
- (void)dealloc;
- (id)init;
- (void)resurrectPersistentChats;
- (void)application:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)application:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_revealLocalLogs:(id)arg1;
- (void)diagnosticsMode:(id)arg1;
- (void)collectLogs:(id)arg1;
- (void)sortConversationsManually:(id)arg1;
- (void)sortConversationsByDate:(id)arg1;
- (void)toggleMute:(id)arg1;
- (BOOL)forwardValidateMenuItem:(id)arg1 toController:(id)arg2;
- (void)logBuddyListInOrOut:(id)arg1;
- (void)performClose:(id)arg1;
- (void)terminate:(id)arg1;
- (void)unhideAllApplications:(id)arg1;
- (void)hideOtherApplications:(id)arg1;
- (void)hide:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)toggleRecording:(id)arg1;
- (void)toggleHideLocalVideo:(id)arg1;
- (void)addABuddy:(id)arg1;
- (void)sortByLastName:(id)arg1;
- (void)sortByFirstName:(id)arg1;
- (void)sortByStatus:(id)arg1;
- (void)sortByName:(id)arg1;
- (void)sortManually:(id)arg1;
- (void)doNothing:(id)arg1;
- (void)toggleUsesOfflineGroup:(id)arg1;
- (void)toggleArrangesByGroup:(id)arg1;
- (void)toggleShowOfflines:(id)arg1;
- (void)toggleHideVideoStatus:(id)arg1;
- (void)toggleHideAudioStatus:(id)arg1;
- (void)toggleHidePictures:(id)arg1;
- (void)toggleUnifiedChatWindow:(id)arg1;
- (void)block:(id)arg1;
- (void)deleteSelectedBuddies:(id)arg1;
- (void)togglePublishARD:(id)arg1;
- (void)togglePublishCamera:(id)arg1;
- (void)togglePublishMic:(id)arg1;
- (void)toggleEffectsPalette:(id)arg1;
- (void)toggleNameDisplay:(id)arg1;
- (void)changeBuddyPicture:(id)arg1;
- (void)showAddressBook:(id)arg1;
- (void)showSelfPreview:(id)arg1;
- (void)resetBackground:(id)arg1;
- (void)showVCInfo:(id)arg1;
- (void)cancelARDSession:(id)arg1;
- (void)inviteToARDAsServer:(id)arg1;
- (void)inviteToARDAsClient:(id)arg1;
- (void)inviteToVideoChat:(id)arg1;
- (void)inviteToAudioChat:(id)arg1;
- (void)showFileTransferManager:(id)arg1;
- (void)showPeopleListControllerWithActivate:(id)arg1;
- (void)showPeopleListControllerForAccount:(id)arg1;
- (void)showPeopleListControllerForBuddyListAccount:(id)arg1;
- (void)showPeopleListController:(id)arg1;
- (void)toggleAccountConnection:(id)arg1;
- (void)_togglePeopleList:(id)arg1;
- (void)closeAllConversations:(id)arg1;
- (void)goToChat:(id)arg1;
- (void)newChat:(id)arg1;
- (void)showVideoPrefs:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)showAccounts:(id)arg1;
- (void)showPrefs:(id)arg1;
- (void)showAbout:(id)arg1;
- (void)sendStyleMessageTracerData;
- (void)_handleGURLAppleEvent:(id)arg1 reply:(id)arg2;
- (id)_accountForMessagingStringIDs:(id)arg1;
- (BOOL)_handleRequestFor:(id)arg1 style:(int)arg2 roomName:(id)arg3 message:(id)arg4 error:(id *)arg5;
- (id)_generateErrorWithReason:(id)arg1 descriptiveText:(id)arg2;
- (BOOL)_confirmAndGoToChatRoom:(id)arg1 account:(id)arg2;
- (BOOL)_confirmAndInviteToARD:(BOOL)arg1 imHandles:(id)arg2;
- (BOOL)_confirmAndInviteToAVChatVideo:(BOOL)arg1 imHandles:(id)arg2;
- (BOOL)_confirmActionWithMessage:(id)arg1 info:(id)arg2 button:(id)arg3;
- (id)_handleTextComposeRequestFor:(id)arg1 style:(int)arg2 roomName:(id)arg3 message:(id)arg4;
- (id)_imHandlesWithCardUIDs:(id)arg1 forAccount:(id)arg2 preferOnline:(BOOL)arg3;
- (id)_imHandlesWithCardUIDs:(id)arg1 forSpecificAccount:(id)arg2;
- (id)_imHandlesWithIDs:(id)arg1 forAccount:(id)arg2;
- (void)_handleAEQueue;
- (void)_installAEHandlers;
- (void)setChooserWindow:(id)arg1;
- (void)awakeFromNib;
- (void)_populateChatMenuItems;
- (BOOL)isAppTerminating;
- (BOOL)isAppLaunching;
- (BOOL)delayedLaunchComplete;
- (BOOL)deferredLaunchComplete;
- (void)afterLaunchMakeObject:(id)arg1 performSelector:(SEL)arg2;
- (void)_dockItemPicked:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (void)updatePeopleListWindowItem;
- (void)_updateBuddyListMenu:(id)arg1;
- (void)_removeOpenRecentMenu;
- (BOOL)activateRecentChat;
- (void)_displayChatController:(id)arg1;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)_showTransferFromNotification:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_daemonConnected;
- (void)_addressBookChanged:(id)arg1;
- (void)_updateLegacyMode:(id)arg1;
- (void)_updateLegacyMode;
- (void)_aliasValidationStatusChanged:(id)arg1;
- (void)setupFinished:(id)arg1;
- (void)_delayedApplicationLoading;
- (BOOL)shouldShowSetup;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (void)unifiedModeChanged:(id)arg1;
- (void)_messageSeletionChanged:(id)arg1;
- (void)_profileValidationChanged;
- (void)_timeZoneChanged;
- (void)_setupViceroy;
- (void)_deferredApplicationDidFinishLaunching;
- (void)_setupAVControllerIfNeeded;
- (void)_finishDeferredLaunching;
- (void)_loadBuddyLists;
- (void)_unloadBuddyLists;
- (void)createRequiredFolders;
- (void)_createDownloadsFolder;
- (void)_updateLaunchOnMessageReceipt;
- (void)_migrateAIMAccountsToAPI;
- (id)_menuItemWithTitle:(id)arg1 fromArray:(id)arg2 withPossibleSelectors:(id)arg3;
- (id)activeChat;
- (void)restoreArchivedChats:(id)arg1;
- (void)_prepareInternals;
- (void)_saveCameraSettings;
- (void)_createCacheFolder;
- (void)_initAVMenu;
- (void)_updateAVMenu;
- (void)unregisterGlobalHotKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

