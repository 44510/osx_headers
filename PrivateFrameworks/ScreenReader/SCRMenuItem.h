//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRMenuItem : SCRMapElement
{
    struct CGPoint _cachedMidPoint;
}

- (id)shortcutSelectionElements;
- (BOOL)isMenuBarItem;
- (unsigned long long)viewFinderStyle;
- (BOOL)isSelected;
- (BOOL)gestureTrackingMovesSelectionToVOC;
- (BOOL)synchVOCursorToKeyboard:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (id)description;
- (void)endFocus;
- (void)addElementSummaryToRequest:(id)arg1;
- (void)addItemDescriptionForBrailleToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (void)addItemDescriptionForCommand:(id)arg1 toRequest:(id)arg2;
- (void)_addKeyboardShortcutToRequest:(id)arg1;
- (id)shortInstruction;
- (id)insideOfDescriptionForContextualHelp;
- (id)contextualHelpToSpeak;
- (id)typeDescription;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (BOOL)itemDescriptionHasChanged;
- (BOOL)monitorItemDescriptionChanges;
- (void)addItemNameToRequest:(id)arg1;
- (void)outputChildrenSummary:(id)arg1;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)valueDescription;
- (id)titleDescription;
- (BOOL)focusIntoMenuWithRequest:(id)arg1;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (id)_containerOfInteractiveDescendants;
- (BOOL)_hasInteractiveDescendants;
- (BOOL)_hasInteractiveElementsInArray:(id)arg1;
- (BOOL)_hasNavigableChildrenInArray:(id)arg1;
- (BOOL)hasNavigableChildren;
- (BOOL)hasSubmenu;
- (BOOL)parentIsMenubar;
- (BOOL)isSubMenuVisible;
- (void)highlight;
- (id)defaultActionName;

@end

