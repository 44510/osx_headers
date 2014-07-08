//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class SCRTextMarkerRange;

__attribute__((visibility("hidden")))
@interface SCRTextArea : SCRMapElement
{
    CDStruct_43d3e2ba _command;
    BOOL _observingSelectedTextChangedNotification;
}

@property(nonatomic, getter=isObservingSelectedTextChangedNotification) BOOL observingSelectedTextChangedNotification; // @synthesize observingSelectedTextChangedNotification=_observingSelectedTextChangedNotification;
@property(nonatomic) CDStruct_43d3e2ba command; // @synthesize command=_command;
- (id)typeDescription;
- (id)valueDescription;
- (id)attributedValueDescription;
@property(retain, nonatomic) SCRTextMarkerRange *lastSelectedTextMarkerRange;
- (void)setSelectedTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)selectedTextMarkerRangeWithUIElement:(id)arg1;
- (BOOL)shouldHandleTextSelection;
- (BOOL)shouldHandleTextNavigation;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (id)newOutputRequestForTextMarkerRange:(id)arg1 withUIElement:(id)arg2 command:(CDStruct_43d3e2ba)arg3 lastSelectedTextMarkerRange:(id)arg4 selectedTextMarkerRange:(id)arg5;
- (void)moveInsertionToElement:(id)arg1;
- (void)handleTextSelectionWithUIElement:(id)arg1 command:(CDStruct_43d3e2ba)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4;
- (void)handleTextNavigationWithUIElement:(id)arg1 command:(CDStruct_43d3e2ba)arg2 lastSelectedTextMarkerRange:(id)arg3 selectedTextMarkerRange:(id)arg4;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)dealloc;
- (void)_updateCursorWithElement:(id)arg1 bounds:(struct CGRect)arg2;
- (void)_updateCommandWithEvent:(id)arg1;
- (id)_outputRequestComponentsForAttributedString:(id)arg1;
- (void)_unregisterSelectedTextChangedObserverIfNeeded;
- (void)_registerSelectedTextChangedObserverIfNeeded;
- (id)_lineFeedCharacterAttributedString;
- (void)_handleSelectedTextChangedNotification:(id)arg1;
- (id)_firstNavigableElementForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)_firstLinkOrNavigableElementForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (unsigned long long)_clampedLengthForTextMarkerRange:(id)arg1 withUIElement:(id)arg2;
- (id)_attachmentCharacterAttributedString;
- (void)_addAttributedStringOutputToOutputRequest:(id)arg1 attributedString:(id)arg2;

@end

