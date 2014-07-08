//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "PVEventInterceptorDelegate.h"

@class NSArray, NSMutableDictionary, NSString, PVInspectorMultiPanelView, PVWindowController;

@interface PVInspectorWindowController : NSWindowController <PVEventInterceptorDelegate>
{
    PVInspectorMultiPanelView *_multiPanelView;
    PVWindowController *_inspectedWindowController;
    long long _currentContentKind;
    BOOL _isObserving;
    NSMutableDictionary *_panelControllersForDocumentTypes;
    NSArray *_currentPanelControllers;
    NSString *_panelNibNameToUseOnShow;
    BOOL _recentlySelectedRelevantPanel;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (id)inspectorSetupPDF;
- (id)inspectorSetupQuickLook;
- (id)inspectorSetupC3D;
- (id)inspectorSetupImages;
- (id)inspectorSetupNoDocument;
- (BOOL)_selectPanelWithNibName:(id)arg1;
- (void)showPanelSetForContentKind:(long long)arg1;
- (void)removeInspectedWindowControllerFromCurrentPanelSet;
- (void)setInspectedWindowControllerOnCurrentPanelSet;
- (void)_performUpdate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (void)startObserving;
- (BOOL)validateMenuItem:(id)arg1;
- (id)inspectedWindowController;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (BOOL)currentPanelTypeIsEqualTo:(int)arg1;
- (void)setCurrentlyRelevantPanel:(int)arg1;
- (void)setCurrentlyRelevantPanelNibName:(id)arg1;
- (id)currentPanelNibName;
@property(readonly) BOOL isVisible;
- (void)windowWillCloseNotification:(id)arg1;
- (void)hideInspector;
- (void)showInspector;
- (void)toggleInspector:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (id)windowFrameAutosaveName;
- (void)dealloc;
- (id)init;

@end

