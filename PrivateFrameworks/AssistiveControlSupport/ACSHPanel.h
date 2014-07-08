//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPanelElement.h>

@class NSArray, NSString;

@interface ACSHPanel : ACSHPanelElement
{
    BOOL _hidesSwitchDock;
    BOOL _hidesSwitchDockContextualButtons;
    int _transientScreenPosition;
    NSString *_name;
    NSArray *_associatedApplications;
    NSArray *_postContextButtons;
    NSArray *_preContextButtons;
    double _viewingZoomScale;
    double _viewingAlpha;
    NSString *_keyboardPhysicalType;
    long long _keyboardHWType;
    unsigned long long _showLocation;
    unsigned long long _displayOrder;
    unsigned long long _scanStyle;
    unsigned long long _glidingLensSize;
    NSString *_currentInputSourceName;
    struct CGRect _postContextButtonRect;
}

+ (struct CGSize)defaultIconPadding;
+ (struct CGSize)defaultIconSize;
+ (Class)classForDict:(id)arg1;
@property(nonatomic) struct CGRect postContextButtonRect; // @synthesize postContextButtonRect=_postContextButtonRect;
@property(copy, nonatomic) NSString *currentInputSourceName; // @synthesize currentInputSourceName=_currentInputSourceName;
@property(nonatomic) unsigned long long glidingLensSize; // @synthesize glidingLensSize=_glidingLensSize;
@property(nonatomic) unsigned long long scanStyle; // @synthesize scanStyle=_scanStyle;
@property(nonatomic) unsigned long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(nonatomic) int transientScreenPosition; // @synthesize transientScreenPosition=_transientScreenPosition;
@property(nonatomic) unsigned long long showLocation; // @synthesize showLocation=_showLocation;
@property(nonatomic) BOOL hidesSwitchDockContextualButtons; // @synthesize hidesSwitchDockContextualButtons=_hidesSwitchDockContextualButtons;
@property(nonatomic) long long keyboardHWType; // @synthesize keyboardHWType=_keyboardHWType;
@property(retain, nonatomic) NSString *keyboardPhysicalType; // @synthesize keyboardPhysicalType=_keyboardPhysicalType;
@property(retain, nonatomic) NSArray *preContextButtons; // @synthesize preContextButtons=_preContextButtons;
@property(retain, nonatomic) NSArray *postContextButtons; // @synthesize postContextButtons=_postContextButtons;
@property(retain, nonatomic) NSArray *associatedApplications; // @synthesize associatedApplications=_associatedApplications;
@property(nonatomic) BOOL hidesSwitchDock; // @synthesize hidesSwitchDock=_hidesSwitchDock;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (void)_updateRectAndGroupingForOrderedElements:(id)arg1;
- (id)_groupForPanelElements:(id)arg1;
- (id)_alphabeticallySortedElementsForPanelElements:(id)arg1;
- (id)createAlphabeticallyOrderedPanel;
- (BOOL)hasGroupAsTopLevelElement;
- (BOOL)isDefaultKeyboard;
- (BOOL)isSystemKeyboardPanel;
- (BOOL)isSystemPanel;
- (BOOL)isHomePanel;
- (id)textPredictionList;
- (id)panelElementsFromIndexPath:(id)arg1 inclusiveOfStart:(BOOL)arg2;
- (id)panelElementsFromIndexPath:(id)arg1;
- (unsigned long long)numberOfTrailingExtrasForItemAtIndexPath:(id)arg1;
- (id)panelElementAtIndexPath:(id)arg1;
- (id)soundIdentifierForItemAtIndexPath:(id)arg1;
- (id)spokenDescriptionForItemAtIndexPath:(id)arg1;
- (void)updateToKeyboardLayout:(id)arg1;
- (BOOL)updateContextButtonRects;
- (void)_setContextButtons:(id)arg1 forLocalContextButtons:(id *)arg2;
- (void)setPanelElements:(id)arg1;
@property(nonatomic) int screenPosition; // @dynamic screenPosition;
@property(nonatomic) double viewingAlpha; // @synthesize viewingAlpha=_viewingAlpha;
@property(nonatomic) double viewingZoomScale; // @synthesize viewingZoomScale=_viewingZoomScale;
- (void)setViewingZoomScaleIndex:(long long)arg1;
- (id)dictionaryForSaving;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (void)_initWithPlistDictionary:(id)arg1;
- (double)windowPadding;

@end

