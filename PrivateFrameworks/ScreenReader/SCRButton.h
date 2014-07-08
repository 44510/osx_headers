//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

__attribute__((visibility("hidden")))
@interface SCRButton : SCRMapElement
{
    double _lastActionTime;
}

- (void)defaultActionDispatchHandler:(struct __SCREventDispatcherHandlerInfo *)arg1;
- (void)defaultActionEndedDispatchHandler:(struct __SCREventDispatcherHandlerInfo *)arg1;
- (BOOL)performAlternateActionWithRequest:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)_handleActionRepeatKeyUpWithRequest:(id)arg1;
- (BOOL)tabOrDrillInShouldTempDisableQuickNav;
- (BOOL)isPopupButton;
- (id)nextElement;
- (id)previousElement;
- (id)siblingTabUIElements;
- (BOOL)isTab;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (BOOL)monitorItemDescriptionChanges;
- (BOOL)isSelected;
- (BOOL)isControlElement;
- (id)defaultActionName;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (void)appendSelectedStatusDescription:(id)arg1;
- (id)valueDescription;
- (BOOL)canNavigateToChildren;
- (BOOL)isInteractive;
- (id)onlyChild;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

