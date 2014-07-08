//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSColor, NSMutableArray, NSView;

@interface NSColorPanel : NSPanel
{
    id _colorSwatch;
    id _accessoryContainerView;
    id _colorWell;
    NSMutableArray *_pickersWithLoadedViews;
    id _magnifyButton;
    id _middleView;
    id _opacitySlider;
    id _opacityText;
    id _opacityView;
    id _modalButtons;
    id _pickerView;
    id _customViewsList;
    id _customPickerList;
    id _currViewObject;
    id _boxAboveSwatch;
    id _target;
    id _accessoryView;
    SEL _action;
    struct CGSize _minColorPanelSize;
    struct CGSize _maxColorPanelSize;
    id _accessoryContainerViewHeight;
    id _opacityViewHeight;
    id _resizeDimple;
    id _bottomConstraint;
    BOOL _reserved6;
    BOOL _handlingOpacityMoveAction;
    BOOL _ignoreConstraints;
    BOOL _continuous;
    BOOL _allowColorSetting;
    BOOL _stillInitializing;
    id _opacityTextController;
}

+ (id)_bundleForClassPresentInAppKit:(Class)arg1;
+ (void)_setBundle:(id)arg1 forClassPresentInAppKit:(Class)arg2;
+ (BOOL)dragColor:(id)arg1 withEvent:(id)arg2 inView:(id)arg3;
+ (BOOL)dragColor:(id)arg1 withEvent:(id)arg2 fromView:(id)arg3;
+ (BOOL)ignoreModifierKeysWhileDragging;
+ (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
+ (void)setPickerMode:(long long)arg1;
+ (void)setPickerMask:(unsigned long long)arg1;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)sharedColorPanelExists;
+ (id)sharedColorPanel;
- (void)_middleViewFrameChanged:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_reallyDoOrderWindow:(long long)arg1 relativeTo:(long long)arg2 findKey:(BOOL)arg3 forCounter:(BOOL)arg4 force:(BOOL)arg5 isModal:(BOOL)arg6;
- (id)effectiveAppearance;
- (void)setAppearance:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_colorWellAcceptedColor:(id)arg1;
- (void)_set:(id)arg1;
- (void)_forceSetColor:(id)arg1;
- (void)_switchToAppropriateModeForColorIfNecessary:(id)arg1;
@property(copy) NSColor *color;
- (void)_sendActionAndNotification;
- (void)_forceSendAction:(BOOL)arg1 notification:(BOOL)arg2 firstResponder:(BOOL)arg3;
- (id)_startingWindowForSendAction:(SEL)arg1;
- (void)detachColorList:(id)arg1;
- (void)attachColorList:(id)arg1;
@property(readonly) double alpha;
- (void)magnifierDidFailToSelectColor:(id)arg1;
- (void)magnifier:(id)arg1 didSelectColor:(id)arg2;
- (void)_magnify:(id)arg1;
- (void)_switchToPicker:(id)arg1;
- (void)_sizeWindowForPicker:(id)arg1;
- (void)_setMinPickerContentSize:(struct CGSize)arg1;
- (struct CGSize)_panelSizeExcludingToolbar;
- (void)_switchViewForToolbarItem:(id)arg1;
- (void)_saveMode;
- (struct CGSize)_newLegalSizeFromSize:(struct CGSize)arg1 force:(BOOL)arg2 roundDirection:(long long)arg3;
- (void)_dimpleDoubleClicked:(id)arg1 event:(id)arg2;
- (void)_syncSwatchSizeToSavedNumVisibleRows;
- (void)_setNumVisibleSwatchRows:(long long)arg1;
- (void)_dimpleDragStarted:(id)arg1 event:(id)arg2;
- (id)_arrayForPartialPinningFromArray:(id)arg1;
- (void)_unpinViews:(id)arg1 resizeMasks:(id)arg2;
- (id)_pinViews:(id)arg1 resizeFlagsToLeaveAlone:(long long)arg2;
- (void)_unpinViews:(id)arg1;
- (void)_pinViews:(id)arg1;
- (void)_endLiveResize;
- (long long)_savedMode;
- (void)_setupButtonImageAndToolTips;
- (id)_toolTipForColorPicker:(id)arg1;
- (void)_appendColorPicker:(id)arg1;
- (double)_insertionOrderForPicker:(id)arg1;
- (id)_colorPickers;
- (id)_constructWithPickers:(long long)arg1;
- (id)_colorPickerPaths;
- (void)_loadPickerBundlesIn:(id)arg1;
- (BOOL)_shouldLoadColorPickerWithClassName:(id)arg1;
@property BOOL showsAlpha;
- (void)_timedAdjustTextControl:(id)arg1;
- (void)_setShowAlpha:(BOOL)arg1 andForce:(BOOL)arg2;
- (void)_cancelKey:(id)arg1;
- (void)_stopModal:(id)arg1;
- (struct CGRect)_adjustedFrameForSaving:(struct CGRect)arg1;
- (struct CGRect)_adjustedFrameFromDefaults:(struct CGRect)arg1;
- (void)_setUtilityWindow:(BOOL)arg1;
- (void)_setUseModalAppearance:(BOOL)arg1;
- (void)_changeMinColorPanelSizeByDelta:(struct CGSize)arg1 setWindowFrame:(BOOL)arg2;
- (void)_changeMinColorPanelSizeByDelta:(struct CGSize)arg1 compareWithOldMinSize:(BOOL)arg2 oldMinSize:(struct CGSize)arg3 setWindowFrame:(BOOL)arg4;
- (void)_resetOpacity:(id)arg1;
- (void)_resetOpacity:(id)arg1 andForceSetColor:(BOOL)arg2;
- (id)_provideNewViewFor:(id)arg1 initialViewRequest:(BOOL)arg2;
@property long long mode;
@property(getter=isContinuous) BOOL continuous;
@property(retain) NSView *accessoryView;
- (BOOL)_determinesMinSizeFromAccessoryView:(id)arg1;
- (id)setColorMask:(long long)arg1;
- (long long)colorMask;
- (void)_storeNewColorInColorWell:(id)arg1;
- (void)_validateOpacitySlider;
- (void)setTarget:(id)arg1;
- (void)setAction:(SEL)arg1;
- (BOOL)isViewOfPickerLoaded:(id)arg1;
- (void)setViewOfPickerIsLoaded:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)colorSwathesChangedInAnotherApplicationNotification:(id)arg1;
- (id)_keyViewFollowingModalButtons;
- (id)_keyViewPrecedingModalButtons;
- (id)_keyViewFollowingOpacityViews;
- (id)_keyViewFollowingAccessoryView;
- (id)_keyViewPrecedingAccesoryView;
- (id)_keyViewFollowingPickerViews;
- (id)_keyViewPrecedingPickerViews;
- (void)_selectFirstKeyView;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (void)changeWindowFrameSizeByDelta:(struct CGSize)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setTitleFixedPointWindowFrame:(struct CGSize)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)dealloc;
- (void)setHidesOnDeactivate:(BOOL)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)__swatchColors;
- (void)__setNumberOfRowsToToggleVisibleInColorSwatch:(long long)arg1;
- (long long)__numberOfRowsToToggleVisibleInColorSwatch;
- (long long)__numberOfVisibleRowsInColorSwatch;
- (SEL)__action;
- (id)__target;

@end

