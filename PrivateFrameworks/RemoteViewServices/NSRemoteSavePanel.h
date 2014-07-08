//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAccessoryWindow, NSArray, NSError, NSRemoteSavePanelOrderingContext, NSRemoteServiceConnection, NSRemoteWindowController, NSString, NSURL, NSView;

@interface NSRemoteSavePanel : NSObject
{
    NSRemoteWindowController *_windowController;
    NSRemoteServiceConnection *_serviceConnection;
    unsigned long long _state;
    struct dispatch_queue_s *_serviceQueue;
    struct dispatch_semaphore_s *_semaphore;
    CDUnknownBlockType _completionHandler;
    NSRemoteSavePanelOrderingContext *_orderingContext;
    NSView *_accessoryView;
    NSAccessoryWindow *_accessoryWindow;
    NSArray *_allowedFileTypes;
    NSArray *_enabledFileTypes;
    id <NSOpenSavePanelDelegate> _delegate;
    NSString *_prompt;
    NSString *_title;
    NSString *_nameFieldLabel;
    NSString *_message;
    NSURL *_directoryURL;
    NSString *_nameFieldStringValue;
    NSString *_configureForFilename;
    NSString *_alertMessage;
    NSString *_alertInformationMessage;
    NSURL *_overwritingAlertSuppressionURL;
    NSString *_dontSaveButtonTitle;
    NSArray *_URLs;
    NSError *_currentErrorBeingHandled;
    NSArray *_tags;
    unsigned int _windowAllowed:2;
    unsigned int _allowsOtherFileTypes:2;
    unsigned int _canCreateDirectories:2;
    unsigned int _canSelectHiddenExtension:2;
    unsigned int _treatsFilePackagesAsDirectories:2;
    unsigned int _isExtensionHidden:2;
    unsigned int _showsHiddenFiles:2;
    unsigned int _isExpanded:2;
    unsigned int _isSheet:2;
    unsigned int _resolvesAliases:2;
    unsigned int _canChooseDirectories:2;
    unsigned int _allowsMultipleSelection:2;
    unsigned int _canChooseFiles:2;
    unsigned int _showNewDocumentButton:2;
    unsigned int _showsRevertOriginalDocumentButton:2;
    unsigned int _shouldRevertOriginalDocument:2;
    unsigned int _okButtonDisabled:2;
    unsigned int _useAlertStyle:2;
    unsigned int _mainThreadKVOActive:2;
    unsigned int _isExtensionHiddenForced:2;
    unsigned int _appCentric:2;
    unsigned int _showsTagField:2;
    unsigned int _shouldShowOptionsButton:2;
    unsigned int _isAccessoryViewDisclosed:2;
    unsigned int _kvoRegistered:1;
    unsigned int _skipInvalidateMessage:1;
    unsigned int _time_machine_presentationOptionsSet:1;
    unsigned int _showsTagFieldIsExplicit:1;
    struct __CFRunLoopObserver *_updateAccessoryViewFrameRunLoopObserver;
}

+ (id)_getURLsForCompletionHandlerRequest:(id)arg1;
+ (id)keyPathsForPanelSettings;
+ (id)savePanel;
@property BOOL appCentric; // @synthesize appCentric=_appCentric;
@property(setter=_setAccessoryViewDisclosed:) BOOL _isAccessoryViewDisclosed; // @synthesize _isAccessoryViewDisclosed;
@property(setter=_setShouldShowOptionsButton:) BOOL _shouldShowOptionsButton; // @synthesize _shouldShowOptionsButton;
@property(retain, setter=_setTags:) NSArray *_tags; // @synthesize _tags;
@property(setter=_setShowsTagField:) BOOL _showsTagField; // @synthesize _showsTagField;
@property(setter=_setShouldRevertOriginalDocument:) BOOL _shouldRevertOriginalDocument; // @synthesize _shouldRevertOriginalDocument;
@property(setter=_setShowsRevertOriginalDocumentButton:) BOOL _showsRevertOriginalDocumentButton; // @synthesize _showsRevertOriginalDocumentButton;
@property(setter=_setOkButtonDisabled:) BOOL _okButtonDisabled; // @synthesize _okButtonDisabled;
@property(setter=_setShowNewDocumentButton:) BOOL _showNewDocumentButton; // @synthesize _showNewDocumentButton;
@property(retain, getter=_dontSaveButtonTitle, setter=_setDontSaveButtonTitle:) NSString *dontSaveButtonTitle; // @synthesize dontSaveButtonTitle=_dontSaveButtonTitle;
@property(retain, setter=_setOverwritingAlertSuppressionURL:) NSURL *overwritingAlertSuppressionURL; // @synthesize overwritingAlertSuppressionURL=_overwritingAlertSuppressionURL;
@property(copy) NSString *configureForFilename; // @synthesize configureForFilename=_configureForFilename;
@property(retain, setter=_setAlertInformativeMessage:) NSString *alertInformationMessage; // @synthesize alertInformationMessage=_alertInformationMessage;
@property(retain, setter=_setAlertMessage:) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(getter=_useAlertStyle, setter=_setUseAlertStyle:) BOOL useAlertStyle; // @synthesize useAlertStyle=_useAlertStyle;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSRemoteSavePanelOrderingContext *orderingContext; // @synthesize orderingContext=_orderingContext;
@property(retain) NSArray *URLs; // @synthesize URLs=_URLs;
@property BOOL canChooseFiles; // @synthesize canChooseFiles=_canChooseFiles;
@property BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property BOOL canChooseDirectories; // @synthesize canChooseDirectories=_canChooseDirectories;
@property BOOL resolvesAliases; // @synthesize resolvesAliases=_resolvesAliases;
@property BOOL isSheet; // @synthesize isSheet=_isSheet;
@property BOOL showsHiddenFiles; // @synthesize showsHiddenFiles=_showsHiddenFiles;
@property(setter=setExtensionHidden:) BOOL isExtensionHidden; // @synthesize isExtensionHidden=_isExtensionHidden;
- (void)_setIsExpanded:(BOOL)arg1;
@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain) NSString *nameFieldStringValue; // @synthesize nameFieldStringValue=_nameFieldStringValue;
@property(retain) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) NSString *nameFieldLabel; // @synthesize nameFieldLabel=_nameFieldLabel;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *prompt; // @synthesize prompt=_prompt;
@property BOOL treatsFilePackagesAsDirectories; // @synthesize treatsFilePackagesAsDirectories=_treatsFilePackagesAsDirectories;
@property BOOL canSelectHiddenExtension; // @synthesize canSelectHiddenExtension=_canSelectHiddenExtension;
@property BOOL canCreateDirectories; // @synthesize canCreateDirectories=_canCreateDirectories;
@property id delegate; // @synthesize delegate=_delegate;
@property BOOL windowAllowed; // @synthesize windowAllowed=_windowAllowed;
@property BOOL allowsOtherFileTypes; // @synthesize allowsOtherFileTypes=_allowsOtherFileTypes;
@property(retain) NSArray *enabledFileTypes; // @synthesize enabledFileTypes=_enabledFileTypes;
@property(retain) NSArray *allowedFileTypes; // @synthesize allowedFileTypes=_allowedFileTypes;
@property(readonly) NSRemoteWindowController *controller; // @synthesize controller=_windowController;
- (id)panel;
- (void)orderOut:(id)arg1;
- (id)contentView;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_configureForFilename:(id)arg1;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void *)arg7;
- (void)beginForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modelessDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (long long)runModalForTypes:(id)arg1;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3;
@property(readonly, retain) NSArray *filenames; // @dynamic filenames;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2;
@property(retain) NSString *requiredFileType; // @dynamic requiredFileType;
@property(retain) NSString *directory; // @dynamic directory;
@property(readonly, retain) NSString *filename; // @dynamic filename;
- (void)controller:(id)arg1 hasWindowAvailable:(id)arg2;
- (void)userValueChanged:(id)arg1;
- (void)connection:(id)arg1 didReceiveError:(id)arg2;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)_handleSetPresentationOptions:(id)arg1;
- (void)_handlePerformKeyEquivalent:(id)arg1;
- (void)_handleAccessoryViewResignedFirstResponder:(id)arg1;
- (void)_handleSelectionDidChangeDelegate:(id)arg1;
- (void)_handlePanelWillExpandDelegate:(id)arg1;
- (void)_handleUserEnteredFilenameDelegate:(id)arg1;
- (void)_handleDidChangeToDirectoryURLDelegate:(id)arg1;
- (void)_attemptRecoveryFromErrorForRequest:(id)arg1;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)_handleValidateURLDelegate:(id)arg1;
- (void)_handleShouldEnableURLDelegate:(id)arg1;
- (BOOL)blacklistedSelector:(SEL)arg1;
- (void)_handlePanelComplete:(id)arg1;
- (BOOL)_createAuxiliaryConnection;
- (id)_serializeSettingsNeededDuringInitRequest;
- (BOOL)_initRemotePanelSession;
- (void)_setDefaultSettings;
- (void)_accessibilityHandleEnhancedUserInterfaceValueChanged:(id)arg1;
- (void)_accessibilityRemotePanelCompleted;
- (void)_accessibilityApplyReplyTokens:(id)arg1 windowElement:(id)arg2;
- (id)_accessibilityRequestTokensWithParent:(id)arg1;
- (id)_serializeSettings;
- (void)validateVisibleColumns;
- (long long)runModal;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_runOrderingOperationWithContext:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)_sendPanelCompletionRequest:(unsigned long long)arg1;
- (void)_accessoryViewFrameDidChange:(id)arg1;
- (void)_addRunLoopObserverIfNecessary;
- (void)_invalidateRunLoopObserver;
- (void)_sendAccessoryViewFrameDidChange;
@property(retain) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly) BOOL _showNewFolderButton; // @dynamic _showNewFolderButton;
- (void)_setTagsForClient;
- (void)setIsExtensionHidden:(BOOL)arg1;
- (id)URL;
- (void)_unregisterForKVOStateChange;
- (void)_registerForKVOStateChange;
- (void)_handleKVOStateDidChange:(id)arg1;
- (BOOL)asyncSelectFirstResponderWithDirection:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tellRemotePanelAccessoryViewBecameFirstResponder;
- (void)warmUpPowerbox;
- (void)_invalidatePBOXRemotePanelSession;
- (void)cleanup;
- (void)dealloc;
- (id)init;
@property(readonly) BOOL isRunning; // @dynamic isRunning;
- (unsigned long long)_panelType;

@end

