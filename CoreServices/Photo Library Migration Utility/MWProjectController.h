//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHCanvasViewDelegateProtocol.h"
#import "MultiPaneContentControllerProtocol.h"
#import "NSTextFieldDelegate.h"
#import "RKTerminationDelegateProtocol.h"

@class IPKPopOverWindow, IPKToolbarItem, IPKToolbarView, KHCanvasViewController, KHProductOrderController, KHProjectTooltipView, MultiPaneController, NSMenuItem, NSTimer, NSTrackingArea, NSView;

@interface MWProjectController : NSObject <MultiPaneContentControllerProtocol, KHCanvasViewDelegateProtocol, RKTerminationDelegateProtocol, NSTextFieldDelegate>
{
    NSView *_optionsContentView;
    double _sizeIncrement;
    KHCanvasViewController *_canvasViewController;
    IPKToolbarItem *_titleItem;
    IPKToolbarItem *_pageNumberItem;
    IPKToolbarItem *_pageNavItem;
    NSTrackingArea *_titleTrackingArea;
    NSTimer *_titleTooltipTimer;
    IPKPopOverWindow *_titleTooltipWindow;
    KHProjectTooltipView *_tooltipView;
    long long _viewState;
    BOOL _optionsVisible;
    BOOL _isFullScreen;
    BOOL _isModal;
    MultiPaneController *_multiPaneController;
    IPKToolbarView *_header;
    IPKToolbarItem *_backButtonItem;
    IPKToolbarItem *_addPageItem;
    IPKToolbarItem *_buyButton;
    NSMenuItem *mItalicsMenuItem;
    NSMenuItem *mInfoMenuItem;
    BOOL mShouldFlipItems;
    KHProductOrderController *_orderController;
}

+ (struct CGImage *)imageForCornerShadow;
+ (struct CGImage *)canvasViewBackgroundImage;
+ (struct CGImage *)magnifiedCanvasViewBackgroundImage;
- (void)reloadSettingsPanel;
- (void)reachabilityChanged:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)restoreState:(id)arg1 forMultiPane:(id)arg2;
- (id)archiveStateForMultiPane:(id)arg1;
- (void)didActivateMultiPaneController:(id)arg1;
- (void)willActivateMultiPaneController:(id)arg1;
- (BOOL)isProjectViewForController:(id)arg1;
- (void)terminateApplication;
- (void)currentAlbumWillSwitchFrom:(id)arg1 to:(id)arg2;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)willBeHiddenFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)populateHeaderToolbarForMultiPane:(id)arg1;
- (BOOL)wantsHeaderToolbarForMultiPane:(id)arg1;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (id)currentAlbum;
- (void)printProject;
- (void)setupOrderViewWithReset:(BOOL)arg1;
- (void)orderProject:(id)arg1;
- (void)projectChanged:(id)arg1;
- (void)layoutSelectionChanged:(id)arg1;
- (double)zoomLevel;
- (void)setControllerState:(int)arg1;
- (void)setCanvasViewController:(id)arg1;
- (void)updateActiveSettingsTab;
- (BOOL)settingsPhotosTabActive;
- (void)makeSettingsPhotosTabActive;
- (BOOL)settingsOptionsTabActive;
- (void)makeSettingsOptionsTabActive;
- (BOOL)settingsLayoutTabActive;
- (void)makeSettingsLayoutTabActive;
- (void)showProjectSettings;
- (void)addLayoutToProject;
- (void)optionsViewDidChangeDefaultImageScale:(double)arg1;
- (void)optionsViewHidden;
- (void)optionsViewWillBeHidden;
- (void)optionsViewShown;
- (void)optionsViewWillBeShown;
- (void)textEditorDidResignActive;
- (void)textEditorDidBecomeActive;
- (void)editPhotos:(id)arg1 firstIndex:(long long)arg2;
- (void)makeOptionsContentViewVisible:(BOOL)arg1;
- (void)setOptionsContentView:(id)arg1;
- (id)optionsContentView;
- (void)zoomDidChange:(double)arg1;
- (id)zoomSlider;
- (struct CGRect)rectForCanvasNavigator;
- (struct CGImage *)imageForCornerShadow;
- (struct CGImage *)canvasViewBackgroundImage;
- (struct CGImage *)magnifiedCanvasViewBackgroundImage;
- (void)updatePageNumberInfo:(id)arg1;
- (BOOL)didDoubleClickOnFrame:(id)arg1;
- (void)moveKeyboardShortcutToInfo;
- (void)moveKeyboardShortcutToItalics;
- (void)performPageNavigation:(id)arg1;
- (void)setBuyButton:(id)arg1;
- (id)buyButton;
- (void)_storeSessionDidFinish:(id)arg1;
- (void)_storeSessionDidBegin:(id)arg1;
- (void)_setModal:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)headerTooltipTimerFired:(id)arg1;
- (void)_restoreZoomState;
- (void)_storeZoomState;
- (void)_restoreOptionsViewState;
- (void)_storeOptionsViewState;
- (void)albumMessageHandler:(id)arg1;
- (void)_updateTitle;
- (id)init;

@end

