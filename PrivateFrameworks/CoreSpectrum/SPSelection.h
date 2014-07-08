//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, SPWorkspaceWindowController;

@interface SPSelection : NSObject
{
    SPWorkspaceWindowController *_workspace;
    NSArray *_palettes;
    NSArray *_elements;
    NSArray *_elementParts;
    NSArray *_layers;
    NSArray *_elementStates;
    NSArray *_effects;
    NSArray *_styles;
    NSHashTable *_selectionObservers;
    id _senderForCurrentChanges;
    NSMutableSet *_keysWithPendingNotifications;
    NSMutableDictionary *_selectionChangeSendersByKey;
}

+ (void)initialize;
+ (id)selection;
+ (id)selectionWithWorkspace:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *selectionChangeSendersByKey; // @synthesize selectionChangeSendersByKey=_selectionChangeSendersByKey;
@property(retain, nonatomic) NSMutableSet *keysWithPendingNotifications; // @synthesize keysWithPendingNotifications=_keysWithPendingNotifications;
@property(nonatomic) id senderForCurrentChanges; // @synthesize senderForCurrentChanges=_senderForCurrentChanges;
@property(retain, nonatomic) NSHashTable *selectionObservers; // @synthesize selectionObservers=_selectionObservers;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(copy, nonatomic) NSArray *elementStates; // @synthesize elementStates=_elementStates;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(copy, nonatomic) NSArray *elementParts; // @synthesize elementParts=_elementParts;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSArray *palettes; // @synthesize palettes=_palettes;
@property(nonatomic) SPWorkspaceWindowController *workspace; // @synthesize workspace=_workspace;
- (BOOL)proposedValue:(id)arg1 isEqualToCurrentValueForSelectionKey:(id)arg2;
- (void)addKeyWithPendingNotification:(id)arg1;
- (void)setPrivateStylesValue:(id)arg1;
- (void)setPrivateEffectsValue:(id)arg1;
- (void)setPrivateElementStatesValue:(id)arg1;
- (void)setPrivateLayersValue:(id)arg1;
- (void)setPrivateElementPartsValue:(id)arg1;
- (void)setPrivateElementsValue:(id)arg1;
- (BOOL)containsDisabledNotifications;
- (void)clearNotificationStateOfObserver:(id)arg1 forSelectionKey:(id)arg2;
- (void)disableNotificationOfObserver:(id)arg1 forSelectionKey:(id)arg2;
- (BOOL)shouldNotifyObserver:(id)arg1 forSelectionKey:(id)arg2;
- (void)notifyObserversForChangedSelectionKey:(id)arg1;
- (void)selectLayersForSelectedElementParts;
- (void)selectElementPartsForSelectedElements;
- (void)selectStyles:(id)arg1 withSender:(id)arg2;
- (void)selectEffects:(id)arg1 withSender:(id)arg2;
- (void)selectElementStates:(id)arg1 withSender:(id)arg2;
- (void)selectLayers:(id)arg1 withSender:(id)arg2;
- (void)selectElementParts:(id)arg1 withSender:(id)arg2;
- (void)selectElements:(id)arg1 withSender:(id)arg2;
- (void)removeSelectionObserver:(id)arg1;
- (void)addSelectionObserver:(id)arg1;
- (void)endChangesWithSender:(id)arg1;
- (void)beginChangesWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1;
- (id)init;

@end

